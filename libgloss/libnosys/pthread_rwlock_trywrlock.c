#include "config.h"
#include "warning.h"

int	pthread_rwlock_trywrlock (void *__rwlock) {
  return -1;
}
stub_warning(pthread_rwlock_trywrlock);
