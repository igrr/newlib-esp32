#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_setconcurrency (int new_level) {
  return -1;
}
stub_warning(pthread_setconcurrency);
