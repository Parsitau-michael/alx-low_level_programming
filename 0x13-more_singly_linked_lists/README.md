/**
0x13. C - More singly linked lists project

size_t print_listint(const listint_t *h);
	a function that prints all the elements of a listint_t list.
size_t listint_len(const listint_t *h);
	a function that returns the number of elements in a linked listint_t list.
listint_t *add_nodeint(listint_t **head, const int n);
	a function that adds a new node at the beginning of a listint_t list.
listint_t *add_nodeint_end(listint_t **head, const int n);
	a function that adds a new node at the end of a listint_t list.
void free_listint(listint_t *head);
	a function that frees a listint_t list.
void free_listint2(listint_t **head);
	a function that frees a listint_t list.
int pop_listint(listint_t **head);
	 a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
	a function that returns the nth node of a listint_t linked list.
int sum_listint(listint_t *head);
	a function that returns the sum of all the data (n) of a listint_t linked list.
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
	a function that inserts a new node at a given position.
int delete_nodeint_at_index(listint_t **head, unsigned int index);
	a function that deletes the node at index index of a listint_t linked list.
listint_t *reverse_listint(listint_t **head);
	a function that reverses a listint_t linked list.
size_t print_listint_safe(const listint_t *head);
	a function that prints a listint_t linked list.
size_t free_listint_safe(listint_t **h);
	a function that frees a listint_t list.
listint_t *find_listint_loop(listint_t *head);
	a function that finds the loop in a linked list.

**/
