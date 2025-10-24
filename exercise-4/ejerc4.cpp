#include<iostream>
using namespace std;

int main(){

    cout<<"\tSacar el número de en medio"<<endl;

    int num1,num2,num3,max,min;

    cout<<"Digite 3 numeros: "<<endl; cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3){
        max=num1;
    }
    else if(num2>num1 && num2>num3){
        max=num2;
    }
    else{
        max=num3;
    }
    if(num1<num2 && num1<num3){
        min=num1;
    }
    else if(num2<num1 && num2<num3){
        min=num2;
    }
    else{
        min=num3;
    }
    if(num1 != max && num1 != min){
        cout<<"El numero de en medio es: "<<num1;
    }
    else if(num2 != max && num2 != min){
        cout<<"El numero de en medio es: "<<num2;
    }
    else{
        cout<<"El numero de en medio es: "<<num3;
    }
    
    return 0;
}