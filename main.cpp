#include<iostream>
using namespace std;

void fibonacciR (int *fib,int fib1,int fib2,int cont);

int main (){

  int fibonacci,fibonacci1 =0,fibonacci2=1;

  fibonacciR(&fibonacci,fibonacci1,fibonacci2,10);

}

void fibonacciR (int *fib,int fib1,int fib2,int cont){

    if(fib2<cont){
      *fib = fib2+fib1;
       fib1 = fib2;
       fib2 = *fib;
       cout<<*fib<<endl;
       fibonacciR(fib,fib1,fib2,cont);
    }
}
