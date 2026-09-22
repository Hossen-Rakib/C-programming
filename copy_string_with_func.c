 #include<stdio.h>
 #include<string.h>
int main ()
{
    char a[1001];
    char b[1001];
    scanf("%s %s",&a,&b);
    // jake copy korbo se pore thekbe jar moddhe rakhbo 
    // se age thakbe a=destination b=eke copy kore newa hobe 
    strcpy(a,b);
    printf("%s %s",a,b);
    return 0;
}