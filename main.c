#include <stdio.h>
#include <math.h>

int main() {
  int n,m,i,alg0,alg1,alg2,soma_cubo;
 do 
  {
    printf("Limite Superior ");scanf("%d",&n);fflush(stdin);
    printf("Limite inferior ");scanf("%d",&m);fflush(stdin);
    } while (m<100 || n>999 || m>n);

    for (i=m;i<=n;i++)
     {
      alg0=i%10;
      alg1=(i/10)%10;
      alg2=(i/100)%10;
      soma_cubo=pow(alg0,3)+pow(alg1,3)+pow(alg2,3);
      if(i==soma_cubo)
      printf("\t %d",i);
     }
   
  return 0;
}