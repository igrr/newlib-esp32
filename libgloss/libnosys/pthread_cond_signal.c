#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_cond_signal (pthread_cond_t *__cond) {
  return -1;
}
stub_warning(pthread_cond_signal);
