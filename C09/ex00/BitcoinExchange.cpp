# include "BitcoinExchange.hpp"


struct tm   strToUnix(std::string date)
{
    struct tm   tm = {};
    
    strptime(date.c_str(), "%Y-%m-%d", &tm);
    return tm;
}

//  size_t strftime( char* str, size_t count, const char* format, const tm* time );

std::string    unixToStr(long int date)
{
    time_t      time = date;

    return asctime(gmtime(&time));
}

//  char *strptime(const char *buf, const char *format, struct tm *tm);
void    BitcoinExchange::buildBuffer(dataSet &buffer, char separator)
{
    size_t  pos = buffer.date.rfind(separator);
    if (pos == std::string::npos)
        throw InputErrorException();

    buffer.rate = std::atof(buffer.date.substr(pos + 1).c_str());
    if (buffer.rate > 1000000.0)
        throw InputErrorNumberTooBigException();
    else if (buffer.rate < 0.0)
        throw InputErrorNumberTooNegativeException();
    buffer.date.erase(pos, std::string::npos);
    buffer.unixDate = strToUnix(buffer.date);
    buffer.t_unixDate = mktime(&buffer.unixDate);
}

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const std::string &filename) : _filename(filename)
{
    //  init database csv;
    std::ifstream    databaseFile;
    databaseFile.open("data.csv");
    if (!databaseFile.is_open())
        throw DatabaseFileOpenException();

    std::string                 buffer;
    BitcoinExchange::dataSet    dataBuffer;
    while(databaseFile.good())
    {
        try
        {
            std::getline(databaseFile, buffer);
            dataBuffer.date = buffer;
            buildBuffer(dataBuffer, ',');
            dataBase.push_back(dataBuffer);
        }
        catch(const std::exception& e)
        {
            std::cerr << "error: "<< e.what() << " at: " << buffer << '\n';
        }
    }
    databaseFile.close();
    buffer = "";

    //  init input    
    databaseFile.open(filename.c_str());
    if (!databaseFile.is_open())
        throw InputFileException();
    while(databaseFile.good())
    {
        try
        {
            std::getline(databaseFile, buffer);
            dataBuffer.date = buffer;
            buildBuffer(dataBuffer, '|');
            inputData.push_back(dataBuffer);
        }
        catch(const std::exception& e)
        {
            std::cerr << "error: "<< e.what() << " at: " << dataBuffer.date << '\n';
        }
    }
    databaseFile.close();
    buffer.empty();
    std::cout << "databases initialised ..." << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) : _filename(obj._filename), dataBase(obj.dataBase), inputData(obj.inputData)
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
    if (&src != this)
    {
        _filename = src._filename;
        dataBase = src.dataBase;
        inputData = src.inputData;
    }
    return *this;
}

void    BitcoinExchange::listValues(void)
{
    int i = 0;
    for (std::vector<BitcoinExchange::dataSet>::iterator iter = inputData.begin(); iter != inputData.end(); ++iter)
    {
        i = 0;
        for (std::vector<BitcoinExchange::dataSet>::iterator iterDB = dataBase.begin(); iterDB != dataBase.end(); iterDB++)
        {
            if (iterDB->t_unixDate == iter->t_unixDate)
            {
                std::cout << "Found match for : " << iter->date << " \n>> rate: " << iterDB->rate << "*" << iter->rate << " = " << iterDB->rate * iter->rate << std::endl << std::endl;
                i = 1;
                break ;
            }
            else if (iter->t_unixDate < iterDB->t_unixDate)
            {
                iterDB--;
                std::cout << "Found approximative match for : " << iter->date << " at: " << iterDB->date << " \n>> rate: " << iterDB->rate << "*" << iter->rate << " = " << iterDB->rate * iter->rate << std::endl << std::endl;
                i = 1;
                break ;
            }
        }
        if (i == 0)
            std::cout << "Could not find approximative match for : " << iter->date << " \n>> last rate: " << dataBase.back().rate << "*" << iter->rate << " = " << dataBase.back().rate * iter->rate << std::endl << std::endl;
    }
}

BitcoinExchange::~BitcoinExchange()
{

}
