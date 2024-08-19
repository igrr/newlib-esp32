#include "config.h"
#include "warning.h"
#include <pthread.h>

int	pthread_attr_setaffinity_np (pthread_attr_t *__attr,
				     size_t __cpusetsize,
				     const void *__cpuset) {
  return -1;
}
stub_warning(pthread_attr_setaffinity_np);
