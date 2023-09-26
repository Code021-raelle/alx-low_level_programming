#include "lists.h"

/**
 * pop_listint - deletes head of list and returns head's data
 * @head: head of linked list
 *
 * Return: int value of head
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	*head = (*head)->next;

	int data = temp->n;
	free(temp);

	return (data);
}

