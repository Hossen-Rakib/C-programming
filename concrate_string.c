 #include<stdio.h>
int main ()
{
    char a[1000001];
    char b[1000001];
    scanf("%s %s",&a,&b);
    //printf("%s %s",a,b);
    int lenght_a = strlen(a);
    int lenght_b = strlen(b);
// //concrate korar bepar ta holo string a er pore string b
// ke add kra mane a=pen b=paper concrate korle penpaper
// emon hobe.to jokhon b ke niye jeye a er sathe add korbo tokhon 
// a er elemnt je porjonto rakha ache tar pore add korbo
// dhori a er lenght = 3 tahole 0to2 index porjonto value ache 3
// theke abar insert kora jabe.tahole a er lenght er soman index 
// theke insert kora suru korbo . a[lenght] ei index e b[0]
// insert hobe then increment hobe..loop ta cholbe b er lenght
// porjonto.lenght porjonto cholle null value soho copy hoye eshe 
// a er pashe insert hobe ar insert howa suru hobe a er lengh er soman 
// tomo index theke tai a[i+lenght] ar i=0 theke suru hocce 

for(int i=0;i<=lenght_b; i++)
   {
    a[i+lenght_a]=b[i];
   }
   printf("%s %s",a,b);
    return 0;
}