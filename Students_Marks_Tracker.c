#include <stdio.h>
int main(){

  int marks;
  int pass_count = 0, fail_count = 0, fail_in_row = 0;
  
  while(1)
  {
  	printf("Enter Marks: ");
  	scanf("%d", &marks);
  	if(marks == -1)
  	{
  		printf("\nProgram Ended");
  		break;
	}
    if(marks >= 50)
    {
      pass_count += 1;
      fail_in_row = 0;
	}
	else
	{
	  fail_count += 1;
	  fail_in_row += 1;
	}
	if(fail_in_row == 3)
	{ 
	printf("\n3 fail in a row");
		break;
	}
  }
  printf("\n\nTotal passed: %d", pass_count);
  printf("\nTotal failed: %d", fail_count);
}
