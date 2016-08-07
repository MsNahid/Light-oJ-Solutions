#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    long long int mod, cont, tc, i;
    long long int num, rem;

    scanf("%lld", &tc);

    for(i = 0; i < tc; i++){

        scanf("%lld%lld", &num, &rem);
        cont = 1;
        mod = rem;

        while(rem % num != 0){
            rem = (rem * 10 + mod) % num;
            cont++;
        }

        printf("Case %lld: %lld\n", i + 1, cont);
    }

    return 0;
}
