/*
 * Stub version of _fcntl.
 */

#include "config.h"
#include <_ansi.h>
#include <_syslist.h>
#include <errno.h>
#undef errno
extern int errno;
#include "warning.h"

int
_fcntl (int fd, int cmd, ...)
{
  errno = ENOSYS;
  return -1;
}

stub_warning(_fcntl)
