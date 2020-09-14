
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
   char input[1500];
   char *buf;
 
    char *args[2]={0,0};
 
    
    int p=0,count=0;

    fptr=fopen("input.txt","r");
   while(fgets(input,1500,fptr) != NULL)
   {
     buf=strtok(input,",");
     
        if(count>0)
        printf("Welcome, ");
         
     	while(buf != 0 && count>0)
				{
					args[p]=buf;
				   	p++;
					buf=strtok(0,",");
				}
				if(args[0]!= NULL && args[1]!=NULL)
			    	printf("%s %s \n ",strtok(args[1],"\r\n"), args[0]);
		
				count++;
        p=0;
   }
    fclose(fptr);

    return 0;
}



	

			

