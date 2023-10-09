#include<iostream>
using namespace std;
int main(){
    int num=12323;
    int sum=0;
    while (num>0)
    {
        int rem=num%10;
        sum=sum+rem;
        num=num/10;
        
    }
    cout<<"the result is "<<sum<<endl;
    
    
    return 0;
}
