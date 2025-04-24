#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    
    for(long long i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false); // 입출력 속도 향상
    cin.tie(NULL); // cin과 cout 분리

    long long n, s;
    cin >> n;

    for(long long i = 0; i < n; i++){
        cin >> s;
        while(!isPrime(s)) s++;
        cout << s << "\n";
    }
    return 0;
}
