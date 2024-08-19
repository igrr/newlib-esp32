#include "config.h"
#include "warning.h"

int	pthread_spin_lock (void *__spinlock) {
  return -1;
}
stub_warning(pthread_spin_lock);
