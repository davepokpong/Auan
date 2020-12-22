#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    list<int> necklace[n];
    list<int>::iterator it1;

    for(i=1 ;i<n+1; i++) necklace->push_front(i);

    for(it1=necklace[5].begin(); it1!=necklace[5].end(); it1++){
            cout << *it1 << '\n';
        }

    for(i=0; i<n; i++){
        int a, b;
        cout << "HI";
        cin >> a >> b;
        list<int>::iterator it2;
        it2 = necklace[b].end();
        necklace[b].splice(it2, necklace[a]);
        for(it1=necklace[5].begin(); it1!=necklace[5].end(); it1++){
            cout << *it1 << '\n';
        }
        break;
    }

    /*for(i=0; i<n; i++){
        for(it1=necklace[i].begin(); it1!=necklace[i].end(); it1++){
            cout << *it1 << '\n';
        }
    }*/

    return 0;
}
