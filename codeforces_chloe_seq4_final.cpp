#include <iostream>
#include <cmath>
using namespace std;
int findk (int n, long long k){
    if(k%2==1){return 1;}
    else if(floor(log2(k))==ceil(log2(k))){return log2(k)+1;}
    else {k=k%(static_cast<long long>(pow(2, floor(log2(k)))));
        return findk(n, k); };
}
int main(){
    int n; long long k; cin>>n>>k;
    cout<<findk(n, k);
}