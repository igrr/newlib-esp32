#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_attr_destroy (pthread_attr_t *__attr) {
  return -1;
}
stub_warning(pthread_attr_destroy);
