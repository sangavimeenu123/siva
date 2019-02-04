 C++ program find sum of elements that 
// appear k times.  
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to count the sum 
int sumKRepeating(int arr[], int n, int k) 
{ 
    int sum = 0; 
  
    // To keep track of processed elements 
    vector<bool> visited(n, false); 
  
    // initializing count equal to zero 
    for (int i = 0; i < n; i++) { 
  
        // If arr[i] already processed 
        if (visited[i] == true) 
            continue; 
  
        // counting occurrences of arr[i] 
        int count = 1; 
        for (int j = i + 1; j < n; j++) {             
            if (arr[i] == arr[j]) { 
                count++; 
                visited[j] = true; 
            } 
        } 
    
        if (count == k) 
           sum += arr[i]; 
    } 
  
    return sum; 
} 
  
// Driver code 
int main() 
{ 
    int arr[] = { 9, 9, 10, 11, 8, 8, 9, 8 }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 3; 
    cout << sumKRepeating(arr, n, k); 
    return 0; 
} 
