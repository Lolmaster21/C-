#include <stdio.h>

int main() {
	float input1;
	float input2;
	printf("give me two numbers: \n");
	scanf_s ("%f", & input1);
	scanf_s ("%f", &input2);
	float nums = input1 / input2;
	printf("The result was %f", nums);

	if (input1 < input2) {
		printf("In order: %f, %f \n", input1, input2);

	}
	else {
		printf(" In order: %f, %f \n" ,input2 , input1 );
	}
	int nums1 = input1;

	if (nums1 % 2 == 1)
		printf("odd\n");

}
