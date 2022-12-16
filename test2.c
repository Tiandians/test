#include <stdio.h>
#include <string.h>

main()
{
    int N, i, a;
    char str[1000][80], *c;
    scanf("%d\n", &N);
    for(i = 0; i < N; i++)
        gets(str[i]);
    c = str[0];
    for(i = 1; i < N; i++)
    {
        if(strcmp(c, str[i])> 0)
            c = str[i];
    }
    printf("Min is: %s", c);
}