/*
 ============================================================================
 Name        : sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit ,i ,values[1000], searchkey , flag=0;
	setbuf(stdout,NULL);
	printf("enter limit of array");
	scanf("%d",&limit);
	printf("enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	printf("please enter search values");
	scanf("%d",&searchkey);

	for (i=0;i<limit;i++){
		if(searchkey==values[i]){
		flag=1;
		break;
		}
	}
		if(flag=1){
			printf(" value found at position %d",i+1);
		}else{
			printf("value not found");
		}
	return EXIT_SUCCESS;
}
