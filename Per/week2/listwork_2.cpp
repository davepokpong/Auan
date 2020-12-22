#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i, number;
    char order;
    list<int> listwork_2;
    list<int>::iterator it2;
    
    cin >> n;
    for(i=0; i<n; i++){
        cin >> order >> number;
        if(order == 'I'){
            listwork_2.push_front(number);
        }else if(order == 'A'){
            listwork_2.push_back(number);
        }else if(order == 'D' && number-1 < listwork_2.size()){
            it2 = listwork_2.begin();
            advance (it2, number-1);
            listwork_2.erase(it2);
        }
    }
    
    for(it2=listwork_2.begin(); it2!=listwork_2.end(); it2++){
        cout << *it2 << '\n';
    }
    
    return 0;
}