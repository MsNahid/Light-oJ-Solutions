#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

const int SIZE = 1000;
using namespace std;

char str[SIZE + 10];

int main(){

    long long int i, j, a, b, k;
    long long  cse, T;

    scanf("%lld", &T);
    for(cse = 0; cse < T; cse++){
        scanf("%s%lld", &str, &b);
        k = 0;
        if(b < 0) b *= (-1);
        if(str[0] == '-') k = 1;

        a = 0;
        for(i = k; str[i]; i++){
            a += (str[i] - '0');
            a *= 10;
            a = a % b;
        }

        if(a == 0) printf("Case %lld: divisible\n", cse + 1);
        else printf("Case %lld: not divisible\n", cse + 1);
    }

    return 0;
}
