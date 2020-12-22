#include <iostream>
#include <list>
using namespace std;

int main() {
    int n, i, number;
    char order;
    list<int> listwork_1;
    list<int>::iterator it1;
    
    cin >> n;
    for(i=0; i<n; i++){
        cin >> order >> number;
        if(order == 'I'){
            listwork_1.push_front(number);
        }else if(order == 'D' && number-1 < listwork_1.size()){
            it1 = listwork_1.begin();
            advance (it1, number-1);
            listwork_1.erase(it1);
        }
    }
    
    for(it1=listwork_1.begin(); it1!=listwork_1.end(); it1++){
        cout << *it1 << '\n';
    }
    
    return 0;
}