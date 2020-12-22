#include <iostream>
using namespace std;

int main(){
    int n, i;
    cin >> n;
    
    int res=0;
    for (i=0;i<n;i++){
        int num;
        cin >> num;
        if (num>=0) res+=num;
    }

    cout << res;
}