#include<stdio.h>
#include<stdlib.h>

#define DATA_SIZE 8192
int main()
{
	char data[DATA_SIZE];

	FILE *fptr;

	fptr = fopen("nums.dat","w");

	if(fptr==NULL){
		printf("Unable to create file.\n");
		exit(EXIT_FAILURE);
	}
	int i;
	for(i=1;i<2048;i++){
		fprintf(fptr,"%d\n",i);
	}
	//fputs(data,fptr);

	fclose(fptr);

	printf("File created and saved");
}
