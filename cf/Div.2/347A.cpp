#include <cstring>
#include <stdio.h>

#define MAXLEN 125

using namespace std;

int main()
{
    char a[MAXLEN], b[MAXLEN];
    scanf("%s %s", a, b);
    int k = strcmp(a, b);
    if (k == 0) printf("%s", a);
    else printf("1\n");
    return 0;
}
