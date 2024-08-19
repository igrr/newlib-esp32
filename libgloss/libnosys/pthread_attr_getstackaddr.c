#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_attr_getstackaddr (const pthread_attr_t *__attr,
				   void **__stackaddr) {
  return -1;
}
stub_warning(pthread_attr_getstackaddr);
