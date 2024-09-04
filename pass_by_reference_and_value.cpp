#include<bits/stdc++.h>
using namespace std;


class Solution {
    public:

    vector<int> passedBy(int a , int &b) {

        // start writing from here

        vector<int> v;
        v.push_back(a+1);
        v.push_back(b+2);
        return v;

        // end of writing here
    }
};

int main() {
    int a , b;
    cin >> a >> b;

    Solution obj;
    vector<int> ans = obj.passedBy(a , b);
    cout << ans[0] << " " << ans[1] << "\n";
}