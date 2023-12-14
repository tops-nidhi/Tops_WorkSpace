#include <iostream>
using namespace std;

class Student
{
public:
    int Roll;
    string Name;

    void getData()
    {
        cout << "Enter Student Details" << endl;
        cout << "Enter Roll No: ";
        cin >> Roll;
        cout << "Enter Name: ";
        cin >> Name;
    }
};

class Subject1
{
public:
    int Marks;

    void getMarks()
    {
        cout << "Enter Marks in Subject 1: ";
        cin >> Marks;
    }
};

class Subject2
{
public:
    int Marks;

    void getMarks()
    {
        cout << "Enter Marks in Subject 2: ";
        cin >> Marks;
    }
};

class MarkSheet : public Student, public Subject1, public Subject2
{
public:
    int total;
    float pr;
    string result;
    void calculate()
    {
        total = Subject1::Marks + Subject2::Marks;
        if (total >= 90)
            result = "Distinction";
        else if (total >= 85 && total < 90)
            result = "First Class";
        else if (total >= 75 && total < 85)
            result = "Second Class";
        else if (total >= 65 && total < 75)
            result = "Pass Class";
        else if (total >= 30 && total < 65)
            result = "Pass";
        else
            result = "Fail";
        pr = (float)total / 2;
    }
    void displayMarks()
    {
        cout << "-------------------MarkSheet------------------" << endl;
        cout << "Name\t Roll No\t Subject 1\t Subject 2\t Total\t Percentage\t Result " << endl;
        cout << "----------------------------------------------" << endl;
        cout << Name << "\t" << Roll<< "\t" << Subject1::Marks<< "\t" << Subject2::Marks<< "\t" << total<< "\t" << pr<< "\t" << result;
    }
};

int main()
{
    MarkSheet M;
    M.getData();
    M.Subject1::getMarks();
    M.Subject2::getMarks();
    M.displayMarks();

    return 0;
}