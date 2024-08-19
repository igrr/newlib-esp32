#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_mutex_trylock (pthread_mutex_t *__mutex) {
  return -1;
}
stub_warning(pthread_mutex_trylock);
