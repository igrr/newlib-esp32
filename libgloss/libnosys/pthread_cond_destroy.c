#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_cond_destroy (pthread_cond_t *__mutex) {
  return -1;
}
stub_warning(pthread_cond_destroy);
