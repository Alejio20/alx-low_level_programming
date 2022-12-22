#include "main.h"

/**
 * reverses the content of an array of integers
 * @a: int array pointer
 * @n: int number of element to reverse
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	*/
	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
