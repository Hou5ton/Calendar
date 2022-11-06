#include "Date.hpp"

void date::getcurrenttime()
{
    time_t now = time(0);
    tm* ltm = localtime(&now);

    struct tm buf;
    char datestring[26];
    time_t time = time(nullptr);
    localtime_s(&buf, &time);
    asctime_s(datestring, 26, &buf);

    year = 1970 + ltm->tm_year;
    month = 1 + ltm->tm_mon;
    day = ltm->tm_mday;
    hours = 1 + ltm->tm_hour;
    minutes = 1 + ltm->tm_min;
    seconds = 1 + ltm->tm_sec;
}

//void Date::print()
//{
//    std::cout << Year << " "
//        << Month << " "
//        << Day << " "
//        << hours << " "
//        << minutes << " "
//        << seconds << " ";
//}
