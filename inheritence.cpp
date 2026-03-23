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

class result : public student
{
private:
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

int main()
{
    result R1;

    R1.getDetails("Alok", 20);
    R1.getData("24BCS12980", 88.5);

    R1.putDetails();
    R1.putData();

    return 0;
}