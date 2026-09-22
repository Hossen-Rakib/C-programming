// Duita  srting er moddhe comapre kore dekha hoy konta 
// boro konta choto.ar ei compare korar system ke bola 
// hoy "Lexicographical Comparison". Etar kaj holo alphabate
// er sathe alphabate ke compare kora hoy .mainly dictionary
// te jei system e word gula thake sei  order use kore 
// compare kora hoy...jodi example hisebe newa  hoy je 
// best and cat tahole eder pothom alphabate compare kore 
// dekhle pawa jay b er cheye c boro karon b age  asche c pore asche
// jodi apple and apply hoy tahole duitari pothom 4ta 
// alphabate soman last alphabate e jeye dekha jacce pothom tar 
// e and porer tar y tahole apple er cheye apply boro.
//  abar ABCD & AB er moddhe AB ta choto 
// steps and logic :
// 1.character by charater chek korte hobe soman hole samne agate hobe
// 2.cheking korte korte jodi ekta string er value baki thake but 
// opor string er value sesh hoye jay tahole jar value sesh hoice
// se choto .

// **situation Details:**
// 1.string sesh: ekhane tinta clitoria ache 
// --a sesh b achei -- (ab & abc) tahole a small  
// --b sesh a achei --(abc & ab) tahole b small 
// -- a & b duitai sesh -- (abcd & abcd) tahole a==b
// 2.string Ache: ekhaneo tinta clitoria ache 
// -- a choto ( abc & abd) tahole a small 
// --b choto (  abd & abc) tahole b small 
// -- a & b soman (abcd & abcd) a == b and continue cheking
// code:
 #include<stdio.h>
 #include<stdbool.h>
int main ()
{
    char a[1001];
    char b[1001];
    scanf("%s %s",&a,&b);
    
    // while loop e kono condition dewa hoynai karon ei code e 
    // 5 ta situation ache jekhane thamte hobe oto gula condition 
    // ek bare or diye diye na likhe potita if condition blook er 
    // vitore break diye dewa hoice kaj sesh hole nije theke theme 
    // jabe ..ar while er moddhe true dewa hoice jeno loop ta chole 
    // ar ei loop ta infinite loop hisebe kaj korbe but break condition
    // er jonno theme jabe.true likhar jonno #include<stdbool.h>ei 
    // headear use kora true na diye 1 dileo same kaj ei hobe 
    int  i=0;
    while (true)
    {
        if( a[i] == '\0' && b[i] == '\0')
        {
            printf("Equal");
            break;
        }
        else if( a[i] == '\0')
        {
            printf("A is smaller");
               break;
        }
        else if ( b[i] == '\0')
        {
            printf("B is smaller");
               break;
        }
         else if ( a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A is smaller");
               break;
        }
        else if (a[i] > b[i])
        {
            printf("B is smaller");
               break;
        }
       
    }


    return 0;
}