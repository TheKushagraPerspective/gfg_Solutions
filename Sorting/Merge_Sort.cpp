#include<bits/stdc++.h>
using namespace std;


void mergeArray(vector<int> &arr , int low , int mid , int high) {
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low ; i<=high ; i++) {
        arr[i] = temp[i - low];
    }
}


void mergeSort(vector<int> &arr , int low , int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr , low , mid);
        mergeSort(arr , mid + 1 , high);
        mergeArray(arr , low , mid , high);
    }
    else {
        return;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0 ; i<n ; i++) {
        cin >> arr[i];
    }

    int low = 0;
    int high = n - 1;
    mergeSort(arr , low , high);

    cout << "After applying merge sort :- ";
    for(int i=0 ; i<n ; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}