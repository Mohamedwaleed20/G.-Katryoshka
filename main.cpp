#include <iostream>
#include <cmath>
#include<algorithm>


using namespace std;

int main()
{
    long long n , m  , k ;
    cin >> n >> m  >> k  ;
    long long res = 0 ;
    long long mn = min({n,m,k});
    res = res + mn;
    n = n - mn;
    m = m - mn;
    k = k - mn;
    mn = min (n/2,k);
    res = res + mn;
    cout << res ;

    return 0;
}
