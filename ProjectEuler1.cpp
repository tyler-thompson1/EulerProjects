# include <iostream>
using namespace std;
int i=1;
int n=1;
int k=0;
int m=1000;
int fv=0;
int tv=0;
int ft=0;
int three(int m)
{
while(i<m){
  if(i%3==0){
    tv=tv+i;}
i=i+1;}
return tv; }
int five(int m){

  while(n<m){
if(n%5==0){
  fv=fv+n;
}
    n=n+1;
  }return fv;
}
int fifteen(int m){
while(k<m){
if(k%15==0){
ft=ft+k;
}
  k=k+1;
}return ft;
}
int main(){

  cout<<five(m)+three(m)-fifteen(m)<<endl;
}
