#include<stdio.h>
#include<string.h>

//declaring the function that swaps 2 lines
void swapLines(char p1[],char p2[]);

//main function 
int main(){
	//creating 2 strings 
	char line1[100],line2[100];
	//print function asking to type in lines
	printf("Please enter line 1: ");
	//taking user-input of lines
	scanf("%s",&line1);
	printf("Please enter line 2: ");
	scanf("%s",&line2);

	//calling the function that swaps 2 lines
	swapLines(line1, line2);

return 0;

}

//swapLines function definition to swap the 2 entered lines
//that takes in 2 char arrays as arguments and with return type void 
void swapLines(char p1[], char p2[]){
	
	//assigning addresses of char arrays to char pointers	
	char *l1 = &p1[0], *l2 = &p2[0];

	//checking if entered lines are of same length
	if(strlen(l1)==strlen(l2))
	
	//till the end of two lines
	while(*l1!='\0' || *l2!='\0'){
	      
	//if the char is letter in line1, swap with number from line 2
	//if the char is number in line1, swap with letter from line 2
	if(((*l1>='a'&&*l1<='z' || *l1>='A' && *l1<='Z')&& (*l2>='0'&&*l2<='9')) || 
	      ((*l1>='0'&&*l1<='9') && (*l2>='a'&& *l2<='z' || *l2>='A' && *l2<='Z'))){
   		    *l1 = *l1 - *l2;
   		    *l2 = *l1 + *l2;
   	            *l1 = *l2 - *l1;

		}
		
		//if both the chars in line 1 and 2 are both numbers or 
		//letters or something else fill it with blank space char
		else{
		    *l1 = ' ';
		    *l2 = ' ';
		}
		
		//increment each char in line1 and line2
		*l1++;
		*l2++;	
		
		}	

	//printing out the swapped lines	
	printf("The swapped line 1 is %s\n",p1);
	printf("The swapped line 2 is %s\n",p2);
	
}

