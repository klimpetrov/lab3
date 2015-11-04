#include <iostream>
#include <complex>
using namespace std;
int main(){
  
  complex<double> v;
  int j;
  for(double im = -2; im<=2; im+=0.01){
    for(double re = -2; re<=2; re+=0.01){
     complex<double> zn = complex<double>(re,im);
     
     for(j=0;j<400; j++){
       v=zn;
       zn = zn - (zn*zn*zn-1.0)/(3.0*zn*zn);
       if (abs(v-zn)  <=1e-8 ) break;
       
     }
     cout << re << "   "<< im << "   " <<  j << endl;
    }
  }
  
  
  
  return 0;
}
