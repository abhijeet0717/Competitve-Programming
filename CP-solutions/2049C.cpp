#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the lexicographically smallest permutation with the smallest score
vector<int> findMinScorePermutation(const vector<int>& arr) {
    int n = arr.size();
    vector<pair<int, int>> indexedArr;
    
    // Pair values with their indices
    for (int i = 0; i < n; ++i) {
        indexedArr.push_back({arr[i], i + 1}); // Store 1-based index
    }
    
    // Sort by value, and by index if values are the same
    sort(indexedArr.begin(), indexedArr.end());
    
    // Extract the permutation (indices in sorted order)
    vector<int> result;
    for (const auto& p : indexedArr) {
        result.push_back(p.second);
    }
    
    return result;
}

int main() {
    // Example input
    //vector<int> arr = {2, 1};
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    // Get the result
    vector<int> result = findMinScorePermutation(arr);
    
    // Output the result
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}