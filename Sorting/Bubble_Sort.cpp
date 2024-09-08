#include<bits/stdc++.h>
using namespace std;

void swap(int &a , int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[] , int n) {

    for(int i=0 ; i < n-1 ; i++) {
        for(int j=i+1 ; j<n ; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[j] , arr[i]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int lengthOfArray = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr , lengthOfArray);

    cout << "After using Bubble sort: ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}