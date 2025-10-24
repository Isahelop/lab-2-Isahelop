#include<iostream>
using namespace std;

int main(){

    int num1;

    cout<<"Digita un numero: "; cin>>num1;

    if( num1 % 2==0){
        cout<<"El numero que digitaste es par"<<endl;
    }
    else{
        cout<<"El numero que digitaste es impar"<<endl;
    }

    return 0;
}