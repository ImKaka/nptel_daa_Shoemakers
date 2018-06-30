//Shoemaker's Problem - https://onlinecourses.nptel.ac.in/noc17_cs27/progassignment?name=141
//by-@imkaka
//Concept Of Stable Sorting
#include <cstdio>
#include <cstring>
#include <algorithm>
#define maxn 1000001
  using namespace std;
 
  int n;
  struct node
  {
     int num;
     double pay;
     int d;
     bool operator <(const node &a)const
     {   if(pay!=a.pay)
         return (pay>a.pay);
         else
           return(num<a.num);
     }
 }p[maxn];

 int main()
 {
   
         scanf("%d",&n);
         for(int i=1; i<=n; i++)
         {
             int x,y;
             scanf("%d%d",&x,&y);
             p[i].num=i;
             p[i].pay=(double)(y*1.0/x);
             p[i].d=x;
         }
         sort(p+1,p+1+n);
         for(int i=1; i<=n; i++)
         {
             if(i==1)
             {
                 printf("%d\n",p[i].num);
             }
             else printf("%d\n",p[i].num);         }

 }
