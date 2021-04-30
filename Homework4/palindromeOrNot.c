#include<stdio.h>
#include<string.h>

//declaring function that checks for palindrome 
void palindromeOrNot(char p[]);

//main function
int main(){
	
	//creating a string for storing message
	char msg[100];
	//asking and taking user input of message
	printf("Please enter message: ");
	gets(msg);
	
	//calling of function that checks for palindrome
	palindromeOrNot(msg);

return 0;

}

//calling of function that checks for palindrome
//taking in char array as argument with void return type
void palindromeOrNot(char p[]){

	int length = strlen(p), count=0;
//assigning addresses of first element of array to char pointer ptr
//and assigning addresses of last element of array to char pointer ptrNew

	char *ptr = &p[0], *ptrNew = &p[length-1];

//till the last character of input string
	while(*ptr!= '\0'){
       	    
//checking if palindrome or not by comparing 
//characters at positions in string
	 if(*ptr!=*ptrNew){
		count++;
	 }
	
	//incrementing ptr to get the next character and 
	//decrementing ptrNew to get the previous character  
	  *ptr++;
	  *ptrNew--;
	}
	
//printing if palindrome or not by comparing count
	if(count==0)
	printf("The message is a Palindrome.\n");
	else
	printf("The message is not a Palindrome.\n");
	
}


	
