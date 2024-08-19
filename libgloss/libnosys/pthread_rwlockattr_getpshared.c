#include "config.h"
#include "warning.h"

int	pthread_rwlockattr_getpshared (const void *__attr,
				       int *__pshared) {
  return -1;
}
stub_warning(pthread_rwlockattr_getpshared);
