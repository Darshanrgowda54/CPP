#include "calendar.h"
#include "auditorium_manager.h"
#include <iomanip>
#include <conio.h>
#include <iostream>

Calendar::Calendar():m_date()
{
    std::cout<<"Calendar Constructor Called"<<std::endl;
    printTodayDate();
}


Calendar::~Calendar()
{
    std::cout<<"\nCalendar Destructor Called"<<std::endl;
    for (auto y : m_years)
    {
        delete y;
    }
    m_years.clear();
}


bool isLeapYear(int year)
{
    if (year % 4 != 0) return false;
    if (year % 100 != 0) return true;
    return (year % 400 == 0);
    return true;
}


int getDaysInMonth(int year, int month)
{
    static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year))
    {
        return 29;
    }
    return daysInMonth[month - 1];
}


int getStartDayOfWeek(int year, int month)
{
    tm time_in = {};
    time_in.tm_year = year - 1900;
    time_in.tm_mon = month - 1;
    time_in.tm_mday = 1;
    mktime(&time_in);
    return time_in.tm_wday;
}


// void Calendar::printCalendar(int year, int month)
// {
//     Year* newYear = getYear(year);
//     if (newYear == nullptr)
//     {
//         newYear = createYear(year);
//     }

//     Month* newMonth = newYear->getMonth(month);
//     if (newMonth == nullptr)
//     {
//         newMonth = newYear->createMonth(month);
//     }

//     const std::string months[] = {
//         "January", "February", "March", "April", "May", "June",
//         "July", "August", "September", "October", "November", "December"
//     };

//     std::cout << "\n      " << months[month - 1] << " " << year << std::endl;
//     std::cout << "SU MO TU WE TH FR SA\n";

//     int startDay = getStartDayOfWeek(year, month);
//     int daysInMonth = getDaysInMonth(year, month);

//     int currentDayOfWeek = 0;

//     for (int i = 0; i < startDay; ++i)
//     {
//         std::cout << "   ";
//         currentDayOfWeek++;
//     }

//     for (int day = 1; day <= daysInMonth; ++day)
//     {
//         Day* d = newMonth->getDay(day);
//         if (!d)
//         {
//             d = newMonth->createDay(day);
//         }
//         std::cout << std::setw(2) << day << " ";
//         currentDayOfWeek++;

//         if (currentDayOfWeek == 7)
//         {
//             std::cout << std::endl;
//             currentDayOfWeek = 0;
//         }
//     }
//     if (currentDayOfWeek != 0)
//     {
//         std::cout << std::endl;
//     }

//     std::cout << std::endl;
// }



void Calendar::printCalendar(int year, int month)
{
    if (!m_bookingManager) {
        std::cerr << "Booking manager not initialized!" << std::endl;
        return;
    }

    Year* newYear = getYear(year);
    if (newYear == nullptr) {
        newYear = createYear(year);
    }

    Month* newMonth = newYear->getMonth(month);
    if (newMonth == nullptr) {
        newMonth = newYear->createMonth(month);
    }

    const std::string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    std::cout << "\n      " << months[month - 1] << " " << year << std::endl;
    std::cout << "SU MO TU WE TH FR SA\n";

    int startDay = getStartDayOfWeek(year, month);
    int daysInMonth = getDaysInMonth(year, month);

    int currentDayOfWeek = 0;

    for (int i = 0; i < startDay; ++i) {
        std::cout << "   ";
        currentDayOfWeek++;
    }

    for (int day = 1; day <= daysInMonth; ++day) {
        Day* d = newMonth->getDay(day);
        if (!d) {
            d = newMonth->createDay(day);
        }

        std::string displayDay = std::to_string(day);
        Date tempDate(day, month, year);

        const auto& bookingDateList = m_bookingManager->getBookingDateList();
        if (bookingDateList.find(tempDate) != bookingDateList.end()) {
            const auto& bookedList = bookingDateList.at(tempDate);
            int bookedCount = bookedList.size();

            if (bookedCount == 10) {
                displayDay = std::to_string(day) + "/10";
            } else if (bookedCount > 0) {
                displayDay = std::to_string(day) + "/" + std::to_string(bookedCount);
            }
        }

        std::cout << std::setw(2) << displayDay << " ";
        currentDayOfWeek++;

        if (currentDayOfWeek == 7) {
            std::cout << std::endl;
            currentDayOfWeek = 0;
        }
    }

    if (currentDayOfWeek != 0) {
        std::cout << std::endl;
    }

    std::cout << std::endl;
}



void Calendar::setBookingManager(Auditorium_Manager *m_bookingManager)
{
    this->m_bookingManager = m_bookingManager;
}


void Calendar::printTodayDate()
{
    Date today = m_date.getCurrentDate();
    std::cout << "Today's Date: " << today.getDay() << "-" << today.getMonth() << "-" << today.getYear() << std::endl;
}



void Calendar::changeMonths()
{
    int currentYear = m_date.getYear();
    int currentMonth = m_date.getMonth();

    char key;
    do {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
        printCalendar(currentYear, currentMonth);
        std::cout << "Press '<' (Prev Month), '>' (Next Month), Press 'Enter' to Booking: ";

        key = _getch();

        if (key == '>')
        {
            currentMonth++;
            if (currentMonth > 12)
            {
                currentMonth = 1;
                currentYear++;
            }
        }
        else if (key == '<')
        {
            currentMonth--;
            if (currentMonth < 1)
            {
                currentMonth = 12;
                currentYear--;
            }
        }

    } while (key != 13);
}

Year *Calendar::getYear(int year)
{
    for(auto y: m_years)
    {
        if(y->getYear() == year)
        {
            return y;
        }
    }
    return nullptr;
}


Year *Calendar::createYear(int year)
{
    if(getYear(year) != nullptr)
    {
        return nullptr;
    }
    Year* newyear = new Year(year);
    this->m_years.push_back(newyear);
    return newyear;
}

