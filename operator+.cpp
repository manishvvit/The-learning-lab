#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int result=num&1;
    if(result==0){
        cout<<"even"<<endl;
    }else{
        cout<<"odd"<<endl;
    }

 return 0;
}
