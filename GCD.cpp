#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long check(long long x, vector<long long>& arr) {
    long long count = 0;    
    for (long long i = 0; i < arr.size(); i++) {
        if (arr[i] % x == 0) count++;
    }
    return count;
}

long long solve(long long n, vector<long long>& arr) {
    long long maxDivisor = *max_element(arr.begin(), arr.end());
    long long maxResult = 0;

    for (long long i = 1; i <= maxDivisor; i++) {
        long long ans = check(i, arr);
        if (ans >= arr.size() - 1) {
            maxResult = i;
        }
    }

    return maxResult;
}

int main() {
    long long n;
    cin >> n;
    
    vector<long long> arr(n);
    for (long long i = 0; i < n; i++) {
        long long a;
        cin >> a;
        arr[i] = a;
    }

    long long ans = solve(n, arr);
    cout << ans << endl;

    return 0;
}
