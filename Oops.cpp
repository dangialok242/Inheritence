#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    string name;
    string dept;
    string subject;
    double salary;

    void changeDept(string newDept){
        dept = newDept;
    }
};
int main(){
    Teacher t1;
    t1.name ="Alok";
    t1.dept ="Computer Science Engineering";
    t1.subject="C++";
    t1.salary=50000;

    cout<<t1.name<<",";
    cout<<t1.dept<<endl;
    return 0;
}
      
