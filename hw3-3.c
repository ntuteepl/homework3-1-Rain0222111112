#include <stdio.h>
#include <stdlib.h>

int main()
{int a,b;
scanf("%d%d",&a,&b);
int a1=(a/1000+a/100+a/10+a%10);
int b1=(b/1000+b/100+b/10+b%10);
if(a1=b1){
    if(a<b){
    printf("%d",a);}

  else{printf("%d",b);}
}
  else if(a1<b1){
    printf("%d",a);
  }
  else if(b1<a1){
    printf("%d",b);
  }

}

