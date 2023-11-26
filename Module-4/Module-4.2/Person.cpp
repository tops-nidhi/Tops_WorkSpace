// WAP to get and set the person name, age and country
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name;
    int age;
    string country;

public:
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    void setCountry(string c)
    {
        country = c;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    string getCountry()
    {
        return country;
    }
};

int main()
{
    Person person1;
    string n, c;
    int a;
    cout << "Enter your name: ";
    cin>>n;
    cout << "Enter your age: ";
    cin >> a;
    cout<< "Enter yout ountry name: ";
    cin >> c;

    person1.setName(n);
    person1.setAge(a);
    person1.setCountry(c);

    cout << "\nInformation:" << endl;
    cout << "Name: " << person1.getName() << endl;
    cout << "Age: " << person1.getAge() << endl;
    cout << "Country: " << person1.getCountry() << endl;

    return 0;
}