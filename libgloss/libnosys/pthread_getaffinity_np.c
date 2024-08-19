#include "config.h"
#include "warning.h"
#include <stddef.h>

int	pthread_getaffinity_np (const int __id, size_t __cpusetsize,
				void *__cpuset) {
  return -1;
}
stub_warning(pthread_getaffinity_np);
