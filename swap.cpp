#include<iostream>
using namespace std;
int main(){
    int x=6,y=5;
    cout<<"before swap "<<x<<" "<<y<<endl;
    int temp=x;
    x=y;
    y=temp;
    
    cout<<"after swap "<<x<<" "<<y<<endl;
    return 0;
}
