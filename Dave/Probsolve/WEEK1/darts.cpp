#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, i, score=0;
    cin >> n;

    for (i=0;i<n;i++){
        int x, y;
        float pos; 
        cin >> x >> y;
        pos = sqrt(pow(x,2)+pow(y,2));
        //cout << pos << "\n";
        if (pos<=2) score+=5;
        else if (pos>2 && pos<=4) score+=4;
        else if (pos>4 && pos<=6) score+=3;
        else if (pos>6 && pos<=8) score+=2;
        else if (pos>8 && pos<=10) score+=1;
        else continue;
    }

    cout << score;
}