#include <cstdio>

inline unsigned get_uint() {
    unsigned ans = 0;
    char ch = getchar();
    while (ch < '0' || '9' < ch)
        ch = getchar();
    while ('0' <= ch && ch <= '9') {
        ans = ans * 10 + ch - '0';
        ch = getchar();
    }
    return ans;
}

int main() {
    unsigned n = get_uint();
    for (int i = 0; i < n; ++i)
        printf("case #%i:\n%i\n", i, get_uint() / 5);
}