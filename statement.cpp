#include<iostream>
using namespace std;
int main(){
    cout<<"enter your marks as science,math,physics"<<endl;
    int science,math,physics;
    cin>>science>>math>>physics;
    double percentage=(science+math+physics)/3.0;
    if(percentage>=60){
        cout<<"You are first"<<endl;
    }else if(percentage>=50 && percentage<60){
        cout<<"you are second"<<endl;

    }else{
        cout<<"Better luck next time"<<endl;
    }
    return 0;
}
