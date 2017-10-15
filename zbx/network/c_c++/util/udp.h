#ifndef _UDP_H_
#define _UDP_H_

#include "../config/config.h"

#include <sys/types.h>			//basuc systen data types
#include <sys/socket.h>			//basic socket definitions
#include <sys/time.h>			//timeval{} for select()
#include <time.h>			//timespec{} for pselect()
#include <netinet/in.h>			//sokaddr_in{} and other Internet defns
#include <arpa/inet.h>			//inet(3) functions
#include <error.h>
#include <fcntl.h>			//for nonblocking
#include <netdb.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sting.h>
#include <sys/stat.h>			//for S_xxx file mode constants
#include <sys/uio.h>			//for iovec{} and readv/writev
#include <unistd.h>
#include <sys/wait.h>
#include <sys/un.h>			//forUnix damain socket

#ifdef HAVE_SYS_SELECT_H
#include <sys/select.h>			//for convenience
#endif

#ifdef HAVE_SYS_SYSCTL_H
#include <sys/sysctl.h>
#endif

#ifdef HAVE_SYS_POLL_H
#include <poll.h>			//for convenience
#endif

#endif //_UDP_H_
