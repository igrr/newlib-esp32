#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_setname_np(pthread_t __pthread, const char *name) {
  return -1;
}
stub_warning(pthread_setname_np);
