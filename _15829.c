#include "stdio.h"
#include "math.h"

int main() {
    char s[51];
    int L;
    long long hash = 0;
    scanf("%d", &L);
    scanf("%s", s);
    for (int i = 0; i < L; ++i) {
        int a = s[i] - 'a' + 1;
        a *= (int) pow((double) 31, (double) i) % 1234567891;
        hash += a;
    }
    printf("%lld", hash % 1234567891);
}