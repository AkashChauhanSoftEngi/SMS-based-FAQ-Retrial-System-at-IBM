#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int tokenize()
{
	char str1[150];
	FILE *fp,*fp1;
	int x1=0,x2,x3,i,n,j=0;
	fp=fopen("remov_dig.txt","r+");
	fp1=fopen("tokens.txt","w");
	if((fp==NULL)||(fp1==NULL))
	{
	  printf("\n File Opening Error");
	  exit(0);
	}

	while(fscanf(fp,"%s",str1)!=EOF)
	{
                                    
            fprintf(fp1,"%s\n",str1);                   
    }
    fclose(fp1);
	   return 0;
}

