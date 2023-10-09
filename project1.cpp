//Data management system
#include<iostream>
#include<iomanip>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    string branch;

};
int main(){
    cout<<"enter the size of student of your class "<<endl;
    int n;
    cin>>n;
    Student bachho[n];
    for(int i=0;i<n;i++){
        cout<<"student"<<i+1<<endl;
        cout<<"enter your name"<<endl;
        string str;
        cin>>str;
        bachho[i].name=str;
        cout<<"enter your roll"<<endl;
        int rool;
        cin>>rool;
        bachho[i].roll=rool;
        cout<<"enter your Branch"<<endl;
        string branch1;
        cin>>branch1;
        bachho[i].branch=branch1;

    }
    //printting 
    cout<<"Your output for data management is :- "<<endl;
    cout<<left<<setw(10)<<"NAME"<<left<<setw(8)<<"ROLL"<<left<<setw(8)<<"BRANCH"<<endl;
    for(int i=0;i<n;i++){
        cout<<left<<setw(10)<<bachho[i].name<<left<<setw(8)<<bachho[i].roll<<left<<setw(8)<<bachho[i].branch<<endl;

    }
    return 0;
}