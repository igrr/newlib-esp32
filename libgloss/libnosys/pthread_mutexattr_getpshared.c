#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_mutexattr_getpshared (const pthread_mutexattr_t *__attr,
				      int  *__pshared) {
  return -1;
}
stub_warning(pthread_mutexattr_getpshared);
