#include<iostream>
using namespace std;
void reverse(int num){
    int orginal=num;
    int sum=0;
    while(num>0){
    int rem=num%10;
    sum=sum*10+rem;
    num=num/10;
    }
    if(orginal==sum) cout<<"palindrom"<<endl;
    else cout<<"not palindrom"<<endl;
}
int main(){
    int num;
    cin>>num;
    reverse(num);
    
    return 0;
}
