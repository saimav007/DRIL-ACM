#ifndef LIB_H
#define LIB_H
#include<string>
using namespace std;

class Logger{
    public:
    Logger(const string& name,int level);
    void log(const string& message);
    private :
    string loggerName;
    int loggerLevel;

};
#endif
