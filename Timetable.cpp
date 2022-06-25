#include "Timetable.h"


void Food::setfoodInfo(const char* foodInfo) {
    Food::foodInfo = foodInfo;
}
const char* Food::getfoodInfo() {
    return Food::foodInfo;
}

void Sleeptime::setSleepInfo(const char* SleepInfo) {
    Sleeptime::SleepInfo = SleepInfo;
}
const char* Sleeptime::getSleepInfo() {
    return Sleeptime::SleepInfo;
}
