#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string> &s) {
    string ans = "";
    sort(s.begin(), s.end());
    int n = s.size();
    string a = s[0];
    string b = s[n - 1];
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b[i])
        {
            ans += b[i];
        }
        else
            break;
    }
    return ans;
}

int main() {

    return 0;
}