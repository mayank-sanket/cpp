#include<iostream>
using namespace std;
int main(){

    // pointer to int is created, and pointing to some garbage address | we should avoid this because it may sometimes point to some read-only addresses, therefore we would not be able to modify it later.
    // int *p; // bad way
    // cout<<p<<endl; // prints some garbage address (here 0x8)

    // a better way to do it: 
    // int *p2 = 0;
    // cout<<p2<<endl; // prints 0 (null pointer)
    // cout<<*p2<<endl;  // prints nothing

    int i = 5; 
    int *p = &i;
    cout<<p<<endl; // address
    cout<<*p<<endl; // value (5)

    // or 
    int *q = 0;
    q = &i; // notice it carefully
    cout<<"Value at qter: "<<*q<<endl;
    cout<<"Address at qter: "<<q<<endl;


    // Accessing Value
    int num = 10;
    int number = num;
    number++;
    cout<<num<<endl; // prints 10 only

    int *pter = &num;
    cout<<"before: "<<*pter<<endl;
    (*pter)++; // bracket is necessary
    cout<<"after: "<<*pter<<endl;


    // Copying pointer:

    int *qter = pter;
    cout<<"pter "<<pter<<"  "<<"qter "<<qter<<endl;
    cout<<"value at pter "<<*pter<<"  "<<"value at qter "<<*qter<<endl;


    // IMPORTANT CONCEPT
    int j = 99;
    int *t = &j;
    // cout<<*t++<<endl; // prints 99 (not recommended tho)
    cout<<(*t)++<<endl; // this way
    // cout<<++*t<<endl; // prints 101 // (not recommended tho -- better use brackets)
    cout<<++(*t)<<endl; //  prints 101

    cout<<(*t)<<endl; // again 101
// another concept: 
    cout<<t<<endl; // address 0x477dbffd54
    t = t + 1; 
    cout<<t<<endl;  // address 0x477dbffd58 (0x477dbffd54 + 4 because address of int | int is 4 bytes)
   cout<<"newline"<<endl;
    char ch = 'a';
    char *c = &ch;
    cout<<"before ";
    cout<<c<<endl; // prints ae
    c = c+1;
    cout<<"after ";
    cout<<c<<endl; // prints e

    cout<<"newline"<<endl;
    
    double dbl = 8.9999;
    double *d = &dbl;
    cout<<d<<endl;
    d = d+1; 
    cout<<d<<endl;

    // similarly, you can try with subtraction methods
    float x;
    float *xter = &x;
    cout<<"before"<<endl;
    cout<<xter<<endl;
    xter = xter +1;
    cout<<"after "<<xter<<endl;
    return 0;
}