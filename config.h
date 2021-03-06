/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */
/* acconfig.h - used by autoheader to make config.h.in
 * Copyright (C) 1998, 1999, 2000, 2001 Free Software Foundation, Inc.
 *
 * This file is part of GNUPG.
 *
 * GNUPG is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * GNUPG is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */
#ifndef G10_CONFIG_H
#define G10_CONFIG_H

/* need this, because some autoconf tests rely on this (e.g. stpcpy)
 * and it should be used for new programs
 */
#define _GNU_SOURCE  1


/* Define if using alloca.c.  */
/* #undef C_ALLOCA */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define to one of _getb67, GETB67, getb67 for Cray-2 and Cray-YMP systems.
   This function is required for alloca.c support on those systems.  */
/* #undef CRAY_STACKSEG_END */

/* Define if you have alloca, as a function or macro.  */
/* #undef HAVE_ALLOCA */

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
/* #undef HAVE_ALLOCA_H */

/* Define if you don't have vprintf but do have _doprnt.  */
/* #undef HAVE_DOPRNT */

/* Define if you have a working `mmap' system call.  */
/* #undef HAVE_MMAP */

/* Define if you have the vprintf function.  */
#define HAVE_VPRINTF 1

/* Define as __inline if that's what the C compiler calls it.  */
/* #undef inline */

/* Define to `long' if <sys/types.h> doesn't define.  */
/* #undef off_t */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
 STACK_DIRECTION > 0 => grows toward higher addresses
 STACK_DIRECTION < 0 => grows toward lower addresses
 STACK_DIRECTION = 0 => direction of growth unknown
 */
/* #undef STACK_DIRECTION */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if `sys_siglist' is declared by <signal.h>.  */
/* #undef SYS_SIGLIST_DECLARED */

/* #undef M_DEBUG */
/* #undef M_GUARD */
#define PRINTABLE_OS_NAME "OS/2"
/* #undef IS_DEVELOPMENT_VERSION */

/* #undef HAVE_MLOCK */

/* #undef BIG_ENDIAN_HOST */
#define LITTLE_ENDIAN_HOST 1

/* #undef HAVE_BYTE_TYPEDEF */
/* #undef HAVE_USHORT_TYPEDEF */
/* #undef HAVE_ULONG_TYPEDEF */
/* #undef HAVE_U16_TYPEDEF */
/* #undef HAVE_U32_TYPEDEF */

/* #undef HAVE_BROKEN_MLOCK */

/* defined if we have a /dev/random and /dev/urandom */
/* #undef HAVE_DEV_RANDOM */
/* and the real names of the random devices */
#define NAME_OF_DEV_RANDOM "/dev/random"
#define NAME_OF_DEV_URANDOM "/dev/urandom"
/* Linux has an ioctl */
/* #undef HAVE_DEV_RANDOM_IOCTL */

/* see cipher/rndegd.c */
#define EGD_SOCKET_NAME ""

/* #undef USE_DYNAMIC_LINKING */
/* #undef HAVE_DL_DLOPEN */
/* #undef HAVE_DL_SHL_LOAD */
/* #undef HAVE_DLD_DLD_LINK */

#define USE_SHM_COPROCESSING 1

#define IPC_HAVE_SHM_LOCK 1
/* #undef IPC_RMID_DEFERRED_RELEASE */

/* set this to limit filenames to the 8.3 format */
/* #undef USE_ONLY_8DOT3 */
/* defined if we must run on a stupid file system */
#define HAVE_DRIVE_LETTERS 1
/* defined if we run on some of the PCDOS like systems (DOS, Windoze. OS/2)
 * with special properties like no file modes */
#define HAVE_DOSISH_SYSTEM 1
/* because the Unix gettext has to much overhead on MingW32 systems
 * and these systems lack Posix functions, we use a simplified version
 * of gettext */
/* #undef USE_SIMPLE_GETTEXT */
/* At some point in the system we need to know that we use the Windows
 * random module. */
/* #undef USE_STATIC_RNDW32 */

/* #undef USE_CAPABILITIES */

/* Some systems have mkdir that takes a single argument. */
/* #undef MKDIR_TAKES_ONE_ARG */

/* The number of bytes in a unsigned int.  */
#define SIZEOF_UNSIGNED_INT 4

/* The number of bytes in a unsigned long.  */
#define SIZEOF_UNSIGNED_LONG 4

/* The number of bytes in a unsigned long long.  */
#define SIZEOF_UNSIGNED_LONG_LONG 8

/* The number of bytes in a unsigned short.  */
#define SIZEOF_UNSIGNED_SHORT 2

/* Define if you have the __argz_count function.  */
/* #undef HAVE___ARGZ_COUNT */

/* Define if you have the __argz_next function.  */
/* #undef HAVE___ARGZ_NEXT */

/* Define if you have the __argz_stringify function.  */
/* #undef HAVE___ARGZ_STRINGIFY */

/* Define if you have the atexit function.  */
#define HAVE_ATEXIT 1

/* Define if you have the clock_gettime function.  */
/* #undef HAVE_CLOCK_GETTIME */

/* Define if you have the dcgettext function.  */
/* #undef HAVE_DCGETTEXT */

/* Define if you have the dlopen function.  */
/* #undef HAVE_DLOPEN */

/* Define if you have the feof_unlocked function.  */
/* #undef HAVE_FEOF_UNLOCKED */

/* Define if you have the fgets_unlocked function.  */
/* #undef HAVE_FGETS_UNLOCKED */

/* Define if you have the fseeko function.  */
/* #undef HAVE_FSEEKO */

/* Define if you have the getcwd function.  */
/* #undef HAVE_GETCWD */

/* Define if you have the getegid function.  */
/* #undef HAVE_GETEGID */

/* Define if you have the geteuid function.  */
/* #undef HAVE_GETEUID */

/* Define if you have the getgid function.  */
/* #undef HAVE_GETGID */

/* Define if you have the gethrtime function.  */
/* #undef HAVE_GETHRTIME */

/* Define if you have the getpagesize function.  */
#define HAVE_GETPAGESIZE 1

/* Define if you have the getrusage function.  */
/* #undef HAVE_GETRUSAGE */

/* Define if you have the gettimeofday function.  */
#define HAVE_GETTIMEOFDAY 1

/* Define if you have the getuid function.  */
/* #undef HAVE_GETUID */

/* Define if you have the memicmp function.  */
#define HAVE_MEMICMP 1

/* Define if you have the memmove function.  */
#define HAVE_MEMMOVE 1

/* Define if you have the mempcpy function.  */
/* #undef HAVE_MEMPCPY */

/* Define if you have the mlock function.  */
/* #undef HAVE_MLOCK */

/* Define if you have the mmap function.  */
/* #undef HAVE_MMAP */

/* Define if you have the munmap function.  */
/* #undef HAVE_MUNMAP */

/* Define if you have the nl_langinfo function.  */
/* #undef HAVE_NL_LANGINFO */

/* Define if you have the putenv function.  */
/* #undef HAVE_PUTENV */

/* Define if you have the raise function.  */
#define HAVE_RAISE 1

/* Define if you have the rand function.  */
#define HAVE_RAND 1

/* Define if you have the setenv function.  */
/* #undef HAVE_SETENV */

/* Define if you have the setlocale function.  */
/* #undef HAVE_SETLOCALE */

/* Define if you have the setrlimit function.  */
/* #undef HAVE_SETRLIMIT */

/* Define if you have the sigaction function.  */
#define HAVE_SIGACTION 1

/* Define if you have the sigprocmask function.  */
#define HAVE_SIGPROCMASK 1

/* Define if you have the stpcpy function.  */
/* #undef HAVE_STPCPY */

/* Define if you have the strcasecmp function.  */
/* #undef HAVE_STRCASECMP */

/* Define if you have the strchr function.  */
/* #undef HAVE_STRCHR */

/* Define if you have the strdup function.  */
/* #undef HAVE_STRDUP */

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Define if you have the strftime function.  */
#define HAVE_STRFTIME 1

/* Define if you have the stricmp function.  */
#define HAVE_STRICMP 1

/* Define if you have the strlwr function.  */
#define HAVE_STRLWR 1

/* Define if you have the strtoul function.  */
#define HAVE_STRTOUL 1

/* Define if you have the tcgetattr function.  */
#define HAVE_TCGETATTR 1

/* Define if you have the tsearch function.  */
/* #undef HAVE_TSEARCH */

/* Define if you have the wait4 function.  */
/* #undef HAVE_WAIT4 */

/* Define if you have the waitpid function.  */
#define HAVE_WAITPID 1

/* Define if you have the <argz.h> header file.  */
/* #undef HAVE_ARGZ_H */

/* Define if you have the <direct.h> header file.  */
/* #undef HAVE_DIRECT_H */

/* Define if you have the <gdbm.h> header file.  */
/* #undef HAVE_GDBM_H */

/* Define if you have the <langinfo.h> header file.  */
/* #undef HAVE_LANGINFO_H */

/* Define if you have the <limits.h> header file.  */
/* #undef HAVE_LIMITS_H */

/* Define if you have the <linux/random.h> header file.  */
/* #undef HAVE_LINUX_RANDOM_H */

/* Define if you have the <locale.h> header file.  */
/* #undef HAVE_LOCALE_H */

/* Define if you have the <malloc.h> header file.  */
/* #undef HAVE_MALLOC_H */

/* Define if you have the <nl_types.h> header file.  */
/* #undef HAVE_NL_TYPES_H */

/* Define if you have the <stddef.h> header file.  */
/* #undef HAVE_STDDEF_H */

/* Define if you have the <stdlib.h> header file.  */
/* #undef HAVE_STDLIB_H */

/* Define if you have the <string.h> header file.  */
/* #undef HAVE_STRING_H */

/* Define if you have the <sys/capability.h> header file.  */
/* #undef HAVE_SYS_CAPABILITY_H */

/* Define if you have the <sys/ipc.h> header file.  */
#define HAVE_SYS_IPC_H 1

/* Define if you have the <sys/mman.h> header file.  */
#define HAVE_SYS_MMAN_H 1

/* Define if you have the <sys/param.h> header file.  */
/* #undef HAVE_SYS_PARAM_H */

/* Define if you have the <sys/shm.h> header file.  */
#define HAVE_SYS_SHM_H 1

/* Define if you have the <sys/stat.h> header file.  */
#define HAVE_SYS_STAT_H 1

/* Define if you have the <termio.h> header file.  */
#define HAVE_TERMIO_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <zlib.h> header file.  */
/* #undef HAVE_ZLIB_H */

/* Define if you have the dl library (-ldl).  */
/* #undef HAVE_LIBDL */

/* Define if you have the dld library (-ldld).  */
/* #undef HAVE_LIBDLD */

/* Define if you have the gdbm library (-lgdbm).  */
/* #undef HAVE_LIBGDBM */

/* Define if you have the nsl library (-lnsl).  */
/* #undef HAVE_LIBNSL */

/* Define if you have the rt library (-lrt).  */
/* #undef HAVE_LIBRT */

/* Name of package */
#define PACKAGE "gnupg"

/* Version number of package */
#define VERSION "1.0.6"

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to make ftello visible on some hosts (e.g. HP-UX 10.20). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to make ftello visible on some hosts (e.g. glibc 2.1.3). */
/* #undef _XOPEN_SOURCE */

/* define if compiled symbols have a leading underscore */
/* #undef WITH_SYMBOL_UNDERSCORE */

/* Define if you have the iconv() function. */
/* #undef HAVE_ICONV */

/* Define as const if the declaration of iconv() needs const. */
/* #undef ICONV_CONST */

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
/* #undef HAVE_LANGINFO_CODESET */

/* Define if your <locale.h> file defines LC_MESSAGES. */
/* #undef HAVE_LC_MESSAGES */

/* Define to 1 if translation of program messages to the user's native language
   is requested. */
/* #undef ENABLE_NLS */

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */


#include "g10defs.h"

#endif /*G10_CONFIG_H*/
