#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[5];
    scanf("%s", &str);
    rev(str);
    return 0;
}

char* rev(str){
    printf("%s", str);
    return str;
}
