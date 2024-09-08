#include<bits/stdc++.h>
using namespace std;


int gcd(int a , int b) {

    // 1st method
    if(a == 0) {
        return b;
    }

    int mini = min(a , b);
    int maxi = max(a , b);
    return gcd(maxi % mini , mini);




    // 2nd method
    // int mini = min(a , b);
    // int maxi = max(a , b);
    // int x = 0;
    // while(mini != 0) {
    //     x = maxi % mini;
    //     maxi = mini;
    //     mini = x;
    // }
    // return maxi;

}

int main() {
    int n , m;
    cin >> n >> m;
    int GCD = gcd(n , m);
    int LCM = (n*m) / GCD;

    cout << "LCM of " << n << " and " << m << " is : " << LCM << endl;
    cout << "GCD of " << n << " and " << m << " is : " << GCD << endl;
}