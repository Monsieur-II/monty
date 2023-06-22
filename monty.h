#ifndef MONTY_H
#define MONTY_H

/*Standard library*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

/*Macros*/
#define SIZE 4

/*Structs*/
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct monty_s - extern struct
 * @file: file stream
 * @buffer: buffer
 * @args: tokenized string
 * @mode: mode of linked list
 *
 * Description: extern struct
 */
typedef struct monty_s
{
	FILE *file;
	char *buffer;
	char *args[SIZE];
	int mode;
} monty_t;

extern monty_t tool;

/*Functions*/
void tokenize(char *str, char **args, int max_args, char *delimiters);
stack_t *add_dnode(stack_t **head, const int n);
stack_t *add_dnode_end(stack_t **head, const int n);
void execute_cmd(stack_t **stack, unsigned int line_number);
void s_push(stack_t **stack, unsigned int line_number);
void free_dlist(stack_t *head);
void s_pall(stack_t **stack, unsigned int line_number);
void s_pint(stack_t **stack, unsigned int line_number);
void s_pop(stack_t **stack, unsigned int line_number);
void s_swap(stack_t **stack, unsigned int line_number);
void s_add(stack_t **stack, unsigned int line_number);
void s_nop(stack_t **stack, unsigned int line_number);
void s_sub(stack_t **stack, unsigned int line_number);
void s_div(stack_t **stack, unsigned int line_number);
void s_mul(stack_t **stack, unsigned int line_number);
void s_mod(stack_t **stack, unsigned int line_number);
void s_pchar(stack_t **stack, unsigned int line_number);
void s_pstr(stack_t **stack, unsigned int line_number);
void s_rotl(stack_t **stack, unsigned int line_number);
void s_rotr(stack_t **stack, unsigned int line_number);
void s_stack(stack_t **stack, unsigned int line_number);
void s_queue(stack_t **stack, unsigned int line_number);

#endif
