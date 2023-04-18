#include <stdio.h>

int main(void){

  int i,x,y;

  x=0;
  y=0;
  i=0;
  for(i=0;i<50;i++){

    x=x+i;
    y=x+y*i;
  }
  printf("%d\n",y);
  return 0;
}
