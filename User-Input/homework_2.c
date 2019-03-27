//Homework #2 - CMPR.X400.(810) C Programming
// Created by veemac on March 26, 2019

#include <stdio.h>

// Problem #1: Use only 1 print statement to show the output of a circle's area
int radius = 2;
double area;
const double pi = 3.142;
area = pi * radius * radius; printf("The area is: %5.2f\n", area);


// Problem #2: Values from the user
printf("\n");
printf("Enter the radius: "); scanf("%d", &radius);
printf("Enter the value of pi: "); scanf("%d", &userPi);
area= userPi * radius * radius; printf("The area is: ");
printf("%5.2f\n", area);

// Problem #3: User information
char firstName[20];
char lastName[20];
char city[20];
int zipCode;

printf("\n"); printf("C Programming is a fun course.");
printf("First Name\tLast Name\tCity\n");
printf("-----------\t---------\t----\n");
printf("Bill\tClinton\tHarlem\n");
printf("\n");

printf("How do you print double quotes?\n");
printf("Who said\"Test Scores Can Be Used ....\"\n");

printf("Please enter your first name: "); scanf("%s", &firstName);
printf("Please enter your last name: "); scanf("%s", &lastName);
printf("Please enter your city: "); scanf("%s", &city);
printf("Please enter your zip code: "); scanf("%d", &zipCode);
printf("\nFirst Name\tLast Name\tCity\n");
printf("-----------\t---------\t----\n");
printf(&firstName,"	   ", &lastName,"    ", &city,"    "&zipCode);

int userSelection;
printf("1. Addition");
printf("2. Subtraction");
printf("3. Multiplication");
printf("4. Division");
printf("5. Exit");
printf("What would you like to do? "); scanf("%d", &userSelection);

if(userSelection = 1)
{
	printf("You selected Addition");
}
else if (userSelection = 2)
{
	printf("You selected Subtraction");		
}
else if (userSelection = 3)
{
	printf("You selected Multiplication");
}
else if (userSelection = 4)
{
	printf("You selected Division");
}
else if (userSelection = 5)
{
	printf("You selected Exit");
}
else
{
	printf("Please select a number 1 - 5"):
}
printf("Thank you for using my program");





		
