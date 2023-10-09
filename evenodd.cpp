
#include<iostream>
using namespace std;
int largest(int num1,int num2,int num3){
    if(num1>=num2 && num1>=num3){
        return num1;
    }else if(num2>=num1 && num2>=num3){
        return num2;

    }else {
        return num3;
        }
        }

int main(){
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    
    
    int result=largest(num1,num2,num3);
    cout<<"the largest number is "<<result<<endl;

    return 0;
}
