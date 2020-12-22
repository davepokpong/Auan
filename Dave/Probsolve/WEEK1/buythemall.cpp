#include <iostream>
using namespace std;

int main(){
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    
    int n, i;
    cin >> n;
    
    int item[3];
    for(i=0;i<3;i++){
        item[i] = 0;
    }

    int chk;
    for(i=0;i<n;i++){
        cin >> chk;
        if(chk == 1) item[0]+=p1;
        else if(chk == 2) item[1]+=p2;
        else item[2]+=p3;
    }

    chk = item[0];
    for(i=1;i<3;i++){
       if (chk>item[i]) chk = item[i];
    }

    cout << chk;
}