 #include<stdio.h>
 #include<string.h>
int main ()
{
    char a[101];
    char b[101];
    scanf("%s %s",a,b);
  int lenght=strlen(b);
//  i<=n newar karon holo jokokhon b ke copy kore a te rakhbo
//  tohon jodi a er chararter besi hoy er cheye ar sei besi character
//   gula na nite chai tahole b ke je copy korlam tar lenght er soman porjonto 
//   i ke nibo but i to lenght-1 howar kotha but jokhon lenght er 
//   soman nibo tohon index zero theke lenght-1 jawar poreo abar ek __has_include_next
//   besi jabe ar jokhoni index lenght er soman jabe tar mane strint 
//   er sokol elemnet newa hoye jabe then sei string er last index 
//   e je ekta null character ache setaw niye nibe ar jokhoni 
//   null keo nibe tokhon print korte gele jokhon null pabe 
//   tokhon print kora off kore dibe tahole b ke copy kore a te 
//   rakhar poreo a te jodi extra kono element thake segula ar 
//   print h0be na ...
   for(int i =0;i<=lenght; i++)
   {
    a[i]=b[i];
   }
 printf("%s %s",a,b);
    return 0;
}