#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
				       int __protocol) {
  return -1;
}
stub_warning(pthread_mutexattr_setprotocol);
