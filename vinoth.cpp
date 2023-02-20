#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_N = 1045;

int n, tm;
int t[MAX_N];

int main() {
   
    cin >> n >> tm;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    
    sort(t, t + n);

   
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] <= tm) { 
            count++;
            tm -= t[i];  
        } else {
            break; 
        }
    }

   
    cout << count << endl;

    return 0;
}


// solved by Jatin
