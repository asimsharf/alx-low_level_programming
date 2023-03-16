#include "stdlib.h"
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: value 1
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b){

  unsigned int *res;

  res = malloc(b);

  if(res == NULL){
    exit(98);
  }
  
  return (res);

}
