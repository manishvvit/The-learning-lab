#include<iostream>
using namespace std;
struct {
    string name;
    int roll;
    string branch;
    int year;

} student;

int main(){
    //data load kar diya
    student.name="manish";
    student.roll=123;
    student.branch="EEE";
    student.year=3;
     cout<<student.name<<endl;
    cout<<student.roll<<endl;
    cout<<student.branch<<endl;
    cout<<student.year<<endl;
     student.name="manish2";
    student.roll=1235;
    student.branch="EEEk";
    student.year=33;
    //data ko access karna hai
    cout<<student.name<<endl;
    cout<<student.roll<<endl;
    cout<<student.branch<<endl;
    cout<<student.year<<endl;


    return 0;
}
