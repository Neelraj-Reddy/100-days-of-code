// #include <bits/stdc++.h>
// using namespace std;

// bool isSubsequence(const string& s1, const string& s2) {
//     int i = 0, j = 0;
//     while (i < s1.length() && j < s2.length()) {
//         if (s1[i] == s2[j]) {
//             i++;
//         }
//         j++;
//     }
//     return (i == s1.length());
// }

// int main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         string s1, s2;
//         cin >> s1 >> s2;

//         if (isSubsequence(s1, s2) || isSubsequence(s2,s1)) {
//             cout << "Yes" << endl;
//         } else {
//             cout << "No" << endl;
//         }
//     }

//     return 0;
// }

// check above and below stuff and fix errors.

#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string &s1, string &s2) {
    int j = 0; // For index of s1 (m)
    for (int i = 0; i < s2.size() && j < s1.size(); i++) 
        if (s1[j] == s2[i]) 
            j++;
    return (j == s1.size());
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string m, w;
        cin >> m >> w;
        if (isSubsequence(m, w) || isSubsequence(w, m))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}