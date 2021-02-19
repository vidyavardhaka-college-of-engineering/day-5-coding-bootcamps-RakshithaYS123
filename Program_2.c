//You will be given a string 'str'. Your task is to reverse 'str' and print it.
//Input: vvce & Output: ecvv

#include<stdio.h>

int main()
{
	char str1[10], str2[10];
	scanf("%s", str1);

	//Write your code here

  int beg, end, count=0; 

  while(str1[count] !='\0'){
    count++;
  }
  end = count - 1;

  for(int beg=0; beg<count; beg++){
    str2[beg] = str1[end];
    end--;
  }

  str2[beg] == '\0';

  printf(" %s\n", str2);


  

	return 0;
}
