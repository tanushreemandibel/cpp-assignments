#include<iostream>
using namespace std;

int main(){

    int age;
    cout<<"Enter age of a user: ";
    cin>>age;

    if(age>=18){

        cout<<"You are "<<age<<" yrs old"<<"\nYou are eligible to vote.";
    }else{

        cout<<"You need "<<(18-age)<<" more years to be eligible to vote.";
    }
return 0;

}
