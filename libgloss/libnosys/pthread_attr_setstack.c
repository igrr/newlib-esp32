#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_attr_setstack (pthread_attr_t *attr,
	void *__stackaddr, size_t __stacksize) {
  return -1;
}
stub_warning(pthread_attr_setstack);
