#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    int employeeID;
    float salary;

public:
    // Constructor
    Employee(string n, int id, float s)
    {
        name = n;
        employeeID = id;
        salary = s;
    }

    // Getter functions
    string getName()
    {
        return name;
    }

    int getEmployeeID()
    {
        return employeeID;
    }

    float getSalary()
    {
        return salary;
    }

    // Function to calculate salary based on performance
    void calculateSalary(float performance)
    {
        if (performance >= 0.0 && performance <= 0.4)
        {
            salary = salary;
        }
        else if (performance > 0.4 && performance <= 0.6)
        {
            salary = salary * 1.1;
        }
        else if (performance > 0.6 && performance <= 0.8)
        {
            salary = salary * 1.2;
        }
        else if (performance > 0.8 && performance <= 1.0)
        {
            salary = salary * 1.3;
        }
        else
        {
            cout << "Invalid performance score." << endl;
        }
    }

    // Function to set salary
    void setSalary(float s)
    {
        salary = s;
    }
};

int main()
{
    string name;
    int employeeID;
    float salary;
    cout << "Enter the employee's name: ";
    cin >> name;
    cout << "Enter the employee ID: ";
    cin >> employeeID;
    cout << "Enter the current salary: ";
    cin >> salary;
    // Create an object of the Employee class
    Employee e1(name, employeeID, salary);

    cout << "Name: " << e1.getName() << endl;
    cout << "Employee ID: " << e1.getEmployeeID() << endl;
    cout << "Salary: " << e1.getSalary() << endl;

    float performance;
    cout << "\nEnter the performance rating (0.0-1.0): ";
    cin >> performance;
    e1.calculateSalary(performance);

    cout << "New Salary: " << e1.getSalary() << endl;

    return 0;
}