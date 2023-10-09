#include<bits/stdc++.h>

using namespace std;
int main(){
    int num;
    cin>>num;
    int sum=0;
    while(num>0){
        int rem=num%10;
        sum=sum+pow(rem,3);
        num=num/10;
    }
    cout<<sum<<endl;
    return 0;
}
