#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_condattr_destroy (pthread_condattr_t *__attr) {
  return -1;
}
stub_warning(pthread_condattr_destroy);
