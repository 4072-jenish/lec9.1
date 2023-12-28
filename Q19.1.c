#include<stdio.h>

main(){
	
	int i;
	char a[]={'j','e','n','i','s','h'};
	
   for (i=0;i<6;i++){
   	  a[i]=a[i]-32;
   	  printf("%c ",a[i]);
   }
	
}
