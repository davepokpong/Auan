#include <iostream>
using namespace std;

int *find2max(int side[],int n){
    static int res[2];
    int max=0, i;
    for (i=1;i<n;i++){
        if ((side[i]-side[i-1])>=max) max=side[i]-side[i-1];
    }
    res[0]= max;
    int tmp=0;
    for (i=1;i<n;i++){
        if ((side[i]-side[i-1])<max && (side[i]-side[i-1])>=tmp) tmp=side[i]-side[i-1];
    }
    res[1] = tmp;
    return res;
}

int main(){
    int w, h, m, n, i;
    cin >> w >> h >> m >> n;
    int x[m+1], y[n+1];
    for (i=0;i<m;i++){
        cin >> x[i];
    }
    for (i=0;i<n;i++){
        cin >> y[i];
    }

    int res[4], resx[2];
    int *max_x = find2max(x,m+1);
    int *max_y = find2max(y,m+1);

    res[0] = max_x[0]*max_y[0];
    res[1] = max_x[0]*max_y[1];
    res[2] = max_x[1]*max_y[0];
    res[3] = max_x[1]*max_y[1];

    cout << res[0] << " " << res[1] << " " << res[2] << " " << res[3]; 
}