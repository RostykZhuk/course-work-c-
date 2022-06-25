#pragma once
#include "Kindergarden.h"

class Timetable : public Kindergarden {

};
class Food : public Timetable {
private:
    const char* foodInfo;

public:
    void setfoodInfo(const char* foodInfo);
    const char* getfoodInfo();

};
class Sleeptime : public Timetable {
private:
    const char* SleepInfo;
public:
    void setSleepInfo(const char* SleepInfo);
    const char* getSleepInfo();
};


class Breakfast : public Food {

};
class Lunch : public Food {

};
