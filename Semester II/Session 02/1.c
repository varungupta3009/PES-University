/* 1.c [L2P2F1] */

#include<stdio.h>

int main(void)

{
	/* Program to input details of an Employee */
	char SSN[100], Name[100], Gen, AN[12];
	int Age, Sal;
	float PR;
	printf("Input your SSN, Age, Name, Gender, Salary, Aadhaar and Performance Rating:\n\n");
	scanf("%s\n%d\n%s\n%c\n%d\n%s\n%f", SSN, &Age, Name, &Gen, &Sal, AN, &PR);
	printf("\nSSN: %s\nAge: %d\nName: %s\nGender: %c\nSalary: %d\nAadhaar Number: %s\nPerformance Rating (PR): %f\n\n", SSN, Age, Name, Gen, Sal, AN, PR);
	return 0.0;
}

/***** END OF FILE *****/
