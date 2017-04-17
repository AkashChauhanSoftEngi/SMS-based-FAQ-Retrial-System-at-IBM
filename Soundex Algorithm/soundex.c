#include<stdio.h>
#include<conio.h>
#include<string.h>

void removechars(char string[]){

  int i,j;
  
  for(i=1; string[i] != '\0'; i++){

    if(string[i] == string[i+1] || string[i] == 'a' || string[i] == 'e' ||

               string[i] == 'h' || string[i] == 'i' || string[i] == 'o' ||

               string[i] == 'u' || string[i] == 'w' || string[i] == 'y'){

      for(j=i; string[j] != '\0'; j++)

        string[j] = string[j+1];

      i--;

    }

  }

}

void trim(char string[]){

  int i,j;

  // remove dupes

  for(i=1; string[i] != '\0'; i++){

    if(string[i] == string[i+1]){

      for(j=i; string[j] != '\0'; j++)

        string[j] = string[j+1];

      i--;

    }

  }

  if(strlen(string)>4)

    string[4] = '\0';

  else {

    for(i=1; i<4; i++){

      if(string[i] == '\0'){

        for(j=i; j<4; j++)

          string[j] = '0';

      }

    }

    string[4] = '\0';

  }

}

void encode(char string[]){

  int i;

  for(i=1; string[i] != '\0'; i++){
 if(string[i] == 'b' || string[i] == 'f' || string[i] == 'p' ||

       string[i] == 'v')

      string[i] = '1';

    if(string[i] == 'c' || string[i] == 'g' || string[i] == 'j' ||

       string[i] == 'k' || string[i] == 'q' || string[i] == 's' ||

       string[i] == 'x' || string[i] == 'z')

      string[i] = '2';

    if(string[i] == 'd' || string[i] == 't')

      string[i] = '3';

    if(string[i] == 'l')

      string[i] = '4';

    if(string[i] == 'm' || string[i] == 'n')

      string[i] = '5';

    if(string[i] == 'r')

      string[i] = '6';

  }

}

void soundex(char string[])
{
  removechars(string);  
  trim(string);
  encode(string);
}    
