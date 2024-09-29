#include<iostream>
#include<vector>
using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int lo = 0;
    int hi = arr.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            lo = mid + 1;
        else
            hi = mid - 1;
    }
    return -1; 
}

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            return i;
    }
    return -1; 
}

int main() {
    int target = 5;
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // binary search
    int binaryResult = binarySearch(arr, target);
    if (binaryResult != -1)
        cout<<"Binary Search: Target found at index: "<< binaryResult;
        cout<<endl;
    else
        cout << "Binary Search: Target not found" ;
        cout<<endl;

    // linear search
    int linearResult = linearSearch(arr, target);
    if (linearResult != -1)
        cout<<"Linear Search: Target found at index: "<<linearResult;
        cout<<endl;
    else
        cout << "Linear Search: Target not found";
        cout<<endl;
}
