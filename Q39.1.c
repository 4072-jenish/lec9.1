#include<stdio.h>

main(){
	
	int i;
	char a[]={'J','E','N','I','S','H','j','e','n','i','s','h',};
	
   for (i=0;i<12;i++){
   	if(a[i]<97 ){
   	  a[i]=a[i]+32;
   	  printf("%c ",a[i]);
   }else{
   	  a[i]=a[i]-32;
   	  printf("%c ",a[i]);
   }
   }
}
