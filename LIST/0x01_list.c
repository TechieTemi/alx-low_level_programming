#include "lists.h"

/**
 * insertion_begin - A function that insert node at the beginning
 * @head: Head which is of type struct is a double pointer so it can have effect on the pointer it self.
 * @data: It is of type integer
 */
void insertion_begin(node **head, int data)
{
	/* Declare your new variable and malloc it*/
	node *new_node = (node *)malloc(sizeof(node));
	/*assign data to the malloc variable*/
	new_node->data = data;
	/* let the new_node point to tge next node*/
	new_node->next = (*head);
	(*head) = new_node;
}


/**
 * insertion_end - A function that insert node at tge end of a list
 * @head: A double pointer which is of type struct node
 * @data: An integer which specifies the data the user inputted during the function call
 */

void insertion_end(node **head, int data)
{
	/* Step 1: create an instance for your new node using struct node */
	node *end_node = (node *)malloc(sizeof(node));
		/*step 2: assign data to our node */
		end_node->data = data;
	end_node->next = NULL;
	/* we have to declare a variable which we are going to assign head to*/
	node *lastnode = (*head);
	/* a condition to check if the list empty*/
	if (*head == NULL)
	{
		*head = end_node;
		return;
	}
	/* if the list is not empty, we are going to traverse through the list using while loop to make sure that lastnode->nextvis not equal to Null and it is equal to null, the loop should stop becausw tge condition is false */
	while(lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	/* Now that lastnode->next is now at tge null position, we are going to shift his pointer from pointing to null but rather point to the new node while the new node turns to the last position*/
	lastnode->next = end_node;
}


/**
 * insertion_position - A function that insert at any specified position in our list
 * @head: A double pointer
 * @data: An integer which represented our data 
 * @position: The position the user will specified
 */

void insertion_position(node **head, int data, int position)
{
	/* Create an instance for your node*/
	node *pos_node = (node *)malloc(sizeof(node));
		/* declare another variable to point to head */
		node *current = *head;
	pos_node->data = data;
	/* a condition to check if the list is empty*/
	if (*head == NULL)
	{
		pos_node->next = *head;
		*head = pos_node;
		return;
	}
	/* traverse to check if xurrentvnot equal null and if new_pos is lesserthan pos */
	int new_pos = 1;
	while(current != NULL && new_pos < position)
	{
		current = current->next;new_pos++;
	}
	/* check if the position specified is out of range */
	if (current == NULL)
	{
		printf("Out of rangr");
		// set tge position of current to head
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
	}
	pos_node->next = current->next;
	current->next = pos_node;
}

/**
 * print_node - A function that print node
 * @head: A head to traverse the list
 */

void print_node(node *head)
{
	node *temp = head;
	while(temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

