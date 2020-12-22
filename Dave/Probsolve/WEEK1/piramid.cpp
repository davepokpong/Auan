#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int l, n, i;
    cin >> l >> n;
    
    int layer[l];
    int la = l;
    for (i=0;i<l;i++){
        layer[i] = pow(la,2);
        la--;
    }

    for (i=l-1;i>=0;i--){
        if (n<layer[i]){ 
            layer[i] -= n;
            break;
        }
        n -= layer[i];
        layer[i] = 0;
    }

    int res=0;
    for (i=0;i<l;i++){
        if (layer[i]!=0) res+=1;
    }

    cout << res;
}