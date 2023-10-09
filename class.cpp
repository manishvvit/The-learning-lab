#include<iostream>
using namespace std;
class Animal{
    //state of the object
public:
int legs;
    int eye;
    //behaviour of the object.
    void eat(){
        cout<<"I am eating"<<endl;

    }
    void speak(){
        cout<<"i am speaking"<<endl;
    }

    

};

int main(){
    //creating object
    Animal dog1;
    cout<<"enter karo legs or eye"<<endl;
    cin>>dog1.legs;
    cin>>dog1.eye;
    cout<<"output will be "<<endl;
    cout<<dog1.legs<<endl;
    cout<<dog1.eye<<endl;
    dog1.eat();
    dog1.speak();
return 0;
}

