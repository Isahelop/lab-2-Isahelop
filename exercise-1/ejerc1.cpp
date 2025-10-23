#include<iostream>
using namespace std;

int main(){

    int num1=13,num2=27,num3=14;
    int suma,mult;

    suma=num1+num2+num3;
    mult=num1*num2*num3;

    cout<<"La suma es: "<<suma<<endl;
    cout<<"El producto es: "<<mult<<endl;

    if(num1>num2 && num1>num3){
        cout<<"El numero mayor es: "<<num1<<endl;
    }
    else if(num2>num1 && num2>num3){
        cout<<"El numero mayor es: "<<num2<<endl;
    }
    else{
         cout<<"El numero mayor es: "<<num3<<endl;
    }
    if(num1<num2 && num1<num3){
        cout<<"El numero minimo es: "<<num1<<endl;
    }
    else if(num2<num1 && num2<num3){
        cout<<"El numero minimo es: "<<num2<<endl;
    }
    else{
         cout<<"El numero minimo es: "<<num3<<endl;
    }
    
    return 0;
}