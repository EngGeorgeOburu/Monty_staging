#ifndef HEADER_MONTY
#define HEADER_MONTY

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

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

/* read input file */
int get_inputs(FILE *stream, stack_t **stack);

/* util functions */
int gettoksnum(char *line, int size, char *delim);
char **_strtok(char *line, int size, char *delim);
void free_toks(char **tokens);
char *_realloc(char *ptr, int old_size, int newsize);

/* parse and exec cmds */
int execcmd(char *filename, stack_t **stack);
int runcmd(char **cmd, unsigned int line_number, stack_t **stack);

/* str helpers */
int _strlen(char *str);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);

/* stack functions */
void push(stack_t **stack,char **cmd, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void print_stack(stack_t **stack, unsigned int line_number);
void print_head(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);

/* monty functions */
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);

/* print error msg */
int printerr(const char *msg, int status);
void exiterr(stack_t **stack, unsigned int line_number, const char *msg);

/* linked list functions */
size_t print_list(stack_t *h);
stack_t *add_node_head(stack_t **head, int n);
int delete_node_head(stack_t **head);


#endif