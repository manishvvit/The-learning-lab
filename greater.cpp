#include<iostream>
using namespace std;
 void leapyear(int num1){
    if(num1%4==0 && num1%100!=0){
        cout<<"Leap year"<<endl;
    }else if(num1%400==0){
        cout<<"Leap Year"<<endl;
    }else{
        cout<<"not leap year"<<endl;
    }
    

}
int main(){
    int a;
    cin>>a;
    leapyear(a);

    
    return 0;
}
