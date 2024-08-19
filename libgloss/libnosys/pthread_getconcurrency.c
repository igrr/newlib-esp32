#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_getconcurrency (void) {
  return -1;
}
stub_warning(pthread_getconcurrency);
