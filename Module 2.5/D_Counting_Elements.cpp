#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
 
    sort(v.begin(), v.end()); // Sort the array in ascending order
 
    int count = 0;
    for (int i = 0; i < n; i++) {
        int target = v[i] + 1;
        for (int j = i + 1; j < n; j++) {
            if (v[j] == target) {
                count++;
                break;
            }
        }
    }
 
    cout << count << endl;
 
    return 0;
}
