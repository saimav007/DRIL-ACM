#include "lib.h"
#include<iostream>
#include<chrono>
#include<ctime>
#include <iomanip> 
#include<sstream>
Logger::Logger(const string& name,int level):loggerName(name),loggerLevel(level){}
 void Logger::log(const string& message){
    auto now=chrono::system_clock::now();
    time_t now_c=chrono::system_clock::to_time_t(now);
    stringstream timeStream;
    timeStream<<put_time(localtime(&now_c),"%Y-%m-%d %X");
    cout<<" [ "<<timeStream.str()<<" ] "<<"Level:"<<loggerLevel<<",Name:"<<loggerName<<", OS: os name,message:"<<message<<endl;
 }