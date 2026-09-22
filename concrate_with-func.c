  #include<stdio.h>
  #include<string.h>
int main ()
{
    char a[1000001];
    char b[1000001];
    scanf("%s %s",&a,&b);
//     //printf("%s %s",a,b);
//     int lenght_a = strlen(a);
//     int lenght_b = strlen(b);
//     for(int i=0;i<=lenght_b; i++)
//    {
//     a[i+lenght_a]=b[i];
//    }


strcat(a,b);//concrate function
   printf("%s %s",a,b);
    return 0;
}