#include <iostream>
using namespace std;

int main(){
    int n, l;
    cin >> n >> l;

    int i, que[n], cus[l];
    for (i=0;i<n;i++){
        cin >> que[i];
    }
    for (i=0;i<l;i++){
        cin >> cus[i];
    }

    int max=0, no=0, res[l];
    for (i=0;i<n;i++){
        if (cus[no]==1){
            res[no] = 0;
            no++;
            continue;
        }
        if (i==cus[no]){
            if (max>=que[i]){
                res[no]=max+1;
                max += 1;
            }
            res[no] = 0;
            no++;
        }
        if (max<que[i]) max=que[i];
    }

    for (i=0;i<l;i++){
        cout << res[i] << "\n";
    }
}