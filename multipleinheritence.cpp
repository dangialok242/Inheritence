#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;

    void getDetails(string newName, int newAge)
    {
        name = newName;
        age = newAge;
    }

    void putDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class result
{
protected:
    string UID;
    float marks;

public:
    void getData(string newUID, float newMarks)
    {
        UID = newUID;
        marks = newMarks;
    }

    void putData()
    {
        cout << "UID: " << UID << endl;
        cout << "Marks: " << marks << endl;
    }
};

class sports : public student, public result
{
public:
    double sportsmarks;
    int medal;
    double totalMarks;

    void getMarks(double newSportsmarks, int newMedal)
    {
        sportsmarks = newSportsmarks;
        medal = newMedal;
    }

    void putMarks()
    {
        cout << "SportsMarks: " << sportsmarks << endl;
        cout << "Medal: " << medal << endl;
    }

    void calculate()
    {
        totalMarks = marks + sportsmarks;
    }

    void putCalculate()
    {
        cout << "TotalMarks: " << totalMarks << endl;
    }
};

int main()
{
    sports S1;

    S1.getDetails("Alok", 20);
    S1.getData("25BCS12980", 90);
    S1.getMarks(95, 10);
    S1.calculate();

    S1.putDetails();
    S1.putData();
    S1.putMarks();
    S1.putCalculate();

    return 0;
}