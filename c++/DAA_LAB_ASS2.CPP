// // #include <bits/stdc++.h>
// // using namespace std;

// // // Function to perform Bubble Sort
// // void bubbleSort(vector<int>& arr) {
// //     int n = arr.size();
// //     for (int i = 0; i < n - 1; i++) {
// //         for (int j = 0; j < n - 1 - i; j++) {
// //             if (arr[j] > arr[j + 1]) {
// //                 swap(arr[j], arr[j + 1]);
// //             }
// //         }
// //     }
// // }

// // // Function to perform Heap Sort
// // void heapify(vector<int>& arr, int n, int i) {
// //     int largest = i;
// //     int left = 2 * i + 1;
// //     int right = 2 * i + 2;

// //     if (left < n && arr[left] > arr[largest]) {
// //         largest = left;
// //     }

// //     if (right < n && arr[right] > arr[largest]) {
// //         largest = right;
// //     }

// //     if (largest != i) {
// //         swap(arr[i], arr[largest]);
// //         heapify(arr, n, largest);
// //     }
// // }

// // void heapSort(vector<int>& arr) {
// //     int n = arr.size();

// //     // Build heap
// //     for (int i = n / 2 - 1; i >= 0; i--) {
// //         heapify(arr, n, i);
// //     }

// //     // Extract elements from heap
// //     for (int i = n - 1; i >= 0; i--) {
// //         swap(arr[0], arr[i]);
// //         heapify(arr, i, 0);
// //     }
// // }

// // // Function to merge two sorted vectors
// // void merge(vector<int>& a, vector<int>& b, vector<int>& res) {
// //     int i = 0, j = 0, k = 0;
// //     while (i < a.size() && j < b.size()) {
// //         if (a[i] <= b[j]) {
// //             res[k++] = a[i++];
// //         } else {
// //             res[k++] = b[j++];
// //         }
// //     }
// //     while (i < a.size()) {
// //         res[k++] = a[i++];
// //     }
// //     while (j < b.size()) {
// //         res[k++] = b[j++];
// //     }
// // }

// // // Function to perform Merge Sort
// // void MergeSort(vector<int>& v) {
// //     int n = v.size();
// //     if (n == 1) return; // Base case

// //     int n1 = n / 2;
// //     int n2 = n - n / 2;
// //     vector<int> a(n1);
// //     vector<int> b(n2);

// //     // Copying the elements to the two halves
// //     for (int i = 0; i < n1; i++) {
// //         a[i] = v[i];
// //     }
// //     for (int i = 0; i < n2; i++) {
// //         b[i] = v[i + n1];
// //     }

// //     // Recursively sort both halves
// //     MergeSort(a);
// //     MergeSort(b);

// //     // Merge the sorted halves
// //     merge(a, b, v);
// // }

// // // Function to print an array
// // void printArray(const vector<int>& arr) {
// //     for (int i : arr) {
// //         cout << i << " ";
// //     }
// //     cout << endl;
// // }

// // int main() {
// //     vector<int> arr = {64, 25, 12, 22, 11};

// //     cout << "Original array: ";
// //     printArray(arr);

// //     vector<int> arrBubble = arr;
// //     bubbleSort(arrBubble);
// //     cout << "Sorted array using Bubble Sort: ";
// //     printArray(arrBubble);

// //     vector<int> arrHeap = arr;
// //     heapSort(arrHeap);
// //     cout << "Sorted array using Heap Sort: ";
// //     printArray(arrHeap);

// //     vector<int> arrMerge = arr;
// //     MergeSort(arrMerge);
// //     cout << "Sorted array using Merge Sort: ";
// //     printArray(arrMerge);
// // }


// #include <bits/stdc++.h>
// using namespace std;

// // Function to perform Selection Sort
// void selectionSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }

// // Function to perform Insertion Sort
// void insertionSort(vector<int>& arr) {
//     int n = arr.size();
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j--;
//         }
//         arr[j + 1] = key;
//     }
// }

// // Function to partition the array for Quick Sort
// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j < high; j++) {
//         if (arr[j] < pivot) {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }

// // Function to perform Quick Sort
// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);

//         quickSort(arr, low, pi - 1);  // Sort elements before partition
//         quickSort(arr, pi + 1, high); // Sort elements after partition
//     }
// }

// // Function to print an array
// void printArray(const vector<int>& arr) {
//     for (int i : arr) {
//         cout << i << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> arr = {64, 25, 12, 22, 11};

//     cout << "Original array: ";
//     printArray(arr);

//     vector<int> arrSelection = arr;
//     selectionSort(arrSelection);
//     cout << "Sorted array using Selection Sort: ";
//     printArray(arrSelection);

//     vector<int> arrInsertion = arr;
//     insertionSort(arrInsertion);
//     cout << "Sorted array using Insertion Sort: ";
//     printArray(arrInsertion);

//     vector<int> arrQuick = arr;
//     quickSort(arrQuick, 0, arrQuick.size() - 1);
//     cout << "Sorted array using Quick Sort: ";
//     printArray(arrQuick);
// }

