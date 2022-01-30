#include "bits/stdc++.h"
using namespace std;

int main() {
    array<int, 7> value;
    for(int i = 0; i < 7; i++){
        cin >> value[i];
    }
    sort (value.begin(), value.end());
    int a = value[0];
    int b = value[1];
    int abc = value[6];
    int c = abc - a - b;
    cout << a << " " << b << " " << c;
}
