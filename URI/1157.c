#include <stdio.h>

int main(){
  int n = 0, i = 0;
  scanf("%d", &n);
  for (i=1; i <= n; i++){
  	if (n % i == 0){
  		printf("%d\n", i);
	  }
  }
  return 0; 
}