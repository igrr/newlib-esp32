#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_mutexattr_destroy (pthread_mutexattr_t *__attr) {
  return -1;
}
stub_warning(pthread_mutexattr_destroy);
