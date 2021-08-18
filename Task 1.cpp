#include <stdio.h>   // preprocessing by calling (stdio.h) library (stdio input output (hidder))
#include<stdlib.h>  // standard library
int main()         // main function is called
 {
    // declaration and initialization of variable (first_number) of type integer
	int first_number = 8;  
	
	// declaration and initialization of variable (second_number) of type float      
	float second_number = 3.5;  
	  
	// declaration and initialization of variable (character) of type character
	char character = 'A';  

	//declaration and initialization of list (word) of type character    
	char word[20] = "Hello, C Language"; 
	
	//writing the data format (%d) to print the integer number by using function printf(print formatting) not print only as in python
	printf(" %d is an integer number \n", first_number); 
	
	//writing the data format (%f) to print the float number by using function printf(print formatting) not print only as in python
	printf(" %1.1f is a number containing decimal point \n", second_number);
	
	//writing the data format (%c) to print the character by using function printf(print formatting) not print only as in python
	printf(" %c is a letter \n", character);
	
	//writing the data format (%s) to print the string by using function printf(print formatting) not print only as in python
	printf(" %s", word);
	
	system("pause"); // To pause the program on the screen
	return 0; // return (0) to make sure that the program executes ccorrectly without any errors
}


