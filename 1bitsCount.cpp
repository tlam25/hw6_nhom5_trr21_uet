#include <iostream>
#include <string>

using namespace std;

int ones (string s) {
    if (s.empty())
        return 0;
    else {
        char first = s[0];
        string rest = s.substr(1);
        if (first == '1')
            return ones(rest)+1;
        else
            return ones(rest);
    }
}

int main() {
    string s;
    cin >> s;
    cout << ones(s);
    return 0;
}