#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_attr_getinheritsched (const pthread_attr_t *__attr,
				      int *__inheritsched) {
  return -1;
}
stub_warning(pthread_attr_getinheritsched);
