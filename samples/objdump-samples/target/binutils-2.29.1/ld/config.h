/* config.h.  Generated from config.in by configure.  */
/* config.in.  Generated from configure.ac by autoheader.  */

/* Check that config.h is #included before system headers
   (this works only for glibc, but that should be enough).  */
#if defined(__GLIBC__) && !defined(__FreeBSD_kernel__) && !defined(__CONFIG_H__)
#  error config.h must be #included before system headers
#endif
#define __CONFIG_H__ 1

/* Define if you want compressed debug sections by default. */
/* #undef DEFAULT_FLAG_COMPRESS_DEBUG */

/* Define to 1 if you want to enable -z relro in ELF linker by default. */
#define DEFAULT_LD_Z_RELRO 1

/* Define to 1 if you want to set DT_RUNPATH instead of DT_RPATH by default.
   */
#define DEFAULT_NEW_DTAGS 0

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Additional extension a shared object might have. */
/* #undef EXTRA_SHLIB_EXTENSION */

/* Define to choose default GOT handling scheme */
#define GOT_HANDLING_DEFAULT GOT_HANDLING_TARGET_DEFAULT

/* Define to 1 if you have the `close' function. */
#define HAVE_CLOSE 1

/* Define to 1 if you have the declaration of `environ', and to 0 if you
   don't. */
#define HAVE_DECL_ENVIRON 1

/* Define to 1 if you have the declaration of `free', and to 0 if you don't.
   */
#define HAVE_DECL_FREE 1

/* Define to 1 if you have the declaration of `getenv', and to 0 if you don't.
   */
#define HAVE_DECL_GETENV 1

/* Is the prototype for getopt in <unistd.h> in the expected format? */
#define HAVE_DECL_GETOPT 1

/* Define to 1 if you have the declaration of `sbrk', and to 0 if you don't.
   */
#define HAVE_DECL_SBRK 1

/* Define to 1 if you have the declaration of `strstr', and to 0 if you don't.
   */
#define HAVE_DECL_STRSTR 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <elf-hints.h> header file. */
/* #undef HAVE_ELF_HINTS_H */

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `glob' function. */
#define HAVE_GLOB 1

/* Define .init_array/.fini_array sections are available and working. */
#define HAVE_INITFINI_ARRAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the `lseek' function. */
#define HAVE_LSEEK 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the `open' function. */
#define HAVE_OPEN 1

/* Define to 1 if you have the `realpath' function. */
#define HAVE_REALPATH 1

/* Define to 1 if you have the `sbrk' function. */
#define HAVE_SBRK 1

/* Define to 1 if you have the `setlocale' function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* Define to 1 if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "ld"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "ld"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "ld 2.29.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "ld"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.29.1"

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define if you can safely include both <string.h> and <strings.h>. */
#define STRING_WITH_STRINGS 1

/* Use b modifier when opening binary files? */
/* #undef USE_BINARY_FOPEN */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "2.29.1"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
/* #undef YYTEXT_POINTER */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */
