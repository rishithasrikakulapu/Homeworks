#include<stdio.h>

//create a structure with a char pointer to 
//country and an int variable code
struct country_code{
   char *country;
   int code;
};

//creating an array with 25 country_code structures 
const struct country_code array[25] =
	{{"Argentina",	54},
	{"Afghanistan",	93},
	{"Australia",	61},
	{"Bangladesh",  880},
	{"Bahrain",	973},
	{"Belgium",	32},
   	{"Brazil",	55}, 
	{"Chad",	235},
	{"Chile",	56},
   	{"China",	86},
   	{"Ecuador",     593},
	{"France",      33},
   	{"Germany",     49},
 	{"India",       91},
   	{"Iceland",     354},
   	{"Italy",       39},
	{"Japan",       81},
  	{"Mexico",      52}, 
	{"Panama",      507},
   	{"Poland",      48}, 
	{"Russia",      7},
 	{"Rwanda",      250}, 
   	{"Spain",       34}, 
   	{"Thailand",    66}, 
   	{"United States",1}}; 

// a function of return type int to 
// find the country of the entered code 
int findCode(int inpCode){
     int count;
     for(count = 0;count < 25;count++)
//if the entered code equals the code of country in the structure, 
//then the print statement will output
        if(inpCode == array[count].code){
             printf("%s is the country with code %d\n",array[count].country,
	     inpCode);
	return 0;
	}
	printf("This code doesn't belong to any country\n"); 
	return 0;
}

int main(){
   int inpCode;
//ask to enter the code
   printf("Enter international dialing code: ");
//take userinput of code
   scanf("%d", &inpCode);
//calling the function to print country of code
   findCode(inpCode);
return 0; 
}
