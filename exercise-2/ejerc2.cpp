#include<iostream>
using namespace std;

int main(){

    int num1=22, num2=8;

    if( num1 % num2==0){
        cout<<num1<<" si es multiplo de "<<num2<<endl;
    }
    else{
        cout<<"El "<<num1<<" No es multiplo de "<<num2<<endl;
    }

    return 0;
}