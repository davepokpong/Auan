#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    int num[n];
    char op[n];

    for (i=0;i<n*2-1;i++){
        if(i%2 == 0) cin >> num[i/2];
        else cin >> op[i/2]; 
    }
    
    int res=num[0];
    for (i=0;i<n;i++){
        if (op[i] == '+') res+=num[i+1];
        if (op[i] == '-') res-=num[i+1];
        if (op[i] == ' ') continue;
    }

    cout << res;
}