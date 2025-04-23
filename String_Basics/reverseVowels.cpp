/*     Leetcode -> 345   Reverse Vowels of a String             ( https://leetcode.com/problems/reverse-vowels-of-a-string/description/ )

        My solution:    ( https://leetcode.com/problems/reverse-vowels-of-a-string/solutions/6680650/beginner-approach-beats-100-users-by-uda-kowh )

*/

#include <iostream>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'A' || c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' || c == 'o' || c == 'O' ||
            c == 'u' || c == 'U');
}

string reverseVowels(string s) {
    string temp = "";
    for (char c : s) {
        if (isVowel(c)) {
            temp += c;
        }
    }

    int n = temp.size() - 1;
    string ans = "";
    for (char c : s) {
        if (isVowel(c) && n >= 0) {
            ans += temp[n];
            n--;
        } else {
            ans += c;
        }
    }

    return ans;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result = reverseVowels(input);
    cout << "String after reversing vowels: " << result << endl;

    return 0;
}
