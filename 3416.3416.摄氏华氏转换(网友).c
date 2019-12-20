#include <stdio.h>

int main()
{
    char str[4];
    scanf("%s", str);
    int num = (str[0]-'0')*10 + (str[1]-'0');
    if (str[2] == 'f')
        printf("%.2fc\n", (num-32)*5/9.0);
    else
        printf("%.2ff\n", num*9/5.0+32);
    return 0;
}
