#include <iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;

public:
    void set_data(string n, int a)
    {
        name = n;
        age = a;
    }

    void get_data()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class student : public virtual person
{
private:
    int percentage;

public:
    void set_percentage(int p)
    {
        percentage = p;
    }

    void get_percentage()
    {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class teacher : public virtual person
{
private:
    int salary;

public:
    void set_salary(int s)
    {
        salary = s;
    }

    void get_salary()
    {
        cout << "Salary: " << salary << endl;
    }
};

class result : public student, public teacher
{
public:
    void get_data()
    {
        get_data();
        get_percentage();
        get_salary();
    }
};

int main()
{
    result obj;
    obj.set_data("Janvi", 24);
    obj.set_percentage(90);
    obj.set_salary(50000);
    obj.get_data();
    return 0;
}