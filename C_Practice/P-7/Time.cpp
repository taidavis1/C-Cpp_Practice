#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time(){

    hours = 0;

    minutes = 0;

    seconds = 0;

}

Time::Time(int hours , int minutes , int seconds){

    this ->hours = hours;

    this ->minutes = minutes;

    this ->seconds = seconds;

}

void Time::Set_hours(int hours){

    this -> hours = hours;

}

void Time::Set_minutes(int minutes){

    this ->minutes = minutes;

}

void Time::Set_seconds(int seconds){

    this ->seconds = seconds;

}


