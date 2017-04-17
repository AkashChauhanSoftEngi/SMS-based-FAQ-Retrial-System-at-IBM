#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int digit_removal()
{
    FILE *fp1,*fp2,*fp3,*fp4;
    char ch, ar[20];
    int l;
    fp3=fopen("query_file.txt","r");
    fp1=fopen("query_file1.txt","w+");
    fp4=fopen("final_op.txt","a");
    while(fscanf(fp3,"%s",ar)!=EOF)
    { 
        l=0;
      l=strlen(ar) ;
      if(l==1) 
      {
          if(ar[0]=='r'){
          fputs("are\n",fp4);
          fputs("are\n",fp1);
         continue;}
          if(ar[0]=='z'){
          fputs("is\n",fp4);
            fputs("is\n",fp1);continue;}
          if(ar[0]=='d'){
          fputs("the\n",fp4);
            fputs("the\n",fp1);continue;}
          if(ar[0]=='u'){
          fputs("you\n",fp4);
            fputs("you\n",fp1);continue;}
          if(ar[0]=='k'){
          fputs("ok\n",fp4);
            fputs("ok\n",fp1);continue;}
          if(ar[0]=='m'){
          fputs("am\n",fp4);
            fputs("am\n",fp1);continue;}
          if(ar[0]=='v'){
          fputs("we\n",fp4);
            fputs("we\n",fp1);
            continue;}
          if(ar[0]=='c'){
          fputs("se\n",fp1);
            fputs("se\n",fp1);
            continue;}
          if(ar[0]=='y'){
          fputs("why\n",fp4);
            fputs("why\n",fp1);
            continue;}
          if(ar[0]=='n'){
          fputs("an\n",fp4);
            fputs("an\n",fp1);
            continue;}
          if(ar[0]=='f'){
          fputs("of\n",fp4);
            fputs("of\n",fp1);continue;}
          if(ar[0]== '4'){
          fputs("for\n",fp4);
            fputs("for\n",fp1);continue;}
          if(ar[0]== '2'){
          fputs("to\n",fp4);
            fputs("to\n",fp1);continue;}
      }    
      else{
      fputs(ar,fp1);
       fputc('\n',fp1);}
    }    
    fp2=fopen("remov_dig.txt","w");
    if(!fp1||!fp2)
    printf("\n file opening error");
    rewind(fp1);
    while(1)
    {
        ch=fgetc(fp1);
        printf("%c",ch);
        if(ch==EOF)
         break;
         
        if(ch=='4')
            fputs("for",fp2);
         
        else if(ch=='8')
             fputs("eat",fp2);
        else if(ch=='2')
             fputs("to",fp2);
             
        else if(ch=='1')
        {    ch=fgetc(fp1);
             if(ch=='0')
             fputs("ten",fp2);
             else
             { fp1--;
             fputs("one",fp2);
             }
        }          
        
        else
          fputc(ch,fp2);
   }
   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   fclose(fp4);
   
   //system("pause");
   return 0;
}        
         
        
        
