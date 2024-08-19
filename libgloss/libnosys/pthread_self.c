#include "config.h"
#include "warning.h"
#include <pthread.h>

pthread_t	pthread_self (void) {
  return -1;
}
stub_warning(pthread_self);
