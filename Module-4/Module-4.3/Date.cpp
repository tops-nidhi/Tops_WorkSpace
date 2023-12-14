#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    void setDay(int d) { day = d; }
    int getDay() { return day; }

    void setMonth(int m) { month = m; }
    int getMonth() { return month; }

    void setYear(int y) { year = y; }
    int getYear() { return year; }

    // Function to validate the date
    int validate()
    {
        if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
        {
            return 0;
        }

        if (month == 2)
        {
            if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
            {
                if (day > 29)
                {
                    return 0;
                }
            }
            else
            {
                if (day > 28)
                {
                    return 0;
                }
            }
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
            if (day > 30)
            {
                return 0;
            }
        }

        return 1;
    }
};

int main()
{
    int day;
    int month;
    int year;
    cout << "Enter a valid date (dd/mm/yyyy): ";
    cin >> day >> month >> year;

    Date date;
    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);
    if (date.validate() == 1)
    {
        cout << "The date " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << " is valid." << endl;
    }
    else
    {
        cout << "The date " << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << " is not valid." << endl;
    }

    return 0;
}