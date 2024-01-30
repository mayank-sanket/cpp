#include<iostream>
using namespace std;
int main(){
   /* Symbol table: is an important Data Str created and maintained by the compiler in order to keep track of semantics of variables, i.e, it stores info abt the scope and binding info abt names, info about instance of various entities such as variable and fxn names, classes, objects etc.
   */
   
   // Symbol table mapping etc
   
    int num = 5; 
    cout<<num<<endl; 

    // address of operator - &
    cout<<"Address of num is : "<<&num<<endl; // prints some hexadecimal no. (address of num) | 

    int *ptr = &num;
    cout<<"Value at ptr is "<<*ptr<<endl; // prints 5 (value at ptr) (using de-reference operator *)
    cout<<"Address of num is "<<ptr<<endl; // prints  hexadecimal value (address of num)

    cout<<"Size of Integer is "<<sizeof(int)<<endl; // prints 4 
    cout<<"Size of ptr (integer) is "<<sizeof(ptr)<<endl; // prints 8 (because it stores the address and not the integer itself)


    cout<<endl<<endl<<endl;

    double d = 4.5;
    double *dptr = &d; // address of d

    cout<<&d<<endl; // prints a hexadec value (addr of d)

    cout<<dptr<<endl; // prints the same hex value (addr of d)
    cout<<*dptr<<endl; // prints the value at the address, i.e d (4.5)

    cout<<"Size of double is "<<sizeof(double)<<endl; // prints 8
    cout<<"Size of dptr (double) is "<<sizeof(dptr)<<endl;  // prints 8 (stores the address)

    // The idea is : pointer stores the addr, so its size is 8 bytes (**in most of the cases** -- 64 bit computer -> 8 bytes | 32 bit computer -> 4 bytes)


    return 0;
}