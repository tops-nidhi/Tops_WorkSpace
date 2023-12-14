#include<iostream>
using namespace std;

class cricketer {
    protected:
        string name;
        int age;
        string country;
    
    public:
        cricketer(string n, int a, string c) {
            name = n;
            age = a;
            country = c;
        }
    
        virtual void displayData() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Country: " << country << endl;
        }
};

class batsman : public cricketer {
    private:
        int totalRuns;
        float averageRuns;
        int bestPerformance;
    public:
        batsman(string n, int a, string c, int tr, int bp) : cricketer(n, a, c) {
            totalRuns = tr;
            bestPerformance = bp;
        }
    
        void calculateAverageRuns(int totalMatches) {
            averageRuns = (float)totalRuns / (float)totalMatches;
        }
    
        void displayData() {
            cricketer::displayData();
            cout << "Total Runs: " << totalRuns << endl;
            cout << "Average Runs: " << averageRuns << endl;
            cout << "Best Performance: " << bestPerformance << endl;
        }
};

int main() {
    batsman b("Sachin Tendulkar", 44, "India", 15927, 150);
    b.calculateAverageRuns(200);
    b.displayData();
    
    return 0;
}