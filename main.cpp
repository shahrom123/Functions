#include <iostream>
using namespace std;
int MinDigit(int n){
     int n1,n2;
     n1 = n/10;
     n2 = n%10;

     if(n1>=n2) return n2;
     else return n1;
 }

int MaxDigit(int n){
     int n1,n2;
     n1 = n/10;
     n2 = n%10;

     if(n1>=n2) return n1;
     else return n2;
 }

int main(){
   int number;

   cin>>number;

   int Max = MaxDigit(number);
   int Min= MinDigit(number);

   cout<<"max: "<<Max<<endl;
   cout<<"min: "<<Min;
   main();
}
