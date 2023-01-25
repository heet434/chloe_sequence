#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    int n; long long k; 
    cin>>n>>k;
    long long arr[static_cast<long long>(pow(2,n))];
    for(long long x=1; x<=n; x++){
        for (long long h=pow(2,x-1)-1; h<pow(2,n); h+=pow(2,x)){
        arr[h]=x;
    };
    }
cout<<arr[k-1];
}