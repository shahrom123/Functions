#include <iostream>
using namespace std;

int EvenCount(int n){

  int n1,n2,n3,n4,n5,n6;
  int sum = 0;
  n1 = n%10;
  n2 = n/10%10;
  n3 = n/100%10;
  n4 = n/1000%10;
  n5 = n/10000%10;
  n6 = n/100000;

  if(n1%2==0)sum = sum + 1;
  if(n2%2==0)sum = sum + 1;
  if(n3%2==0)sum = sum + 1;
  if(n4%2==0)sum = sum + 1;
  if(n5%2==0)sum = sum + 1;
  if(n6%2==0)sum = sum + 1;

  return sum;

}

int main(){
   int number;
   cin>>number;
   int sumEven = EvenCount(number);

   cout<< sumEven;
   main();
}


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
