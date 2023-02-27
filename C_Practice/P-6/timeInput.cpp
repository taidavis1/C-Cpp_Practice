#include <iostream>
#include <iomanip>
using namespace std;


struct Time{

    int hours;

    int minutes;

    int seconds;

    Time(){

        hours = 0;

        minutes = 0;

        seconds = 0;

    }
};


bool getTimeFromUser(Time& time , std::string t){

    std::size_t pos = t.find(":");

    std::size_t second_pos = t.find(":" , pos+1);

    if(second_pos == std::string::npos){

        return false;

    }

    std::string hours = t.substr(0,2);

    std::string minutes = t.substr(pos+1 , 2);

    std::string seconds = t.substr(second_pos+1 , 2);

    int hours_int = atoi(hours.c_str());

    int minutes_int = atoi(minutes.c_str());

    int seconds_int = atoi(seconds.c_str());

    if(( hours_int >= 0 && hours_int < 24) && (minutes_int >= 0 && minutes_int < 60) && (seconds_int >= 0 && seconds_int < 60)){
    
        time.hours = hours_int;

        time.minutes = minutes_int;

        time.seconds = seconds_int;

        return true;

    }

    else{

        return false;

    }

}


std::string print24Hour(Time& t){

    string string_hours = to_string(t.hours);

    string string_minutes = to_string(t.minutes);

    string string_seconds = to_string(t.seconds);

    return string_hours + ':' + string_minutes + ':' + string_seconds;

}


int main(){

    std::string start;

    std::string end;

    Time start_time;

    Time end_time;

    cout << "Enter the start time for the lecture (format is HH:MM:SS): ";

    getline(cin , start);

    if(getTimeFromUser(start_time , start)){

        cout << "Enter the end time for the lecture (format is HH:MM:SS): ";

        getline(cin , end);

        if(getTimeFromUser(end_time , end)){

            cout << setfill('0');

            cout << "The lecture starts at " << setw(2) << start_time.hours << ':' << setw(2) << start_time.minutes << ':' << setw(2) << start_time.seconds << " and ends at " << setw(2) << end_time.hours << ':' << setw(2) << end_time.minutes << ':' << setw(2) << end_time.seconds << endl;

        }

        else{

            cout << "The end time entered is invalid! " << endl;

            return 0;

        }

    }

    else{

        cout << "The start time entered is invalid! " << endl;

        return 0;

    }

    return 0;
}

