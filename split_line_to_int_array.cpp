#include <bits/stdc++.h>

using namespace std;

vector<int> parse(string s) {
    string word = "";
    vector<int> ans;
    for (auto t: s) {
        if (t == ' ') {
            int a = stoi(word);
            ans.push_back(a);
            word = "";
        } else {
            word += t;
        }
    }
    ans.push_back(stoi(word));
    return ans;
}

int main() {
    string s = "1 -1 -4 -123 345 56 19";
    auto t = parse(s);
    for (auto a: t) cout << a << " ";
    return 0;
}