#include <stdio.h>
void f( char *p ){
    int n = 0;
    while(p[n] != 0)
        n++;
    printf("length of string is %d", n);
    n--;

    for(int i = 0; i <= (n+1)/2; i++){
        p[i] = p[n - i];
        printf("%d %d exchanged\n", i, n - 1);
    }
}

int main(void)
{
    f("dagasdgdasgfsda");
    return 0;
}
