#include<stdio.h>
#include<string.h>

//declaring functions to check password is safe or not
void tenCharsOrNot(char *ptr);
void newCriteria(char *ptr);

//main function
int main(){

//declaring,asking and taking in user input for password
	char pswd;
	printf("Please enter password: ");
	scanf("%s",&pswd);

//calling functions to check password
	printf("Program part 1: \n");
	tenCharsOrNot(&pswd);
	printf("Program part 2:\n ");
	newCriteria(&pswd);

return 0;
}

//defining function to check if
//password is 10 chars or not
void tenCharsOrNot(char *ptr){
	
	int length = strlen(ptr),ded = 0;

//checking if length of pswd is 10 or not
	if(length!=10)
//calculating and printing out deduction
	ded = 5*(10-length);
	printf("Deduction is %d\n",ded);

//if deduction greater than 30
//password is printed as unsafe else safe
	if(ded>30)
	printf("The password is unsafe!Please reset.\n");
	else
	printf("The password is safe.\n");

}

//defining function to check if
//password is safe or not in new critera
void newCriteria(char *ptr){

	int c1=0,c2=0,c3=0,c4=0;

//till the end of the password
	while(*ptr!='\0'){

//if missing lowercase char
	if(*ptr >='a'&& *ptr <='z')
	c1++;

//if missing uppercase char
	if(*ptr >='A'&& *ptr <='Z')
	c2++;

//if missing number
	if(*ptr >='0'&& *ptr <='9')
	c3++;

//if more than 2 consecutive chars
	if(*ptr + 1 == *(ptr+1) && *(ptr+1) + 1 == *(ptr+2))
	c4++;

//moving to next char
	ptr++;
	}

int deduction = 0;
//if missing lower case char	
	if(c1==0)
	deduction += 20;
	
//if missing uppercase char
	if(c2==0)
	deduction += 20;

//if missing number
	if(c3==0)
	deduction += 20;

//if more than 2 consecutive chars
	if(c4>0)
	deduction += 20;
	
// printing out deduction
	printf("Deduction is %d\n",deduction);
        
//if deduction greater than 30
//password is printed as unsafe else safe
	if(deduction>30)
        	printf("The password is unsafe!Please reset.\n");
        else
        	printf("The password is safe.\n");

}
