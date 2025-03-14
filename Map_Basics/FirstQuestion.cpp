/*1. Frequency of Elements in an Array
📌 Problem: Given an array of integers, count the frequency of each element.
🔹 Example:
Input: arr[] = {1, 2, 2, 3, 3, 3}  
Output:  
1 -> 1     //right hand side is frequency
2 -> 2  
3 -> 3  

*/
#include <iostream>
#include <map>  // Include map library
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;  // Input size of array
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array elements
    }

    map<int, int> freq; // Map to store element frequencies

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;  // Increase count for this number
    }

    // Print the frequency of each element
    cout << "Element Frequency:\n";
    for (auto it : freq) {
        cout << it.first << " -> " << it.second << endl;  
    }

    return 0;
}
