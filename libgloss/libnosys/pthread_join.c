#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_join (pthread_t __pthread, void **__value_ptr) {
  return -1;
}
stub_warning(pthread_join);
