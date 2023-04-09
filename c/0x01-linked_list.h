#ifndef LL_H
#define LL_H

typedef struct node
{
    int data;
    struct node * next;
} Node;


/* Append - add a node at the end of the list
 * value: the value to append
 * Return - void
 */
void Append(Node * head, int value);

/* Append - Add a node at the index position
 * index - start from 0.
 * value: the value you want to append in the list.
 * if index > number of elements of the list,
 *   the value inserted to the end of the list.
 */
void Insert(Node * head, int index, int value);

/* get the data of the node at the index position.
 * index: the position of the node.
 * fail:  the value you want in Return, in case
 * of failure.
 * Return: the value at the index, otherwise @fail
 */
int  get(Node * head, int index, int fail);

/* Delete - Delete a node at index position
 * index: the position of the desired node.
 * Return: Void
 */
void Delete(Node * head, int index);

/* DeleteNode - delete a node from the list, using the value
 * value: the value you want to delete from the list.
 * Return: Void
 */
void DeleteValue(Node * head, int value);

/* Print all the list */
void Print(Node * head);

/* Free all the alocated memory from the heap*/
void Free(Node * head);

#endif
