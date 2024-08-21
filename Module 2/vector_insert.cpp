#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // Insert element at index 2
    v.insert(v.begin() + 2, 100);
    // v.erase(v.begin()+1,v.end()-1);

    for (int x : v) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
