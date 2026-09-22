 #include<stdio.h>

int main ()
{
    char a[1001];
    char b[1001];
    scanf("%s %s",&a,&b);

    int value = strcmp(a,b);//string compare 
    if( value < 0)
    {
        printf("A is smaller");
    }
    if( value >0)
    {
        printf("B is smaller");
    }
    if( value == 0)
    {
        printf(" Equal");
    }

    return 0;
}
// -- jodi negative value dey tahole a small
// -- jodi positive value dey tahole b small
// -- jodi  zero dey tahole a & b equal 