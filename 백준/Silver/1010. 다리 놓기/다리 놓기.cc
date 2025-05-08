#include <iostream>
using namespace std;

int main() {
    int n, m, N;
    cin >> N;
    while (N--) {
        cin >> n >> m;
        long long ans=1;

        for (int i =1; i <= n; i++) {
           ans=ans*(m-n+i)/i;
        }

        cout <<  ans << '\n';
    }
}
