#include<iostream>
using namespace std;

int main(){

    int arr[5];
    cout<<"Enter elements:";
    for (int i=0;i<5;i++){
       cin>>arr[i];
    }
    cout<<"\nYou entered:";
    for (int j=0;j<5;j++){
       cout<<arr[j]<<"\n";
    }

return 0;

}
