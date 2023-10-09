#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void prime(int num){
    int counter=0;
    for (int i = 2; i <=sqrt(num); i++)
    {
        if(num%i==0) counter++;
    }
    if(counter==0) cout<<"prime";
    else cout<<"not prime";
    

}
int main(){
    int num;
    cin>>num;
    prime(num);
    return 0;
}
