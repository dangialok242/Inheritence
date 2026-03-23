#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<algorithm>
#include<iomanip>

using namespace std;


   class Student{
       protected:
       string name;
       int rollNo;
       public:
       void getStudents(){
            cin>>name;
            cin>>rollNo;
   }  
   };
    class Test:public Student{
        protected:
        int marks1;
        int marks2;
        public:
        void getMarks(){
            cin>>marks1>>marks2;
        }
    };
    class Result:public Test{
        private:
        int total;
        float percentage;
        public:
        void calculate(){
            total=marks1+marks2;
            percentage=total/2;
        }
        void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNo<<endl;
        cout<<"Total Marks: " <<total<<endl;
        cout<<"Percentage: "<<fixed<<setprecision(2)<<percentage<<endl;
        }
    };
    int main()
    {
        Result R;
        R.getStudents();
        R.getMarks();
        R.calculate();
        R.display();
    
    return 0;
}
