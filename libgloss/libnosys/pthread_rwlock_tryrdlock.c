#include "config.h"
#include "warning.h"

int	pthread_rwlock_tryrdlock (void *__rwlock) {
  return -1;
}
stub_warning(pthread_rwlock_tryrdlock);
