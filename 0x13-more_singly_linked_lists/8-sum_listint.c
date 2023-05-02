#include "lists.h"

/**
 * sum_listint - this function returns sum of all data
 * @head: pointer to first node
 *
 * Description:this function return sum of all data
 *
 * Return: Description of the returned value sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
