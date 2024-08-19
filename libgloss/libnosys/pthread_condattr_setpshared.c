#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_condattr_setpshared (pthread_condattr_t *__attr, int __pshared) {
  return -1;
}
stub_warning(pthread_condattr_setpshared);
