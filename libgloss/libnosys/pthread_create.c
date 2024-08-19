#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_create (pthread_t *__pthread, const pthread_attr_t  *__attr,
			void *(*__start_routine)(void *), void *__arg) {
  return -1;
}
stub_warning(pthread_create);
