#include "config.h"
#include "warning.h"

int	pthread_barrier_wait (void *__barrier) {
  return -1;
}
stub_warning(pthread_barrier_wait);
