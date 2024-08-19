#include "config.h"
#include "warning.h"

int	pthread_barrierattr_setpshared (void *__attr,
					int __pshared) {
  return -1;
}
stub_warning(pthread_barrierattr_setpshared);
