#include<iostream>
#include<string>

using namespace std;

class String {
    private:
        string str;
    
    public:
        String(string s = "") {
            this->str = s;
        }
        
        // Overloading Operator +
        String operator+(String& s) {
            String s3 = str + s.str;
            return s3;
        }
        
        void display() {
            cout << str << endl;
        }
};

int main() {
    String s1("Hello ");
    String s2("World!");
    String s3 = s1 + s2;
    
    cout << "s1: ";
    s1.display();
    
    cout << "s2: ";
    s2.display();
    
    cout << "s3: ";
    s3.display();
    
    return 0;
}