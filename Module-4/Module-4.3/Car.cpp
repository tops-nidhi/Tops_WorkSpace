#include <iostream>
#include <string>
using namespace std;
class Car
{
private:
    string company;
    string model;
    int year;

public:
    // Constructor
    Car(string c, string m, int y)
    {
        company = c;
        model = m;
        year = y;
    }

    // Getter functions
    string getCompany()
    {
        return company;
    }

    string getModel()
    {
        return model;
    }

    int getYear()
    {
        return year;
    }

    // Setter functions
    void setCompany(string c)
    {
        company = c;
    }

    void setModel(string m)
    {
        model = m;
    }

    void setYear(int y)
    {
        year = y;
    }
};

int main()
{
    Car myCar("Toyota", "Camry", 2020);

    cout << "Company: " << myCar.getCompany() << endl;
    cout << "Model: " << myCar.getModel() << endl;
    cout << "Year: " << myCar.getYear() << endl;

    return 0;
}