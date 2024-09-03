#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:

    void frequencyCount(vector<int>& arr , int n , int p) {

        // start writing code from here in gfg
        unordered_map<int , int> mpp;
        for(int i = 0 ; i < n ; i++) {
            mpp[arr[i]]++;
        }
        for(int i=1;i<=n;i++) {
            arr[i-1] = mpp[i];
        }
        // end of writing

    }
};

int main() {
    int n , p;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cin >> p;

    Solution obj;
    obj.frequencyCount(arr , n , p);

    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }

}