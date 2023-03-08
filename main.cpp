#include <iostream>
#include <string>
using namespace std;
void reverse(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void printArry(int arr2[], int sk) {
  for (int i = 0; i < sk; i++) {
    cout << arr2[i] << "\t";
  }
  cout << endl;
}

int main() {
  // cout << "Hello World!\n";
  int arr1[] = {1, 2, 3, 4, 5, 6};
  // int k=5;
  int k =
      sizeof(arr1) /
      sizeof(arr1[0]); // This line of code is calculating the size of the array
                       // "arr1" in terms of the number of elements it contains.
  cout << "Before Reverse Array" << endl;
  printArry(arr1, k);
  reverse(arr1, k);
  cout << "After Reverse Array" << endl;
  printArry(arr1, k);
}