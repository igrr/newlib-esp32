#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_attr_getscope (const pthread_attr_t *__attr,
			       int *__contentionscope) {
  return -1;
}
stub_warning(pthread_attr_getscope);
