#include <iostream>
using namespace std;

int main(){
    int n, i;
    int b=0;

    cin >> n;
    int tree[n];

    for(i=0;i<n;i++)
        cin >> tree[i];
    
    for(i=1;i<n-1;i++){
        if(tree[i-1]<tree[i] && tree[i+1]<tree[i]) b++;
    }

    if(tree[0]>tree[1]) b++;
    if(tree[n-1]>tree[n-2]) b++;

    cout << b;
}