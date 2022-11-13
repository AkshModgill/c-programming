#include<stdio.h>
int main(){
   int a ,b, c;
   printf("Enter the value of a");
   scanf("%d", &a);

   printf("Enter the value of b");
   scanf("%d", &b);

   printf("Enter the value of c");
   scanf("%d", &c);

    if(a>b , a>c){
      printf("a is largest \n ");
  }else{
      printf("a is not largest  \n");
  }
      if(b>a , b>c){
          printf("b is largest \n");

      }else{
          printf("b is not largest \n");
      }

      if(c>a , c>b){
          printf("c is largest \n");

      }else{
          printf("c is not largest \n ");
      }


return 0;
}
