#include<iostream>
using namespace std;
int sum(int x,int y){
    
    return x+y;

}
int main(){
    //calling function;
    int x=3,y=7;
    int z=sum(x,y);
    cout<<"value is "<<z;
    
    return 0;
}
