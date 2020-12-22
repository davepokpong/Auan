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
/*
int num_fl(int fl){
    if (fl==1) return 1;
    return 2*fl-1;
}*/

int lastnum(int n){
    int num=1, odd=1;

    while (n>num){
        num += odd;
        odd += 2;
    }
    return num;
}

int chk(int n){
    if ((lastnum(n)-n)%2==0) return 0; //คว่ำ
    return 1; //หงาย
}

int wall(int n){
    if (n==1) return 0;
    cout << chk(n) << " " << chk_fl(n) << " "; //check
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