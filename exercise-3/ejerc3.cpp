#include<iostream>
using namespace std;

int main(){

    int num,uni,dec,cen,mil,dmil;
    cout<<"Digite un numero: "<<endl; cin>>num;

    uni=num%10; num/=10;
    dec=num%10; num/=10;
    cen=num%10; num/=10;
    mil=num%10; num/=10;
    dmil=num%10; num/=10;

    switch(dmil){
        case 1: cout<<" 1 "; break;
        case 2: cout<<" 2 "; break;
        case 3: cout<<" 3 "; break;
        case 4: cout<<" 4 "; break;
        case 5: cout<<" 5 "; break;
        case 6: cout<<" 6 "; break;
        case 7: cout<<" 7 "; break;
        case 8: cout<<" 8 "; break;
        case 9: cout<<" 9 "; break;
    }

    switch(mil){
        case 0: cout<<" 0 "; break;
        case 1: cout<<" 1 "; break;
        case 2: cout<<" 2 "; break;
        case 3: cout<<" 3 "; break;
        case 4: cout<<" 4 "; break;
        case 5: cout<<" 5 "; break;
        case 6: cout<<" 6 "; break;
        case 7: cout<<" 7 "; break;
        case 8: cout<<" 8 "; break;
        case 9: cout<<" 9 "; break;
    }
    switch(cen){
        case 0: cout<<" 0 "; break;
        case 1: cout<<" 1 "; break;
        case 2: cout<<" 2 "; break;
        case 3: cout<<" 3 "; break;
        case 4: cout<<" 4 "; break;
        case 5: cout<<" 5 "; break;
        case 6: cout<<" 6 "; break;
        case 7: cout<<" 7 "; break;
        case 8: cout<<" 8 "; break;
        case 9: cout<<" 9 "; break;
    }
    switch(dec){
        case 0: cout<<" 0 "; break;
        case 1: cout<<" 1 "; break;
        case 2: cout<<" 2 "; break;
        case 3: cout<<" 3 "; break;
        case 4: cout<<" 4 "; break;
        case 5: cout<<" 5 "; break;
        case 6: cout<<" 6 "; break;
        case 7: cout<<" 7 "; break;
        case 8: cout<<" 8 "; break;
        case 9: cout<<" 9 "; break;
    }
    switch(uni){
        case 0: cout<<" 0 "; break;
        case 1: cout<<" 1 "; break;
        case 2: cout<<" 2 "; break;
        case 3: cout<<" 3 "; break;
        case 4: cout<<" 4 "; break;
        case 5: cout<<" 5 "; break;
        case 6: cout<<" 6 "; break;
        case 7: cout<<" 7 "; break;
        case 8: cout<<" 8 "; break;
        case 9: cout<<" 9 "; break;
    }
    
    
    return 0;
}