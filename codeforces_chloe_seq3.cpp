#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;  unsigned long long k;
    cin>>n>>k;
    if (k%2==1){cout<<1;};
    for(unsigned long long h=1; h<=n; h++){
        for(unsigned long long j=0; j<=k; j++){
        if (k==static_cast<unsigned long long>(pow(2,h-1)+static_cast<unsigned long long>(pow(2,h)*j))){cout<<h;}
    }
    }
      
 }
