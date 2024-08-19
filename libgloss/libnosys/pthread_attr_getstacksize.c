#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_attr_getstacksize (const pthread_attr_t *__attr,
				   size_t *__stacksize) {
  return -1;
}
stub_warning(pthread_attr_getstacksize);
