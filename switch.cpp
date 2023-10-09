#include<iostream>
using namespace std;
void switching();
void add(){
    cout<<"eneter your number"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"your result is "<<a+b;
    switching();

   
}
void subtract(){
    cout<<"eneter your number"<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"your result is "<<a-b;
    switching();
   
}
void switching(){
    char ch;
    cin>>ch;
     switch (ch)
    {
    case '+':
          add();        
        break;
    case '-':subtract(); 

    break;
    
    default: cout<<"dont touch"<<endl;
        
    }

}


int main(){
    switching();
    
    return 0;
}
