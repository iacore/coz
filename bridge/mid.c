# 1 "coz_wrapper.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 352 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "coz_wrapper.c" 2
# 1 "../include/coz.h" 1
# 12 "../include/coz.h"
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/dlfcn.h" 1 3
# 22 "/snap/zig/4060/lib/libc/include/generic-glibc/dlfcn.h" 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/features.h" 1 3
# 451 "/snap/zig/4060/lib/libc/include/generic-glibc/features.h" 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/stdc-predef.h" 1 3
# 452 "/snap/zig/4060/lib/libc/include/generic-glibc/features.h" 2 3
# 473 "/snap/zig/4060/lib/libc/include/generic-glibc/features.h" 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/sys/cdefs.h" 1 3
# 462 "/snap/zig/4060/lib/libc/include/generic-glibc/sys/cdefs.h" 3
# 1 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/bits/wordsize.h" 1 3
# 463 "/snap/zig/4060/lib/libc/include/generic-glibc/sys/cdefs.h" 2 3
# 1 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/bits/long-double.h" 1 3
# 464 "/snap/zig/4060/lib/libc/include/generic-glibc/sys/cdefs.h" 2 3
# 474 "/snap/zig/4060/lib/libc/include/generic-glibc/features.h" 2 3
# 497 "/snap/zig/4060/lib/libc/include/generic-glibc/features.h" 3
# 1 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/gnu/stubs.h" 1 3
# 10 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/gnu/stubs.h" 3
# 1 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3
# 11 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/gnu/stubs.h" 2 3
# 498 "/snap/zig/4060/lib/libc/include/generic-glibc/features.h" 2 3
# 23 "/snap/zig/4060/lib/libc/include/generic-glibc/dlfcn.h" 2 3

# 1 "/snap/zig/4060/lib/include/stddef.h" 1 3
# 46 "/snap/zig/4060/lib/include/stddef.h" 3
typedef long unsigned int size_t;
# 25 "/snap/zig/4060/lib/libc/include/generic-glibc/dlfcn.h" 2 3


# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/dlfcn.h" 1 3
# 60 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/dlfcn.h" 3
extern void _dl_mcount_wrapper_check (void *__selfpc) __attribute__ ((__nothrow__ ));
# 28 "/snap/zig/4060/lib/libc/include/generic-glibc/dlfcn.h" 2 3
# 44 "/snap/zig/4060/lib/libc/include/generic-glibc/dlfcn.h" 3
typedef long int Lmid_t;
# 56 "/snap/zig/4060/lib/libc/include/generic-glibc/dlfcn.h" 3
extern void *dlopen (const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      const char *__restrict __name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, const char *__file, int __mode) __attribute__ ((__nothrow__));



extern void *dlvsym (void *__restrict __handle,
       const char *__restrict __name,
       const char *__restrict __version)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) __attribute__ ((__nothrow__ ));





typedef struct
{
  const char *dli_fname;
  void *dli_fbase;
  const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (const void *__address, Dl_info *__info)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;





  __extension__ union
  {
    Dl_serpath dls_serpath[0];
    Dl_serpath __dls_serpath_pad[1];
  };



} Dl_serinfo;
# 13 "../include/coz.h" 2
# 1 "/snap/zig/4060/lib/include/stdint.h" 1 3
# 52 "/snap/zig/4060/lib/include/stdint.h" 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 1 3
# 26 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/libc-header-start.h" 1 3
# 27 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 2 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types.h" 1 3
# 27 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types.h" 3
# 1 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/bits/wordsize.h" 1 3
# 28 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types.h" 2 3
# 1 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/bits/timesize.h" 1 3
# 29 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types.h" 2 3


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types.h" 3
# 1 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/bits/typesizes.h" 1 3
# 142 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types.h" 2 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/time64.h" 1 3
# 143 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types.h" 2 3


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 28 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 2 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/wchar.h" 1 3
# 29 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 2 3
# 1 "/snap/zig/4060/lib/libc/include/x86_64-linux-gnu/bits/wordsize.h" 1 3
# 30 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 2 3




# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/stdint-intn.h" 1 3
# 24 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/stdint-intn.h" 3
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 35 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 2 3


# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/stdint-uintn.h" 1 3
# 24 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/stdint-uintn.h" 3
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 2 3





typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;


typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;





typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 71 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 3
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 3
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/snap/zig/4060/lib/libc/include/generic-glibc/stdint.h" 3
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 53 "/snap/zig/4060/lib/include/stdint.h" 2 3
# 14 "../include/coz.h" 2
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 1 3
# 26 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/libc-header-start.h" 1 3
# 27 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 2 3






# 1 "/snap/zig/4060/lib/include/stddef.h" 1 3
# 34 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 2 3
# 43 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 91 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 104 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 117 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)))
                                           ;





extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;




# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types/locale_t.h" 1 3
# 22 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types/locale_t.h" 3
# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types/__locale_t.h" 1 3
# 28 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types/__locale_t.h" 3
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/snap/zig/4060/lib/libc/include/generic-glibc/bits/types/locale_t.h" 2 3

typedef __locale_t locale_t;
# 157 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 2 3


extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)))
                                           ;





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 230 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 257 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 270 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 307 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 334 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
# 364 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)))

                                         ;



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
# 428 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;




extern const char *strerrordesc_np (int __err) __attribute__ ((__nothrow__ ));

extern const char *strerrorname_np (int __err) __attribute__ ((__nothrow__ ));





extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ ));




# 1 "/snap/zig/4060/lib/libc/include/generic-glibc/strings.h" 1 3
# 23 "/snap/zig/4060/lib/libc/include/generic-glibc/strings.h" 3
# 1 "/snap/zig/4060/lib/include/stddef.h" 1 3
# 24 "/snap/zig/4060/lib/libc/include/generic-glibc/strings.h" 2 3
# 34 "/snap/zig/4060/lib/libc/include/generic-glibc/strings.h" 3
extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 68 "/snap/zig/4060/lib/libc/include/generic-glibc/strings.h" 3
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/snap/zig/4060/lib/libc/include/generic-glibc/strings.h" 3
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));
# 447 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 2 3



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)))
                                          ;



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));



extern const char *sigabbrev_np (int __sig) __attribute__ ((__nothrow__ ));


extern const char *sigdescr_np (int __sig) __attribute__ ((__nothrow__ ));



extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)))
                                          ;
# 511 "/snap/zig/4060/lib/libc/include/generic-glibc/string.h" 3
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
# 15 "../include/coz.h" 2
# 25 "../include/coz.h"
typedef struct {
  size_t count;
  size_t backoff;
} coz_counter_t;


typedef coz_counter_t* (*coz_get_counter_t)(int, const char*);


static coz_counter_t* _call_coz_get_counter(int type, const char* name) {
  static unsigned char _initialized = 0;
  static coz_get_counter_t fn;

  if(!_initialized) {

    void* p = dlsym(((void *) 0), "_coz_get_counter");


    memcpy(&fn, &p, sizeof(p));

    _initialized = 1;
  }


  if(fn) return fn(type, name);
  else return 0;
}


typedef size_t* (*coz_get_arrivals_t)();


static size_t* _call_coz_get_local_arrivals() {
  static unsigned char _initialized = 0;
  static coz_get_arrivals_t fn;

  if(!_initialized) {

    void* p = dlsym(((void *) 0), "_coz_get_local_arrivals");


    memcpy(&fn, &p, sizeof(p));

    _initialized = 1;
  }


  if(fn) return fn();
  else return 0;
}


static size_t* _call_coz_get_global_arrivals() {
  static unsigned char _initialized = 0;
  static coz_get_arrivals_t fn;

  if(!_initialized) {

    void* p = dlsym(((void *) 0), "_coz_get_global_arrivals");


    memcpy(&fn, &p, sizeof(p));

    _initialized = 1;
  }


  if(fn) return fn();
  else return 0;
}
# 2 "coz_wrapper.c" 2

void coz_wrapper_progress() {
    if(1) { static unsigned char _initialized = 0; static coz_counter_t* _counter = 0; if(!_initialized) { _counter = _call_coz_get_counter(1, "coz_wrapper.c" ":" "4"); _initialized = 1; } if(_counter) { atomic_fetch_add(&_counter->count, 1, 0); } }
}

void coz_wrapper_progress_named() {
    if(1) { static unsigned char _initialized = 0; static coz_counter_t* _counter = 0; if(!_initialized) { _counter = _call_coz_get_counter(1, "coz_wrapper_progress_name"); _initialized = 1; } if(_counter) { atomic_fetch_add(&_counter->count, 1, 0); } }
}

void coz_wrapper_begin() {
    if(1) { static unsigned char _initialized = 0; static coz_counter_t* _counter = 0; if(!_initialized) { _counter = _call_coz_get_counter(2, "transaction name"); _initialized = 1; } if(_counter) { atomic_fetch_add(&_counter->count, 1, 0); } }
}

void coz_wrapper_end() {
    if(1) { static unsigned char _initialized = 0; static coz_counter_t* _counter = 0; if(!_initialized) { _counter = _call_coz_get_counter(3, "transaction name"); _initialized = 1; } if(_counter) { atomic_fetch_add(&_counter->count, 1, 0); } }
}
