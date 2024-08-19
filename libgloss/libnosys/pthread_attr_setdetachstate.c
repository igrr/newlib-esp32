#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_attr_setdetachstate (pthread_attr_t *__attr, int __detachstate) {
  return -1;
}
stub_warning(pthread_attr_setdetachstate);
