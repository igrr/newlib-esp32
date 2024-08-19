#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_cancel (pthread_t __pthread) {
  return -1;
}
stub_warning(pthread_cancel);
