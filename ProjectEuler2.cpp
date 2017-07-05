#include <iostream>
using namespace std;
int m=4000000;
int n=0;
int tot=0;
int fib(int n){
int a=0 ;
int i;
int b=1;
int c=0;
  for(i=0;i<n;i++){
c=a+b;
a=b;
b=c;
  }
return b;}
int main(){
for(n=0;fib(n)<m;n++){
  if(fib(n)%2==0){
  //cout<<fib(n)<<endl;
    tot=tot+fib(n);
  }
}

cout<<tot<<endl;
}
