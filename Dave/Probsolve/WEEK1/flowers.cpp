#include <iostream>
using namespace std;

int plusto1(int n){
    int res=0;
    while (1){
        res += n;
        n--;
        if (n==0) break;
    }
    return res;
}

int main(){
    float l, n, last=0, c=1,la;
    cin >> l >> n;
    //int l = plusto1(L);
    la = l;
    last = ((l*l)/2)+(l/2);
    while (last < n){
        l += la;
        last = ((l*l)/2)+(l/2);
        c++;
        //cout << last << " " << n << endl;
    }

    cout << c;
}