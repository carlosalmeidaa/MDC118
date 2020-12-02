#include <stdio.h>
#include <string.h>
 
int main()
{
  	char string[80], revstring[80];
  	int i, j, len;
 
  	printf("\n Insira os caracteres:  ");
  	gets(string);
  	
  	j = 0;
  	len = strlen(string);
 
  	for (i = len - 1; i >= 0; i--)
  	{
  		revstring[j++] = string[i];
  	}
  	revstring[i] = '\0';
 
  	printf("\n Ordem invertida = %s", revstring);
  	
  	return 0;
}