#ifndef TIME_H
#define TIME_H

#include <ostream>

class Time{

    private:

        int hours , minutes , seconds;

    public:
        
        // Constructors

        Time();

        Time(int hours  , int minutes , int seconds);

        // Accesstors Function

        int get_hours(){

            return hours;

        }

        int get_minutes(){

            return minutes;

        }

        int get_seconds(){

            return seconds;

        }

        // Mutators Function

        void Set_hours(int hours);

        void Set_minutes(int minutes);

        void Set_seconds(int seconds);

        ~Time(){

        }
};



#endif