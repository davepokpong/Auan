#include <iostream>
using namespace std;

int chk_fl(int n){
    int num=1, fl=0, odd=1;

    while (n>num){
        num += odd;
        odd += 2;
        fl++;
    }
    return fl-1;
}

int lastnum(int n){
    int num=1, odd=1;

    while (n>num){
        num += odd;
        odd += 2;
    }
    return num;
}

int chk(int n){
    int last = lastnum(n);
    if ((last-n)%2==0) return 1; //คว่ำ
    return 0; //หงาย
}

int wall(int n){
    if (n==1) return 0;
    if (chk(n)==0){
        return chk_fl(n)*2;
    }
    return chk_fl(n)*2-1;
}

int main(){
    int n;
    cin >> n;
    cout << wall(n);
}