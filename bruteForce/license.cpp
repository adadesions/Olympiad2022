#include <stdio.h>
#include <algorithm>
#include <string>

using namespace std;

string licenseFormating(string str, int k) {
    string result = "";
    for (int i=str.size()-1; i>=0; i--) {
        if (str[i] == '-') continue;
        if ((result.size() % (k+1)) == k) result += '-';
        result += toupper(str[i]);        
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    // string license = "5F3Z-2e-9-w";
    string license = "2-5g-3-J";

    int k = 2;
    string correctFormat = licenseFormating(license, k);

    printf("OLD: %s\n", license.c_str());
    printf("NEW: %s\n", correctFormat.c_str());
}