//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>


int main()
{
	char str[10];
	scanf("%s", str);
  int i, len, count=0;

  len = strlen(str);

  for(i=0; i<len; i++){
     
     if(str[i] != str[len-i-1]){
       count = 1;
       break;
     }
  }

  if(count==0){
    printf("The String is Palindrome\n");
  }
  else{
    printf("String is not Palindrome\n");
  }

	//Write your code here
	
	return 0;
}
