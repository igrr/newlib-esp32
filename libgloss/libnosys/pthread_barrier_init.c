#include "config.h"
#include "warning.h"

int	pthread_barrier_init (void *__barrier,
			      const void *__attr,
			      unsigned __count) {
  return -1;
}
stub_warning(pthread_barrier_init);
