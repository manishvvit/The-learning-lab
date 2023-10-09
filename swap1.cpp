#include<iostream>
using namespace std;
void swap(int* x,int* y){
    int temp;
    temp=*x;
    *x=*y;*y=temp;
     cout<<"value with swap in function"<<*x<<" "<<*y<<endl;

}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"value without swap"<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<"value with swap"<<x<<" "<<y<<endl;

    cout<<"manish"<<endl;
    return 0;
}
