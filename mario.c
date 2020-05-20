#include<stdio.h>

int main(){
printf("How high should be your pyramid ?");
int a;
scanf("%d",&a);
for(int b=1;b<=a;b++){

printf("\n");

	for(int c=1; c<=b ; c++){

      printf(".");

    }
  }




  return 0;
}
