#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
int main() {
    string s; cin>>s;
    vector<int> freq(26, 0); 
 
    // Traverse the string and update the frequency array
    for (char c : s) {
        if (isalpha(c)) { // Check if the character is a letter
            c = tolower(c); // Convert character to lowercase
            freq[c - 'a']++; // Increment the count for the corresponding letter in the frequency array
        }
    }
 
    // Print the occurrence of each letter
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            char letter = 'a' + i;
            cout << letter << " " << ": " << freq[i] << endl;
        }
    }
 
    return 0;
}