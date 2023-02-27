#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
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

struct Course{

    std::string name;

    int credit;

    bool major_requirement;

    double avgGrade;

    std::string days;

    Time start;

    Time end;

    Course(){

        major_requirement = true;

    }

};


int main(){
    
    int name_step = 1;
    int credit_step = 2;
    int major_step = 3;
    int grade_step = 4;
    int days_step = 5;
    int start_step = 6;
    int end_step = 7;

    Course course1;

    int course_nums = 1;

    ifstream in_file("in.txt");

    string line;

    vector<string> data;

    while(getline(in_file , line)){

        data.push_back(line);

        if(in_file.eof()){

            in_file.close();

        }

    }

    cout << "-----------------------" << endl;

    cout << "SCHEDULE OF STUDENT" << endl;

    cout << "-----------------------" << endl;

    while(course_nums < atoi(data[0].c_str()) + 1){

        course1.name = data[name_step];

        course1.credit = atoi(data[credit_step].c_str());

        course1.days = data[days_step];

        getTimeFromUser(course1.start,data[start_step]);

        getTimeFromUser(course1.end, data[end_step]);

        course1.avgGrade = atoi(data[grade_step].c_str());


        cout << "COURSE " << course_nums << ": " << course1.name << endl;

        cout << "Number of Credits: " << course1.credit << endl;

        if(atoi(data[major_step].c_str()) == 1){

            course1.major_requirement = true;

            cout << "Note: this course is a major requirement!" << endl;

        }

        else{
            
            course1.major_requirement = false;

            cout << "Note: this course is not a major requirement... " << endl;

        }

        cout << "Days of Lectures: " << course1.days << endl;

        cout << setfill('0');

        if((course1.start.hours <= 24) && (course1.start.hours >= 12)){

            cout << "Lecture Time: "<< (course1.start.hours)-12 << ':' << setw(2) << course1.start.minutes << ':' << setw(2) << course1.start.seconds << "pm" << " - " 
            << (course1.end.hours)-12 << ':' << setw(2) << course1.end.minutes << ':' << setw(2) << course1.end.seconds << "pm" << endl;

        }

        else{

            cout << "Lecture Time: "<< (course1.start.hours) << ':' << setw(2) << course1.start.minutes << ':' << setw(2) << course1.start.seconds << "am" << " - " 
            << (course1.end.hours) << ':' << setw(2) << course1.end.minutes << ':' << setw(2) << course1.end.seconds << "am" << endl;

        }

        cout << "Stat: " << "on average students get " << course1.avgGrade << "% " << "in this course. " << endl;

        name_step = name_step + 7;
        credit_step = credit_step + 7;
        major_step = major_step + 7;
        grade_step = grade_step + 7;
        days_step = days_step + 7;
        start_step = start_step + 7;
        end_step = end_step + 7;
        course_nums++;

        cout << "-----------------------" << endl;

    }

}