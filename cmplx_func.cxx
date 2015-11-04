#include <iostream>
#include <complex>
#include <cmath>
using namespace std;


complex<double> f(complex<double> c){
  return tan(c);
}




int main(){

  // Example how to declare a single complex variable:
  complex<double> c;

  // d = 1 + 2i 
  complex<double> d = complex<double>(1.0, 2.0); 
  
  complex<double> a[100];
  complex<double> ii = complex<double>(0, 1.0);
  
  double dphi = 2*M_PI/100;
  complex<double> j;
  for(int i = -50; i<=50;i++){
    //j= complex<double> (i,0)
     a[i] = f(i*dphi*(1.0+ii));
  }
  for(int i=0; i<=100;i++){
     cout <<real(a[i])<< " " << imag(a[i]) <<" " << abs(a[i])<< endl; 
    }
  
  return 0;
}




