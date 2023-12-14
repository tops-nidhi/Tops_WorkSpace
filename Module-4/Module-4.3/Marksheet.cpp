#include <iostream>
using namespace std;
class address
{
public:
    string city, state;
    int zipcode;
    address(string c, string s, int z)
    {
        city = c;
        state = s;
        zipcode = z;
    }
};
class Student
{
private:
    string name;
    string className;
    int rollNumber;
    float marks;

public:
    address *adrs;
    void getData(string name, string className, int rollNumber, float marks)
    {
        this->name = name;
        this->className = className;
        this->rollNumber = rollNumber;
        this->marks = marks;
    }

    void calculateGrade()
    {
        if (marks >= 90)
        {
            cout << "Grade: A" << endl;
        }
        else if (marks >= 80)
        {
            cout << "Grade: B" << endl;
        }
        else if (marks >= 70)
        {
            cout << "Grade: C" << endl;
        }
        else if (marks >= 60)
        {
            cout << "Grade: D" << endl;
        }
        else
        {
            cout << "Grade: F" << endl;
        }
    }
    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "City: " << adrs->city << endl;
        cout << "State: " << adrs->state << endl;
        cout << "Zipcode: " << adrs->zipcode << endl;
    }
};

int main()
{
    string c, s;
    int z;
    cout << "Enter your address (city, state, zipcode): ";
    cin >> c >> s >> z;
    address ad(c, s, z);

    Student std;
    std.getData("Ananya", "10", 1, 95);
    std.adrs = &ad;
    std.calculateGrade();
    std.displayData();

    return 0;
}