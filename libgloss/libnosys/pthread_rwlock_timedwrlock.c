#include "config.h"
#include "warning.h"

int	pthread_rwlock_timedwrlock (void *__rwlock,
				    const void *__abstime) {
  return -1;
}
stub_warning(pthread_rwlock_timedwrlock);
