#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char pos[100];
    cin >> pos;

    int i, x=0, y=0;
    for (i=0;i<strlen(pos);i++){
        if (pos[i] == 'N') y++;
        else if (pos[i] == 'S') y--;
        else if (pos[i] == 'E') x++;
        else if (pos[i] == 'W') x--;
        else if (pos[i] == 'Z'){
            x = 0;
            y = 0;
        }
    }

    cout << x << " " << y;
}