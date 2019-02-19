#include <stdio.h>
void selection_sort(int* arr, int* pwalk1, int* pwalk2, int* pwalk3) {
	int temp;

	for(pwalk1 = arr; pwalk1 < arr + 10; pwalk1++) {
		
		for(pwalk2 = pwalk1 + 1; pwalk2 < arr + 10; pwalk2++) {
			
			if(*pwalk1 < *pwalk2)
					pwalk3 = pwalk1;
					
			else pwalk3 = pwalk2;	
					
			temp = *pwalk1;
			*pwalk1 = *pwalk3;
			*pwalk3 = temp;
		}
	}






}
int main() {

	int arr[10];
	printf("Input 10 integer numbers : ");
	for(int i = 0; i < 10; i++) {
		
		scanf("%d", &arr[i]);
	}

	
	int *pwalk1, *pwalk2, *pwalk3;

	selection_sort(arr, pwalk1, pwalk2, pwalk3);

	printf("Sorted Result : ");
	for(int i = 0; i < 10; i++) {

		printf("%d ", arr[i]);

	}
	printf("\n");


}
