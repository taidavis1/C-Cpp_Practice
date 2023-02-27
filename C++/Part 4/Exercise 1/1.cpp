#include <iostream>
#include "Stash.h"

using namespace std;

int main(){
    int n;
    cin >> n;
    double d_nums;
    Stash double_stash[n];
    double_stash->initialize(sizeof(double));
    for(int i = 0 ; i < n; i++){
        cin >> d_nums ;
        double_stash->add(new double (d_nums));
    }
    for(int i = 0 ; i < double_stash->count(); i++){
        cout << *(double*)double_stash->fetch(i)<< endl;
    }
    double_stash->cleanup();
    return 0;
}
