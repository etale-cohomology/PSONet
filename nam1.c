# 1 "nam.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "nam.c"
# 20 "nam.c"
# 1 "/home/da/google/linux/etale/mathisart/mathisart4.h" 1
       
# 32 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 461 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 452 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 453 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 454 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 462 "/usr/include/features.h" 2 3 4
# 485 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 486 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 216 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 3 4

# 216 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 328 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 55 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 1 3 4
# 120 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/floatn-common.h" 2 3 4
# 121 "/usr/include/x86_64-linux-gnu/bits/floatn.h" 2 3 4
# 56 "/usr/include/stdlib.h" 2 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 140 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64 strtof64 (const char *__restrict __nptr,
     char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float128 strtof128 (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float32x strtof32x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern _Float64x strtof64x (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int strfromd (char *__dest, size_t __size, const char *__format,
       double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfromf (char *__dest, size_t __size, const char *__format,
       float __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));

extern int strfroml (char *__dest, size_t __size, const char *__format,
       long double __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 232 "/usr/include/stdlib.h" 3 4
extern int strfromf32 (char *__dest, size_t __size, const char * __format,
         _Float32 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64 (char *__dest, size_t __size, const char * __format,
         _Float64 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf128 (char *__dest, size_t __size, const char * __format,
   _Float128 __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf32x (char *__dest, size_t __size, const char * __format,
   _Float32x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));



extern int strfromf64x (char *__dest, size_t __size, const char * __format,
   _Float64x __f)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
# 272 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types/__locale_t.h" 3 4
struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
};

typedef struct __locale_struct *__locale_t;
# 23 "/usr/include/x86_64-linux-gnu/bits/types/locale_t.h" 2 3 4

typedef __locale_t locale_t;
# 273 "/usr/include/stdlib.h" 2 3 4

extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 316 "/usr/include/stdlib.h" 3 4
extern _Float32 strtof32_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64 strtof64_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float128 strtof128_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float32x strtof32x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));



extern _Float64x strtof64x_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3)));
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timesize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 142 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/time64.h" 1 3 4
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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
# 30 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/x86_64-linux-gnu/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 145 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endianness.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/x86_64-linux-gnu/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 49 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 59 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 101 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4

# 180 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/x86_64-linux-gnu/bits/struct_mutex.h" 3 4
};
# 75 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4
# 87 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/x86_64-linux-gnu/bits/struct_rwlock.h" 3 4
};
# 88 "/usr/include/x86_64-linux-gnu/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
# 24 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)));



extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 569 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 675 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 688 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 698 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 710 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 720 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 731 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 742 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 752 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 762 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 774 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 784 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;





extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 800 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);




extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 872 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));







extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 957 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1013 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 1014 "/usr/include/stdlib.h" 2 3 4
# 1023 "/usr/include/stdlib.h" 3 4

# 33 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stdarg.h" 1 3 4
# 40 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/x86_64-linux-gnu/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types/cookie_io_functions_t.h" 3 4
typedef __ssize_t cookie_read_function_t (void *__cookie, char *__buf,
                                          size_t __nbytes);







typedef __ssize_t cookie_write_function_t (void *__cookie, const char *__buf,
                                           size_t __nbytes);







typedef int cookie_seek_function_t (void *__cookie, __off64_t *__pos, int __w);


typedef int cookie_close_function_t (void *__cookie);






typedef struct _IO_cookie_io_functions_t
{
  cookie_read_function_t *read;
  cookie_write_function_t *write;
  cookie_seek_function_t *seek;
  cookie_close_function_t *close;
} cookie_io_functions_t;
# 47 "/usr/include/stdio.h" 2 3 4





typedef __gnuc_va_list va_list;
# 84 "/usr/include/stdio.h" 3 4
typedef __fpos_t fpos_t;




typedef __fpos64_t fpos64_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 164 "/usr/include/stdio.h" 3 4
extern int renameat2 (int __oldfd, const char *__old, int __newfd,
        const char *__new, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 183 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 237 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 270 "/usr/include/stdio.h" 3 4
extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));





extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));






extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 432 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));




extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 485 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 510 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 521 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 587 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 662 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 750 "/usr/include/stdio.h" 3 4
extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 858 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 873 "/usr/include/stdio.h" 3 4

# 34 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 26 "/usr/include/string.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/string.h" 2 3 4






# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 34 "/usr/include/string.h" 2 3 4
# 43 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 91 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 104 "/usr/include/string.h" 3 4
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 115 "/usr/include/string.h" 3 4
extern void *memrchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 226 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 253 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 266 "/usr/include/string.h" 3 4
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 303 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 330 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 360 "/usr/include/string.h" 3 4
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 421 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/strings.h" 1 3 4
# 23 "/usr/include/strings.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 24 "/usr/include/strings.h" 2 3 4










extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 68 "/usr/include/strings.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 96 "/usr/include/strings.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));






extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));



extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));



# 433 "/usr/include/string.h" 2 3 4



extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 487 "/usr/include/string.h" 3 4
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 499 "/usr/include/string.h" 3 4

# 35 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 149 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 426 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 437 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 3 4
} max_align_t;
# 36 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/float.h" 1 3 4
# 37 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4


# 51 "/usr/include/locale.h" 3 4
struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 118 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));
# 141 "/usr/include/locale.h" 3 4
extern locale_t newlocale (int __category_mask, const char *__locale,
      locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
# 176 "/usr/include/locale.h" 3 4
extern locale_t duplocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern locale_t uselocale (locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));








# 38 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 39 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 151 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stdint.h" 1 3 4
# 9 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 26 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 30 "/usr/include/stdint.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdint-uintn.h" 3 4
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
# 38 "/usr/include/stdint.h" 2 3 4





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
# 71 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 87 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 101 "/usr/include/stdint.h" 3 4
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;
# 10 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stdint.h" 2 3 4
# 152 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2

# 152 "/home/da/google/linux/etale/mathisart/mathisart4.h"
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;

typedef __uint128_t u128;


typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

typedef __int128_t i128;


typedef float f32;
typedef double f64;
typedef float float32_t;
typedef double float64_t;






typedef union{
 struct{ f32 x0,x1; };
 struct{ f32 x, y; };
 struct{ f32 w, h; };
 struct{ f32 c, r; };
 f32 d[2];
}fvec2;
typedef union{
 struct{ i32 x0,x1; };
 struct{ i32 x, y; };
 struct{ i32 w, h; };
 struct{ i32 c, r; };
 i32 d[2];
}ivec2;
typedef union{
 struct{ u32 x0,x1; };
 struct{ u32 x, y; };
 struct{ u32 w, h; };
 struct{ u32 c, r; };
 i32 d[2];
}uvec2;

typedef union{
 struct{ f32 x0,x1,x2; };
 struct{ f32 x, y, z; };
 f32 d[3];
}fvec3;
typedef union{
 struct{ i32 x0,x1,x2; };
 struct{ i32 x, y, z; };
 u32 d[3];
}ivec3;
typedef union{
 struct{ u32 x0,x1,x2; };
 struct{ u32 x, y, z; };
 u32 d[3];
}uvec3;

typedef union{
 struct{ f32 x0,x1,x2,x3; };
 struct{ f32 x, y, z, w; };
 f32 d[4];
}fvec4;
typedef union{
 struct{ i32 x0,x1,x2,x3; };
 struct{ i32 x, y, z, w; };
 u32 d[4];
}ivec4;
typedef union{
 struct{ u32 x0,x1,x2,x3; };
 struct{ u32 x, y, z, w; };
 u32 d[4];
}uvec4;

typedef fvec2 vec2;
typedef fvec3 vec3;
typedef fvec4 vec4;


typedef union{
 struct{ f64 x0,x1; };
 struct{ f64 x, y; };
 struct{ f64 w, h; };
 struct{ f64 c, r; };
 f64 d[2];
}f64vec2;
typedef union{
 struct{ i64 x0,x1; };
 struct{ i64 x, y; };
 struct{ i64 w, h; };
 struct{ i64 c, r; };
 i64 d[2];
}i64vec2;
typedef union{
 struct{ u64 x0,x1; };
 struct{ u64 x, y; };
 struct{ u64 w, h; };
 struct{ u64 c, r; };
 i64 d[2];
}u64vec2;

typedef union{
 struct{ f64 x0,x1,x2; };
 struct{ f64 x, y, z; };
 f64 d[3];
}f64vec3;
typedef union{
 struct{ i64 x0,x1,x2; };
 struct{ i64 x, y, z; };
 u64 d[3];
}i64vec3;
typedef union{
 struct{ u64 x0,x1,x2; };
 struct{ u64 x, y, z; };
 u64 d[3];
}u64vec3;

typedef union{
 struct{ f64 x0,x1,x2,x3; };
 struct{ f64 x, y, z, w; };
 f64 d[4];
}f64vec4;
typedef union{
 struct{ i64 x0,x1,x2,x3; };
 struct{ i64 x, y, z, w; };
 u64 d[4];
}i64vec4;
typedef union{
 struct{ u64 x0,x1,x2,x3; };
 struct{ u64 x, y, z, w; };
 u64 d[4];
}u64vec4;
# 318 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/usr/include/errno.h" 1 3 4
# 28 "/usr/include/errno.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/errno.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4




# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 6 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/errno.h" 2 3 4
# 29 "/usr/include/errno.h" 2 3 4









# 37 "/usr/include/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));







extern char *program_invocation_name;
extern char *program_invocation_short_name;

# 1 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/error_t.h" 3 4
typedef int error_t;
# 49 "/usr/include/errno.h" 2 3 4




# 319 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2








# 326 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static void print(char* fmt_cstr, ...);
# 551 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/unistd_64.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/asm/unistd.h" 2 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 2 3 4




# 1 "/usr/include/x86_64-linux-gnu/bits/syscall.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/syscall.h" 2 3 4
# 552 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2

static const char* M_SYSID_TO_SYSNAME[] = {
 [ 0] = "SYS_read",
 [ 1] = "SYS_write",
 [ 2] = "SYS_open",
 [ 3] = "SYS_close",
 [ 4] = "SYS_stat",
 [ 5] = "SYS_fstat",
 [ 6] = "SYS_lstat",
 [ 7] = "SYS_poll",
 [ 8] = "SYS_lseek",
 [ 9] = "SYS_mmap",
 [ 10] = "SYS_mprotect",
 [ 11] = "SYS_munmap",
 [ 12] = "SYS_brk",
 [ 13] = "SYS_rt_sigaction",
 [ 14] = "SYS_rt_sigprocmask",
 [ 15] = "SYS_rt_sigreturn",
 [ 16] = "SYS_ioctl",
 [ 17] = "SYS_pread64",
 [ 18] = "SYS_pwrite64",
 [ 19] = "SYS_readv",
 [ 20] = "SYS_writev",
 [ 21] = "SYS_access",
 [ 22] = "SYS_pipe",
 [ 23] = "SYS_select",
 [ 24] = "SYS_sched_yield",
 [ 25] = "SYS_mremap",
 [ 26] = "SYS_msync",
 [ 27] = "SYS_mincore",
 [ 28] = "SYS_madvise",
 [ 29] = "SYS_shmget",
 [ 30] = "SYS_shmat",
 [ 31] = "SYS_shmctl",
 [ 32] = "SYS_dup",
 [ 33] = "SYS_dup2",
 [ 34] = "SYS_pause",
 [ 35] = "SYS_nanosleep",
 [ 36] = "SYS_getitimer",
 [ 37] = "SYS_alarm",
 [ 38] = "SYS_setitimer",
 [ 39] = "SYS_getpid",
 [ 40] = "SYS_sendfile",
 [ 41] = "SYS_socket",
 [ 42] = "SYS_connect",
 [ 43] = "SYS_accept",
 [ 44] = "SYS_sendto",
 [ 45] = "SYS_recvfrom",
 [ 46] = "SYS_sendmsg",
 [ 47] = "SYS_recvmsg",
 [ 48] = "SYS_shutdown",
 [ 49] = "SYS_bind",
 [ 50] = "SYS_listen",
 [ 51] = "SYS_getsockname",
 [ 52] = "SYS_getpeername",
 [ 53] = "SYS_socketpair",
 [ 54] = "SYS_setsockopt",
 [ 55] = "SYS_getsockopt",
 [ 56] = "SYS_clone",
 [ 57] = "SYS_fork",
 [ 58] = "SYS_vfork",
 [ 59] = "SYS_execve",
 [ 60] = "SYS_exit",
 [ 61] = "SYS_wait4",
 [ 62] = "SYS_kill",
 [ 63] = "SYS_uname",
 [ 64] = "SYS_semget",
 [ 65] = "SYS_semop",
 [ 66] = "SYS_semctl",
 [ 67] = "SYS_shmdt",
 [ 68] = "SYS_msgget",
 [ 69] = "SYS_msgsnd",
 [ 70] = "SYS_msgrcv",
 [ 71] = "SYS_msgctl",
 [ 72] = "SYS_fcntl",
 [ 73] = "SYS_flock",
 [ 74] = "SYS_fsync",
 [ 75] = "SYS_fdatasync",
 [ 76] = "SYS_truncate",
 [ 77] = "SYS_ftruncate",
 [ 78] = "SYS_getdents",
 [ 79] = "SYS_getcwd",
 [ 80] = "SYS_chdir",
 [ 81] = "SYS_fchdir",
 [ 82] = "SYS_rename",
 [ 83] = "SYS_mkdir",
 [ 84] = "SYS_rmdir",
 [ 85] = "SYS_creat",
 [ 86] = "SYS_link",
 [ 87] = "SYS_unlink",
 [ 88] = "SYS_symlink",
 [ 89] = "SYS_readlink",
 [ 90] = "SYS_chmod",
 [ 91] = "SYS_fchmod",
 [ 92] = "SYS_chown",
 [ 93] = "SYS_fchown",
 [ 94] = "SYS_lchown",
 [ 95] = "SYS_umask",
 [ 96] = "SYS_gettimeofday",
 [ 97] = "SYS_getrlimit",
 [ 98] = "SYS_getrusage",
 [ 99] = "SYS_sysinfo",
 [100] = "SYS_times",
 [101] = "SYS_ptrace",
 [102] = "SYS_getuid",
 [103] = "SYS_syslog",
 [104] = "SYS_getgid",
 [105] = "SYS_setuid",
 [106] = "SYS_setgid",
 [107] = "SYS_geteuid",
 [108] = "SYS_getegid",
 [109] = "SYS_setpgid",
 [110] = "SYS_getppid",
 [111] = "SYS_getpgrp",
 [112] = "SYS_setsid",
 [113] = "SYS_setreuid",
 [114] = "SYS_setregid",
 [115] = "SYS_getgroups",
 [116] = "SYS_setgroups",
 [117] = "SYS_setresuid",
 [118] = "SYS_getresuid",
 [119] = "SYS_setresgid",
 [120] = "SYS_getresgid",
 [121] = "SYS_getpgid",
 [122] = "SYS_setfsuid",
 [123] = "SYS_setfsgid",
 [124] = "SYS_getsid",
 [125] = "SYS_capget",
 [126] = "SYS_capset",
 [127] = "SYS_rt_sigpending",
 [128] = "SYS_rt_sigtimedwait",
 [129] = "SYS_rt_sigqueueinfo",
 [130] = "SYS_rt_sigsuspend",
 [131] = "SYS_sigaltstack",
 [132] = "SYS_utime",
 [133] = "SYS_mknod",
 [134] = "SYS_uselib",
 [135] = "SYS_personality",
 [136] = "SYS_ustat",
 [137] = "SYS_statfs",
 [138] = "SYS_fstatfs",
 [139] = "SYS_sysfs",
 [140] = "SYS_getpriority",
 [141] = "SYS_setpriority",
 [142] = "SYS_sched_setparam",
 [143] = "SYS_sched_getparam",
 [144] = "SYS_sched_setscheduler",
 [145] = "SYS_sched_getscheduler",
 [146] = "SYS_sched_get_priority_max",
 [147] = "SYS_sched_get_priority_min",
 [148] = "SYS_sched_rr_get_interval",
 [149] = "SYS_mlock",
 [150] = "SYS_munlock",
 [151] = "SYS_mlockall",
 [152] = "SYS_munlockall",
 [153] = "SYS_vhangup",
 [154] = "SYS_modify_ldt",
 [155] = "SYS_pivot_root",
 [156] = "SYS__sysctl",
 [157] = "SYS_prctl",
 [158] = "SYS_arch_prctl",
 [159] = "SYS_adjtimex",
 [160] = "SYS_setrlimit",
 [161] = "SYS_chroot",
 [162] = "SYS_sync",
 [163] = "SYS_acct",
 [164] = "SYS_settimeofday",
 [165] = "SYS_mount",
 [166] = "SYS_umount2",
 [167] = "SYS_swapon",
 [168] = "SYS_swapoff",
 [169] = "SYS_reboot",
 [170] = "SYS_sethostname",
 [171] = "SYS_setdomainname",
 [172] = "SYS_iopl",
 [173] = "SYS_ioperm",
 [174] = "SYS_create_module",
 [175] = "SYS_init_module",
 [176] = "SYS_delete_module",
 [177] = "SYS_get_kernel_syms",
 [178] = "SYS_query_module",
 [179] = "SYS_quotactl",
 [180] = "SYS_nfsservctl",
 [181] = "SYS_getpmsg",
 [182] = "SYS_putpmsg",
 [183] = "SYS_afs_syscall",
 [184] = "SYS_tuxcall",
 [185] = "SYS_security",
 [186] = "SYS_gettid",
 [187] = "SYS_readahead",
 [188] = "SYS_setxattr",
 [189] = "SYS_lsetxattr",
 [190] = "SYS_fsetxattr",
 [191] = "SYS_getxattr",
 [192] = "SYS_lgetxattr",
 [193] = "SYS_fgetxattr",
 [194] = "SYS_listxattr",
 [195] = "SYS_llistxattr",
 [196] = "SYS_flistxattr",
 [197] = "SYS_removexattr",
 [198] = "SYS_lremovexattr",
 [199] = "SYS_fremovexattr",
 [200] = "SYS_tkill",
 [201] = "SYS_time",
 [202] = "SYS_futex",
 [203] = "SYS_sched_setaffinity",
 [204] = "SYS_sched_getaffinity",
 [205] = "SYS_set_thread_area",
 [206] = "SYS_io_setup",
 [207] = "SYS_io_destroy",
 [208] = "SYS_io_getevents",
 [209] = "SYS_io_submit",
 [210] = "SYS_io_cancel",
 [211] = "SYS_get_thread_area",
 [212] = "SYS_lookup_dcookie",
 [213] = "SYS_epoll_create",
 [214] = "SYS_epoll_ctl_old",
 [215] = "SYS_epoll_wait_old",
 [216] = "SYS_remap_file_pages",
 [217] = "SYS_getdents64",
 [218] = "SYS_set_tid_address",
 [219] = "SYS_restart_syscall",
 [220] = "SYS_semtimedop",
 [221] = "SYS_fadvise64",
 [222] = "SYS_timer_create",
 [223] = "SYS_timer_settime",
 [224] = "SYS_timer_gettime",
 [225] = "SYS_timer_getoverrun",
 [226] = "SYS_timer_delete",
 [227] = "SYS_clock_settime",
 [228] = "SYS_clock_gettime",
 [229] = "SYS_clock_getres",
 [230] = "SYS_clock_nanosleep",
 [231] = "SYS_exit_group",
 [232] = "SYS_epoll_wait",
 [233] = "SYS_epoll_ctl",
 [234] = "SYS_tgkill",
 [235] = "SYS_utimes",
 [236] = "SYS_vserver",
 [237] = "SYS_mbind",
 [238] = "SYS_set_mempolicy",
 [239] = "SYS_get_mempolicy",
 [240] = "SYS_mq_open",
 [241] = "SYS_mq_unlink",
 [242] = "SYS_mq_timedsend",
 [243] = "SYS_mq_timedreceive",
 [244] = "SYS_mq_notify",
 [245] = "SYS_mq_getsetattr",
 [246] = "SYS_kexec_load",
 [247] = "SYS_waitid",
 [248] = "SYS_add_key",
 [249] = "SYS_request_key",
 [250] = "SYS_keyctl",
 [251] = "SYS_ioprio_set",
 [252] = "SYS_ioprio_get",
 [253] = "SYS_inotify_init",
 [254] = "SYS_inotify_add_watch",
 [255] = "SYS_inotify_rm_watch",
 [256] = "SYS_migrate_pages",
 [257] = "SYS_openat",
 [258] = "SYS_mkdirat",
 [259] = "SYS_mknodat",
 [260] = "SYS_fchownat",
 [261] = "SYS_futimesat",
 [262] = "SYS_newfstatat",
 [263] = "SYS_unlinkat",
 [264] = "SYS_renameat",
 [265] = "SYS_linkat",
 [266] = "SYS_symlinkat",
 [267] = "SYS_readlinkat",
 [268] = "SYS_fchmodat",
 [269] = "SYS_faccessat",
 [270] = "SYS_pselect6",
 [271] = "SYS_ppoll",
 [272] = "SYS_unshare",
 [273] = "SYS_set_robust_list",
 [274] = "SYS_get_robust_list",
 [275] = "SYS_splice",
 [276] = "SYS_tee",
 [277] = "SYS_sync_file_range",
 [278] = "SYS_vmsplice",
 [279] = "SYS_move_pages",
 [280] = "SYS_utimensat",
 [281] = "SYS_epoll_pwait",
 [282] = "SYS_signalfd",
 [283] = "SYS_timerfd_create",
 [284] = "SYS_eventfd",
 [285] = "SYS_fallocate",
 [286] = "SYS_timerfd_settime",
 [287] = "SYS_timerfd_gettime",
 [288] = "SYS_accept4",
 [289] = "SYS_signalfd4",
 [290] = "SYS_eventfd2",
 [291] = "SYS_epoll_create1",
 [292] = "SYS_dup3",
 [293] = "SYS_pipe2",
 [294] = "SYS_inotify_init1",
 [295] = "SYS_preadv",
 [296] = "SYS_pwritev",
 [297] = "SYS_rt_tgsigqueueinfo",
 [298] = "SYS_perf_event_open",
 [299] = "SYS_recvmmsg",
 [300] = "SYS_fanotify_init",
 [301] = "SYS_fanotify_mark",
 [302] = "SYS_prlimit64",
 [303] = "SYS_name_to_handle_at",
 [304] = "SYS_open_by_handle_at",
 [305] = "SYS_clock_adjtime",
 [306] = "SYS_syncfs",
 [307] = "SYS_sendmmsg",
 [308] = "SYS_setns",
 [309] = "SYS_getcpu",
 [310] = "SYS_process_vm_readv",
 [311] = "SYS_process_vm_writev",
 [312] = "SYS_kcmp",
 [313] = "SYS_finit_module",
 [314] = "SYS_sched_setattr",
 [315] = "SYS_sched_getattr",
 [316] = "SYS_renameat2",
 [317] = "SYS_seccomp",
 [318] = "SYS_getrandom",
 [319] = "SYS_memfd_create",
 [320] = "SYS_kexec_file_load",
 [321] = "SYS_bpf",
 [322] = "SYS_execveat",
 [323] = "SYS_userfaultfd",
 [324] = "SYS_membarrier",
 [325] = "SYS_mlock2",
 [326] = "SYS_copy_file_range",
 [327] = "SYS_preadv2",
 [328] = "SYS_pwritev2",
 [329] = "SYS_pkey_mprotect",
 [330] = "SYS_pkey_alloc",
 [331] = "SYS_pkey_free",
 [332] = "SYS_statx",
 [333] = "SYS_io_pgetevents",
 [334] = "SYS_rseq",
 [424] = "SYS_pidfd_send_signal",
 [425] = "SYS_io_uring_setup",
 [426] = "SYS_io_uring_enter",
 [427] = "SYS_io_uring_register",
 [428] = "SYS_open_tree",
 [429] = "SYS_move_mount",
 [430] = "SYS_fsopen",
 [431] = "SYS_fsconfig",
 [432] = "SYS_fsmount",
 [433] = "SYS_fspick",
 [434] = "SYS_pidfd_open",
 [435] = "SYS_clone3",
};

static __inline ssize_t m_read(int fd, const void* data, size_t bdim){
 register i64 rax asm("rax") = 
# 904 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                      0
# 904 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                              ;
 register int rdi asm("rdi") = fd;
 register const void* rsi asm("rsi") = data;
 register size_t rdx asm("rdx") = bdim;
 asm volatile(
  "syscall"
  :"+r"(rax)
  :"r"(rdi), "r"(rsi), "r"(rdx)
  :"rcx", "r11", "memory"
 );
 return rax;
}

static __inline ssize_t m_write(int fd, const void* data, size_t bdim){
 register i64 rax asm("rax") = 
# 918 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                      1
# 918 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                               ;
 register int rdi asm("rdi") = fd;
 register const void* rsi asm("rsi") = data;
 register size_t rdx asm("rdx") = bdim;
 asm volatile(
  "syscall"
  :"+r"(rax) :"r"(rdi), "r"(rsi), "r"(rdx) :"rcx", "r11", "memory"
 );
 return rax;
}

static __inline void m_exit(int st){
 register i64 rax asm("rax") = 
# 930 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                              60
# 930 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                      ;
 register int rdi asm("rdi") = st;
 asm volatile(
  "syscall"
  :"+r"(rax) :"r"(rdi) :"rcx", "r11", "memory"
 );
}
# 988 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/resource.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/resource.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4

# 31 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,





  __RLIMIT_RTTIME = 15,


  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
# 131 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
typedef __rlim_t rlim_t;




typedef __rlim64_t rlim64_t;


struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };


struct rlimit64
  {

    rlim64_t rlim_cur;

    rlim64_t rlim_max;
 };



enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1



  ,

  RUSAGE_THREAD = 1




};


# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_rusage.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/types/struct_rusage.h" 3 4
struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    __extension__ union
      {
 long int ru_maxrss;
 __syscall_slong_t __ru_maxrss_word;
      };


    __extension__ union
      {
 long int ru_ixrss;
 __syscall_slong_t __ru_ixrss_word;
      };

    __extension__ union
      {
 long int ru_idrss;
 __syscall_slong_t __ru_idrss_word;
      };

    __extension__ union
      {
 long int ru_isrss;
  __syscall_slong_t __ru_isrss_word;
      };


    __extension__ union
      {
 long int ru_minflt;
 __syscall_slong_t __ru_minflt_word;
      };

    __extension__ union
      {
 long int ru_majflt;
 __syscall_slong_t __ru_majflt_word;
      };

    __extension__ union
      {
 long int ru_nswap;
 __syscall_slong_t __ru_nswap_word;
      };


    __extension__ union
      {
 long int ru_inblock;
 __syscall_slong_t __ru_inblock_word;
      };

    __extension__ union
      {
 long int ru_oublock;
 __syscall_slong_t __ru_oublock_word;
      };

    __extension__ union
      {
 long int ru_msgsnd;
 __syscall_slong_t __ru_msgsnd_word;
      };

    __extension__ union
      {
 long int ru_msgrcv;
 __syscall_slong_t __ru_msgrcv_word;
      };

    __extension__ union
      {
 long int ru_nsignals;
 __syscall_slong_t __ru_nsignals_word;
      };



    __extension__ union
      {
 long int ru_nvcsw;
 __syscall_slong_t __ru_nvcsw_word;
      };


    __extension__ union
      {
 long int ru_nivcsw;
 __syscall_slong_t __ru_nivcsw_word;
      };
  };
# 180 "/usr/include/x86_64-linux-gnu/bits/resource.h" 2 3 4







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};







extern int prlimit (__pid_t __pid, enum __rlimit_resource __resource,
      const struct rlimit *__new_limit,
      struct rlimit *__old_limit) __attribute__ ((__nothrow__ , __leaf__));
# 217 "/usr/include/x86_64-linux-gnu/bits/resource.h" 3 4
extern int prlimit64 (__pid_t __pid, enum __rlimit_resource __resource,
        const struct rlimit64 *__new_limit,
        struct rlimit64 *__old_limit) __attribute__ ((__nothrow__ , __leaf__));




# 25 "/usr/include/x86_64-linux-gnu/sys/resource.h" 2 3 4













typedef enum __rlimit_resource __rlimit_resource_t;
typedef enum __rusage_who __rusage_who_t;
typedef enum __priority_which __priority_which_t;
# 50 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int getrlimit (__rlimit_resource_t __resource,
        struct rlimit *__rlimits) __attribute__ ((__nothrow__ , __leaf__));
# 61 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int getrlimit64 (__rlimit_resource_t __resource,
   struct rlimit64 *__rlimits) __attribute__ ((__nothrow__ , __leaf__));






extern int setrlimit (__rlimit_resource_t __resource,
        const struct rlimit *__rlimits) __attribute__ ((__nothrow__ , __leaf__));
# 81 "/usr/include/x86_64-linux-gnu/sys/resource.h" 3 4
extern int setrlimit64 (__rlimit_resource_t __resource,
   const struct rlimit64 *__rlimits) __attribute__ ((__nothrow__ , __leaf__));




extern int getrusage (__rusage_who_t __who, struct rusage *__usage) __attribute__ ((__nothrow__ , __leaf__));





extern int getpriority (__priority_which_t __which, id_t __who) __attribute__ ((__nothrow__ , __leaf__));



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     __attribute__ ((__nothrow__ , __leaf__));


# 989 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2

# 989 "/home/da/google/linux/etale/mathisart/mathisart4.h"
void rlimit_stack_set(u64 n){
 setlocale(
# 990 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
          1
# 990 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                    ,"");
 struct rlimit limit; do{ if((i64)(getrlimit(
# 991 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                     RLIMIT_STACK
# 991 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                     ,&limit))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",991,__func__, 
# 991 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                     (*__errno_location ())
# 991 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                     ,strerror(
# 991 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                     (*__errno_location ())
# 991 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                     )); printf(""); putchar(0x0a); } }while(0); printf("\x1b[92mstack  \x1b[0mrlim_cur \x1b[0m%'11lu\x1b[91m:\x1b[34m%08lx\x1b[0m  \x1b[0mrlim_max \x1b[0m%'27lu\x1b[91m:\x1b[34m%016lx\x1b[0m\n", limit.rlim_cur,limit.rlim_cur, limit.rlim_max,limit.rlim_max);
 limit.rlim_cur = ({ typeof(limit.rlim_cur) _a=(limit.rlim_cur); typeof(n) _b=(n); _a<_b ? _b : _a; });
 do{ if((i64)(setrlimit(
# 993 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
RLIMIT_STACK
# 993 "/home/da/google/linux/etale/mathisart/mathisart4.h"
,&limit))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",993,__func__, 
# 993 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 993 "/home/da/google/linux/etale/mathisart/mathisart4.h"
,strerror(
# 993 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 993 "/home/da/google/linux/etale/mathisart/mathisart4.h"
)); printf(""); putchar(0x0a); } }while(0);
 do{ if((i64)(getrlimit(
# 994 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
RLIMIT_STACK
# 994 "/home/da/google/linux/etale/mathisart/mathisart4.h"
,&limit))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",994,__func__, 
# 994 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 994 "/home/da/google/linux/etale/mathisart/mathisart4.h"
,strerror(
# 994 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 994 "/home/da/google/linux/etale/mathisart/mathisart4.h"
)); printf(""); putchar(0x0a); } }while(0); printf("\x1b[92mstack  \x1b[0mrlim_cur \x1b[0m%'11lu\x1b[91m:\x1b[34m%08lx\x1b[0m  \x1b[0mrlim_max \x1b[0m%'27lu\x1b[91m:\x1b[34m%016lx\x1b[0m\n", limit.rlim_cur,limit.rlim_cur, limit.rlim_max,limit.rlim_max);
}
# 1005 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 30 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 73 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timex.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4

# 26 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 74 "/usr/include/x86_64-linux-gnu/bits/time.h" 2 3 4




extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) __attribute__ ((__nothrow__ , __leaf__));


# 34 "/usr/include/time.h" 2 3 4





# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_tm.h" 1 3 4






struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
# 40 "/usr/include/time.h" 2 3 4
# 48 "/usr/include/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_itimerspec.h" 1 3 4







struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };
# 49 "/usr/include/time.h" 2 3 4
struct sigevent;
# 68 "/usr/include/time.h" 3 4




extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));




extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));




extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));




extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));






extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;
# 190 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 205 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 274 "/usr/include/time.h" 3 4
extern int getdate_err;
# 283 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 297 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);



# 1006 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2

# 1006 "/home/da/google/linux/etale/mathisart/mathisart4.h"
typedef struct{ u64 t0,t1; }dt_t;
static __inline u64 dt_abs() { struct timespec ep; clock_gettime(
# 1007 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                                0
# 1007 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                                              , &ep); return ep.tv_sec*1000000000ull + ep.tv_nsec; }
static __inline f64 dt_del( dt_t dt){ return (dt.t1 - dt.t0) / 1e9; }
static __inline dt_t dt_ini() { return (dt_t){t0:dt_abs(), t1:0ull}; }
static __inline void dt_end( dt_t* dt){ dt->t1 = dt_abs(); }
static __inline void dt_show(dt_t dt){ printf("  \x1b[32m%0.6f \x1b[0ms\n", dt_del(dt)); }
# 1022 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static i32 pow10_i32(i32 exponent){ static const i32 POW10_i32[] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000}; return POW10_i32[exponent]; }
static u32 pow10_u32(u32 exponent){ static const u32 POW10_u32[] = {1u, 10u, 100u, 1000u, 10000u, 100000u, 1000000u, 10000000u, 100000000u, 1000000000u}; return POW10_u32[exponent]; }
static i64 pow10_i64(i64 exponent){ static const i64 POW10_i64[] = {1ll, 10ll, 100ll, 1000ll, 10000ll, 100000ll, 1000000ll, 10000000ll, 100000000ll, 1000000000ll, 10000000000ll, 100000000000ll, 1000000000000ll, 10000000000000ll, 100000000000000ll, 1000000000000000ll, 10000000000000000ll, 100000000000000000ll, 1000000000000000000ll}; return POW10_i64[exponent]; }
static u64 pow10_u64(u32 exponent){ static const u64 POW10_u64[] = {1ull,10ull,100ull,1000ull,10000ull,100000ull,1000000ull,10000000ull,100000000ull,1000000000ull,10000000000ull,100000000000ull,1000000000000ull,10000000000000ull,100000000000000ull,1000000000000000ull,10000000000000000ull,100000000000000000ull,1000000000000000000ull,10000000000000000000ull}; return POW10_u64[exponent]; }




static __inline int ddim_u64(u64 x){
 if (x< 10u) return 1;
 else if(x< 100u) return 2;
 else if(x< 1000u) return 3;
 else if(x< 10000u) return 4;
 else if(x< 100000u) return 5;
 else if(x< 1000000u) return 6;
 else if(x< 10000000u) return 7;
 else if(x< 100000000u) return 8;
 else if(x< 1000000000u) return 9;
 else if(x< 10000000000ull) return 10;
 else if(x< 100000000000ull) return 11;
 else if(x< 1000000000000ull) return 12;
 else if(x< 10000000000000ull) return 13;
 else if(x< 100000000000000ull) return 14;
 else if(x< 1000000000000000ull) return 15;
 else if(x< 10000000000000000ull) return 16;
 else if(x< 100000000000000000ull) return 17;
 else if(x< 1000000000000000000ull) return 18;
 else if(x<10000000000000000000ull) return 19;
 return 20;
}
static __inline int ddimc_u64(u64 x){ return ddim_u64(x) + (ddim_u64(x)-1)/3; }

static __inline int ddim_i64( i64 x){ return (int)(x<0) + ddim_u64( ({ typeof(x) _a=(x); _a< 0 ? -_a : _a; })); }
static __inline int ddimc_i64(i64 x){ return (int)(x<0) + ddimc_u64(({ typeof(x) _a=(x); _a< 0 ? -_a : _a; })); }







static __inline int fmtfd(char* cstr, f64 val, int width, int prec);
static __inline int fmtfx(char* cstr, f64 val, int width, int prec);


static __inline int fmtid(char* cstr, i64 val, int width);
static __inline int fmtix(char* cstr, i64 val, int width);


static __inline int fmtud(char* cstr, u64 val, int width);
static __inline int fmtux(char* cstr, u64 val, int width);


static __inline void fmtfd__reverse(int len,char* data){
 int i = 0;
 int j = len-1;
 int tmp;
 while(i<j){
  tmp = data[i];
  data[i] = data[j];
  data[j] = tmp;
  ++i;
  --j;
 }
}

static __inline int fmtfd__zeros(i32 val, char* cstr, int d){
 int i = 0;
 while(val){
  cstr[i++] = (val%10) + '0';
  val = val/10;
 }
 while(i<d)
  cstr[i++] = '0';
 fmtfd__reverse(i, cstr);
 cstr[i] = 0x00;
 return i;
}

static __inline int fmtfd(char* cstr, f64 val, int width, int prec){
 i64 ipart = (i64)val;
 f64 fpart = val - (f64)ipart;
 int i = fmtid(cstr, ipart, width-prec-1);
 if(prec<=0) return i;

 cstr[i] = '.';
 fpart = fpart * pow10_i32(prec);
 i += fmtfd__zeros((int)fpart, cstr+i+1, prec+1);
 return i;
}


static __inline int fmtid(char* cstr, i64 val, int width){
 i64 val0 = val;
 if(__builtin_expect((val<0),0)) val = -val;
 char* end = cstr + 27;
 *--end = 0x00;
 int nchars = -1;
 int len = 0;
 do{
  if(__builtin_expect((++nchars==3),0)){
   nchars = 0;
   ++len; *--end = ',';
  }
  ++len; *--end = (u8)(val%10 + '0');
 }while((val/=10) != 0);

 if(__builtin_expect((val0<0),0)){ ++len; *--end = '-'; }
 while(len<width){
  ++len; *--end = ' ';
 }

 memmove(cstr,end,len);
 cstr[len] = 0x00;
 return len;
}



static __inline u64 u32_to_asciihexbe(u32 val){
 u64 x = val;
 x = ((x&0x000000000000ffffull) << 0x20) | ((x&0x00000000ffff0000ull) >> 0x10);
 x = ((x&0x000000ff000000ffull) << 0x10) | ((x&0x0000ff000000ff00ull) >> 0x08);
 x = ((x&0x000f000f000f000full) << 0x08) | ((x&0x00f000f000f000f0ull) >> 0x04);

 u64 MASK = ((x+0x0606060606060606ull) >> 4) & 0x0101010101010101ull;
 x |= 0x3030303030303030ull;
 x += 0x27 * MASK;
 return x;
}


static __inline u64 u32_to_asciihexle(u32 val){
 u64 x = (u64)val;
 x = x | ( x <<0x10);
 x = ((x&0x000000ff000000ffull)) | ((x&0x0000ff000000ff00ull)<<0x08);
 x = ((x&0x000f000f000f000full)) | ((x&0x00f000f000f000f0ull)<<0x04);

 u64 MASK = ((x+0x0606060606060606ull)>>4) & 0x0101010101010101ull;
 x |= 0x3030303030303030ull;
 x += 0x27*MASK;
 return x;
}

static __inline int fmtux(char* buf, u64 val, int width){ 
# 1166 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                ((void) sizeof ((
# 1166 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                width==8 || width==16
# 1166 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                ) ? 1 : 0), __extension__ ({ if (
# 1166 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                width==8 || width==16
# 1166 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                ) ; else __assert_fail (
# 1166 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                "width==8 || width==16"
# 1166 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                , "/home/da/google/linux/etale/mathisart/mathisart4.h", 1166, __extension__ __PRETTY_FUNCTION__); }))
# 1166 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                                             ;
  u64 ls = u32_to_asciihexbe(val>>0x00);
  u64 ms = u32_to_asciihexbe(val>>0x20);
  u64* x = (u64*)buf;
  if( width== 8){ x[0]=ls; }
  else if(width==16){ x[0]=ms; x[1]=ls; }
  return width;
}
# 1257 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static const u32 U4_TO_ASCIIBINBE[16] = {
              0x30303030, 0x31303030, 0x30313030, 0x31313030,
              0x30303130, 0x31303130, 0x30313130, 0x31313130,
              0x30303031, 0x31303031, 0x30313031, 0x31313031,
              0x30303131, 0x31303131, 0x30313131, 0x31313131,
};
static const u32 U4_TO_ASCIIBINLE[16] = {
              0x30303030, 0x30303031, 0x30303130, 0x30303131,
              0x30313030, 0x30313031, 0x30313130, 0x30313131,
              0x31303030, 0x31303031, 0x31303130, 0x31303131,
              0x31313030, 0x31313031, 0x31313130, 0x31313131,
};
# 1327 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static __inline void bitput(volatile void* bit_field, i64 bit_idx, u8 bit_val){
 volatile u32* data32 = (volatile u32*)bit_field;
 i64 idx_quo32 = bit_idx / 32;
 int idx_rem32 = bit_idx & 31;
 data32[idx_quo32] = (bit_val&1)<<idx_rem32;
}
static __inline void bitset(volatile void* bit_field, i64 bit_idx){
 volatile u32* data32 = (volatile u32*)bit_field;
 i64 idx_quo32 = bit_idx / 32;
 int idx_rem32 = bit_idx & 31;
 data32[idx_quo32] |= 1<<idx_rem32;
}
static __inline int bitget(volatile void* bit_field, i64 bit_idx){
 volatile u32* data32 = (volatile u32*)bit_field;
 i64 idx_quo32 = bit_idx / 32;
 int idx_rem32 = bit_idx & 31;
 return (data32[idx_quo32]>>idx_rem32) & 1;
}
static __inline void bitdel(volatile void* bit_field, i64 bit_idx){
 volatile u32* data32 = (volatile u32*)bit_field;
 i64 idx_quo32 = bit_idx / 32;
 int idx_rem32 = bit_idx & 31;
 data32[idx_quo32] &= ~(1<<idx_rem32);
}
static __inline void bitflip(volatile void* bit_field, i64 bit_idx){
 volatile u32* data32 = (volatile u32*)bit_field;
 i64 idx_quo32 = bit_idx / 32;
 int idx_rem32 = bit_idx & 31;
 data32[idx_quo32] ^= 1<<idx_rem32;
}


# 1 "/usr/include/fcntl.h" 1 3 4
# 28 "/usr/include/fcntl.h" 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4

# 35 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


struct flock64
  {
    short int l_type;
    short int l_whence;
    __off64_t l_start;
    __off64_t l_len;
    __pid_t l_pid;
  };



# 1 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/struct_iovec.h" 2 3 4


struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 39 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 2 3 4
# 265 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
enum __pid_type
  {
    F_OWNER_TID = 0,
    F_OWNER_PID,
    F_OWNER_PGRP,
    F_OWNER_GID = F_OWNER_PGRP
  };


struct f_owner_ex
  {
    enum __pid_type type;
    __pid_t pid;
  };
# 353 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
# 1 "/usr/include/linux/falloc.h" 1 3 4
# 354 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 2 3 4



struct file_handle
{
  unsigned int handle_bytes;
  int handle_type;

  unsigned char f_handle[0];
};
# 392 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4





extern __ssize_t readahead (int __fd, __off64_t __offset, size_t __count)
    __attribute__ ((__nothrow__ , __leaf__));






extern int sync_file_range (int __fd, __off64_t __offset, __off64_t __count,
       unsigned int __flags);






extern __ssize_t vmsplice (int __fdout, const struct iovec *__iov,
      size_t __count, unsigned int __flags);





extern __ssize_t splice (int __fdin, __off64_t *__offin, int __fdout,
    __off64_t *__offout, size_t __len,
    unsigned int __flags);





extern __ssize_t tee (int __fdin, int __fdout, size_t __len,
        unsigned int __flags);






extern int fallocate (int __fd, int __mode, __off_t __offset, __off_t __len);
# 447 "/usr/include/x86_64-linux-gnu/bits/fcntl-linux.h" 3 4
extern int fallocate64 (int __fd, int __mode, __off64_t __offset,
   __off64_t __len);




extern int name_to_handle_at (int __dfd, const char *__name,
         struct file_handle *__handle, int *__mnt_id,
         int __flags) __attribute__ ((__nothrow__ , __leaf__));





extern int open_by_handle_at (int __mountdirfd, struct file_handle *__handle,
         int __flags);




# 61 "/usr/include/x86_64-linux-gnu/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 78 "/usr/include/fcntl.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
  };



struct stat64
  {
    __dev_t st_dev;

    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;






    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;





    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 164 "/usr/include/x86_64-linux-gnu/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];



  };
# 79 "/usr/include/fcntl.h" 2 3 4
# 148 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 157 "/usr/include/fcntl.h" 3 4
extern int fcntl64 (int __fd, int __cmd, ...);
# 168 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 178 "/usr/include/fcntl.h" 3 4
extern int open64 (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 192 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 203 "/usr/include/fcntl.h" 3 4
extern int openat64 (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 214 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 224 "/usr/include/fcntl.h" 3 4
extern int creat64 (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 243 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, off_t __len);
# 252 "/usr/include/fcntl.h" 3 4
extern int lockf64 (int __fd, int __cmd, off64_t __len);







extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 272 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise64 (int __fd, off64_t __offset, off64_t __len,
       int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 282 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 293 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate64 (int __fd, off64_t __offset, off64_t __len);
# 304 "/usr/include/fcntl.h" 3 4

# 1360 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 274 "/usr/include/unistd.h" 3 4
typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__ , __leaf__));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__ , __leaf__)) ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__ , __leaf__));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__ , __leaf__));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__ , __leaf__)) ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__ , __leaf__)) ;






extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));




extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4








extern char *optarg;
# 50 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 91 "/usr/include/x86_64-linux-gnu/bits/getopt_core.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


# 28 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 2 3 4


# 49 "/usr/include/x86_64-linux-gnu/bits/getopt_posix.h" 3 4

# 870 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) __attribute__ ((__nothrow__ , __leaf__));






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 991 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1003 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1014 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1024 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1035 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1056 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1107 "/usr/include/unistd.h" 3 4
ssize_t copy_file_range (int __infd, __off64_t *__pinoff,
    int __outfd, __off64_t *__poutoff,
    size_t __length, unsigned int __flags);





extern int fdatasync (int __fildes);
# 1124 "/usr/include/unistd.h" 3 4
extern char *crypt (const char *__key, const char *__salt)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));







extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 1161 "/usr/include/unistd.h" 3 4
int getentropy (void *__buffer, size_t __length) ;
# 1170 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/unistd_ext.h" 1 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/unistd_ext.h" 3 4
extern __pid_t gettid (void) __attribute__ ((__nothrow__ , __leaf__));
# 1171 "/usr/include/unistd.h" 2 3 4


# 1361 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/mman.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4
# 41 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/mman.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman-map-flags-generic.h" 1 3 4
# 32 "/usr/include/x86_64-linux-gnu/bits/mman.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 1 3 4
# 113 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mman-shared.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/bits/mman-shared.h" 3 4




int memfd_create (const char *__name, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));



int mlock2 (const void *__addr, size_t __length, unsigned int __flags) __attribute__ ((__nothrow__ , __leaf__));





int pkey_alloc (unsigned int __flags, unsigned int __access_rights) __attribute__ ((__nothrow__ , __leaf__));



int pkey_set (int __key, unsigned int __access_rights) __attribute__ ((__nothrow__ , __leaf__));



int pkey_get (int __key) __attribute__ ((__nothrow__ , __leaf__));



int pkey_free (int __key) __attribute__ ((__nothrow__ , __leaf__));



int pkey_mprotect (void *__addr, size_t __len, int __prot, int __pkey) __attribute__ ((__nothrow__ , __leaf__));


# 113 "/usr/include/x86_64-linux-gnu/bits/mman-linux.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/mman.h" 2 3 4
# 42 "/usr/include/x86_64-linux-gnu/sys/mman.h" 2 3 4





# 57 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) __attribute__ ((__nothrow__ , __leaf__));
# 70 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void *mmap64 (void *__addr, size_t __len, int __prot,
       int __flags, int __fd, __off64_t __offset) __attribute__ ((__nothrow__ , __leaf__));




extern int munmap (void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mprotect (void *__addr, size_t __len, int __prot) __attribute__ ((__nothrow__ , __leaf__));







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));



extern int posix_madvise (void *__addr, size_t __len, int __advice) __attribute__ ((__nothrow__ , __leaf__));




extern int mlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));


extern int munlock (const void *__addr, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern int mlockall (int __flags) __attribute__ ((__nothrow__ , __leaf__));



extern int munlockall (void) __attribute__ ((__nothrow__ , __leaf__));







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     __attribute__ ((__nothrow__ , __leaf__));
# 133 "/usr/include/x86_64-linux-gnu/sys/mman.h" 3 4
extern void *mremap (void *__addr, size_t __old_len, size_t __new_len,
       int __flags, ...) __attribute__ ((__nothrow__ , __leaf__));



extern int remap_file_pages (void *__start, size_t __size, int __prot,
        size_t __pgoff, int __flags) __attribute__ ((__nothrow__ , __leaf__));




extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);


# 1362 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2
# 1 "/usr/include/x86_64-linux-gnu/sys/stat.h" 1 3 4
# 99 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/stat.h" 1 3 4
# 102 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 205 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 224 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int stat64 (const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 249 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int fstatat64 (int __fd, const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 272 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int lstat64 (const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__ , __leaf__));



extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
# 428 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));

extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));


# 1 "/usr/include/x86_64-linux-gnu/bits/statx.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/statx.h" 3 4
# 1 "/usr/include/linux/stat.h" 1 3 4




# 1 "/usr/include/linux/types.h" 1 3 4




# 1 "/usr/include/x86_64-linux-gnu/asm/types.h" 1 3 4
# 1 "/usr/include/asm-generic/types.h" 1 3 4






# 1 "/usr/include/asm-generic/int-ll64.h" 1 3 4
# 12 "/usr/include/asm-generic/int-ll64.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 12 "/usr/include/x86_64-linux-gnu/asm/bitsperlong.h" 2 3 4
# 13 "/usr/include/asm-generic/int-ll64.h" 2 3 4







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 8 "/usr/include/asm-generic/types.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/asm/types.h" 2 3 4
# 6 "/usr/include/linux/types.h" 2 3 4



# 1 "/usr/include/linux/posix_types.h" 1 3 4




# 1 "/usr/include/linux/stddef.h" 1 3 4
# 6 "/usr/include/linux/posix_types.h" 2 3 4
# 25 "/usr/include/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types.h" 1 3 4






# 1 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 3 4
typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;


typedef unsigned long __kernel_old_dev_t;


# 1 "/usr/include/asm-generic/posix_types.h" 1 3 4
# 15 "/usr/include/asm-generic/posix_types.h" 3 4
typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;



typedef unsigned int __kernel_mode_t;



typedef int __kernel_pid_t;



typedef int __kernel_ipc_pid_t;



typedef unsigned int __kernel_uid_t;
typedef unsigned int __kernel_gid_t;



typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;
# 72 "/usr/include/asm-generic/posix_types.h" 3 4
typedef __kernel_ulong_t __kernel_size_t;
typedef __kernel_long_t __kernel_ssize_t;
typedef __kernel_long_t __kernel_ptrdiff_t;




typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_time_t;
typedef long long __kernel_time64_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
# 19 "/usr/include/x86_64-linux-gnu/asm/posix_types_64.h" 2 3 4
# 8 "/usr/include/x86_64-linux-gnu/asm/posix_types.h" 2 3 4
# 37 "/usr/include/linux/posix_types.h" 2 3 4
# 10 "/usr/include/linux/types.h" 2 3 4
# 24 "/usr/include/linux/types.h" 3 4
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 47 "/usr/include/linux/types.h" 3 4
typedef unsigned __poll_t;
# 6 "/usr/include/linux/stat.h" 2 3 4
# 56 "/usr/include/linux/stat.h" 3 4
struct statx_timestamp {
 __s64 tv_sec;
 __u32 tv_nsec;
 __s32 __reserved;
};
# 99 "/usr/include/linux/stat.h" 3 4
struct statx {

 __u32 stx_mask;
 __u32 stx_blksize;
 __u64 stx_attributes;

 __u32 stx_nlink;
 __u32 stx_uid;
 __u32 stx_gid;
 __u16 stx_mode;
 __u16 __spare0[1];

 __u64 stx_ino;
 __u64 stx_size;
 __u64 stx_blocks;
 __u64 stx_attributes_mask;

 struct statx_timestamp stx_atime;
 struct statx_timestamp stx_btime;
 struct statx_timestamp stx_ctime;
 struct statx_timestamp stx_mtime;

 __u32 stx_rdev_major;
 __u32 stx_rdev_minor;
 __u32 stx_dev_major;
 __u32 stx_dev_minor;

 __u64 __spare2[14];

};
# 32 "/usr/include/x86_64-linux-gnu/bits/statx.h" 2 3 4







# 1 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_statx_timestamp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_statx.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 2 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/statx-generic.h" 3 4



int statx (int __dirfd, const char *__restrict __path, int __flags,
           unsigned int __mask, struct statx *__restrict __buf)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 5)));


# 39 "/usr/include/x86_64-linux-gnu/bits/statx.h" 2 3 4
# 447 "/usr/include/x86_64-linux-gnu/sys/stat.h" 2 3 4
# 534 "/usr/include/x86_64-linux-gnu/sys/stat.h" 3 4

# 1363 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2

# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include-fixed/limits.h" 1 3 4
# 34 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include-fixed/limits.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include-fixed/syslimits.h" 1 3 4






# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include-fixed/limits.h" 1 3 4
# 194 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 26 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 27 "/usr/include/limits.h" 2 3 4
# 183 "/usr/include/limits.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 161 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 1 3 4
# 38 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/x86_64-linux-gnu/bits/local_lim.h" 2 3 4
# 162 "/usr/include/x86_64-linux-gnu/bits/posix1_lim.h" 2 3 4
# 184 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/posix2_lim.h" 1 3 4
# 188 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/uio_lim.h" 1 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/xopen_lim.h" 2 3 4
# 192 "/usr/include/limits.h" 2 3 4
# 195 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include-fixed/limits.h" 2 3 4
# 8 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include-fixed/syslimits.h" 2 3 4
# 35 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include-fixed/limits.h" 2 3 4
# 1365 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2

# 1365 "/home/da/google/linux/etale/mathisart/mathisart4.h"
typedef struct{
 char* path;
 struct stat fs;
 i64 bdim;
 u8* data;
}file_t;

static file_t file_ini(char* path){
 int file_exists = access(path,
# 1373 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                              0
# 1373 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                  ); if(file_exists==-1) printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[37m%s  \x1b[33m%p:\x1b[91m%s\x1b[0m\n", "/home/da/google/linux/etale/mathisart/mathisart4.h",1373,__func__, strerror(
# 1373 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                                                                                                                                                                                                      (*__errno_location ())
# 1373 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                                                                                                                                                                                                           ),path,path);
 if(file_exists<0) return (file_t){0x00};

 file_t file = {0x00};
 file.path = realpath(path, 
# 1377 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             ((void *)0)
# 1377 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                 );
 do{ if((i64)(stat(path,&file.fs))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",1378,__func__, 
# 1378 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 1378 "/home/da/google/linux/etale/mathisart/mathisart4.h"
,strerror(
# 1378 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 1378 "/home/da/google/linux/etale/mathisart/mathisart4.h"
)); printf(""); putchar(0x0a); } }while(0);
 int fd = open(file.path, 
# 1379 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                              00
# 1379 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                      ); if(fd<0) return file;
 file.bdim = file.fs.st_size;
 if(!
# 1381 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
    ((((
# 1381 "/home/da/google/linux/etale/mathisart/mathisart4.h"
    file.fs.st_mode
# 1381 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
    )) & 0170000) == (0040000)) 
# 1381 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             && file.bdim>0){
  file.data = (u8*)mmap(
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                       ((void *)0)
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                           ,file.bdim, 
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                       0x1
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                ,
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                 0x01
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                           , fd,0); do{ if((i64)(file.data)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",1382,__func__, 
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                                     (*__errno_location ())
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                                     ,strerror(
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                                     (*__errno_location ())
# 1382 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                                     )); printf(""); putchar(0x0a); } }while(0);
 }
 do{ if((i64)(close(fd))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",1384,__func__, 
# 1384 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 1384 "/home/da/google/linux/etale/mathisart/mathisart4.h"
,strerror(
# 1384 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 1384 "/home/da/google/linux/etale/mathisart/mathisart4.h"
)); printf(""); putchar(0x0a); } }while(0);
 return file;
}

static void file_end(file_t* file){
 if(file==
# 1389 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
         ((void *)0)
# 1389 "/home/da/google/linux/etale/mathisart/mathisart4.h"
             ) return;
 free(file->path);
 if(file->data!=
# 1391 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
               ((void *)0)
# 1391 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                   ) do{ if((i64)(munmap(file->data,file->bdim))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",1391,__func__, 
# 1391 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                      (*__errno_location ())
# 1391 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                      ,strerror(
# 1391 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                      (*__errno_location ())
# 1391 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                      )); printf(""); putchar(0x0a); } }while(0);
 *file=(file_t){0x00};
}
# 1402 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static u64 file_nlines(file_t file);
static u32 nlines_u32( void* __restrict__ data, u64 bdim);
static i64 nlines_avx2(void* __restrict__ data, i64 bdim);

static void file_meta(file_t file){
 dt_t dt = dt_ini();
 i64 nlines = file_nlines(file);
 dt_end(&dt);
 printf("\n""-------------------------------------------------------------------------------------------------------------------------------\x1b[91m#\x1b[0m\n"); printf("\x1b[33mMETA  \x1b[34mfile_t  \x1b[0mnlines \x1b[32m%'lu  \x1b[0mbdim \x1b[34m%'lu  \x1b[0mdata \x1b[37m%016lx  \x1b[91m__avx2__ \x1b[33m%d  \x1b[32m%.6f  \x1b[92m%s\x1b[0m\n", nlines,file.bdim, (u64)file.data, 0,dt_del(dt), file.path);
}

static u64 file_nlines(file_t file){



 return nlines_u32(file.data, file.bdim);

}

static u32 nlines_u32(void* __restrict__ data, u64 bdim){
 u32* data32 = (u32*)data;
 u32 nwords32 = ({ u32 _a=(u32)(bdim); u32 _b=(u32)(4); _a/_b + (_a%_b ? 1 : 0); });
 u32 nlines = 1;

 for(u32 (i)=(0); (i)<(nwords32); ++(i)){
  u32 word32 = *(data32+i) ^ 0x0a0a0a0au;
  nlines += (((0x80808080u - ((word32) & 0x7f7f7f7fu)) & ~(word32) & 0x80808080u) / 0x80 % 0xff);
 }

 return nlines;
}
# 1482 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/random.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/sys/random.h" 3 4





# 33 "/usr/include/x86_64-linux-gnu/sys/random.h" 3 4
ssize_t getrandom (void *__buffer, size_t __length,
                   unsigned int __flags) ;



int getentropy (void *__buffer, size_t __length) ;


# 1483 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2

# 1483 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static __inline u32 __rotl32(u32 val, uint rot){ return (val<<rot) | (val >> ((-rot)&31)); }
static __inline u32 __rotr32(u32 val, uint rot){ return (val>>rot) | (val << ((-rot)&31)); }
static __inline u64 __rotl64(u64 val, uint rot){ return (val<<rot) | (val >> (64-rot)); }
static __inline u64 __rotr64(u64 val, uint rot){ return (val>>rot) | (val << (64-rot)); }

static u64 _XOSHIRO256P_STATE[4];
static void xoshiro256p_ini(){ do{ if((i64)(getrandom(_XOSHIRO256P_STATE,sizeof(_XOSHIRO256P_STATE), 0x00))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",1489,__func__, 
# 1489 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                              (*__errno_location ())
# 1489 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                              ,strerror(
# 1489 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                              (*__errno_location ())
# 1489 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                              )); printf(""); putchar(0x0a); } }while(0); }
static __inline u64 xoshiro256p(){
 u64 r = _XOSHIRO256P_STATE[0] + _XOSHIRO256P_STATE[3];
 u64 t = _XOSHIRO256P_STATE[1]<<17;
 _XOSHIRO256P_STATE[2] ^= _XOSHIRO256P_STATE[0];
 _XOSHIRO256P_STATE[3] ^= _XOSHIRO256P_STATE[1];
 _XOSHIRO256P_STATE[1] ^= _XOSHIRO256P_STATE[2];
 _XOSHIRO256P_STATE[0] ^= _XOSHIRO256P_STATE[3];
 _XOSHIRO256P_STATE[2] ^= t;
 _XOSHIRO256P_STATE[3] = __rotl64(_XOSHIRO256P_STATE[3], 45);
 return r;
}
static __inline f32 xoshiro256pf(){
 u32 t = (xoshiro256p()>>(64-32)) & ((1ull<<32)-1);
 u32 b = (1ull<<32)-1;
 return (f64)t / (f64)b;
}
static __inline f64 xoshiro256pf64(){
 u64 t = (xoshiro256p()>>(64-61)) & ((1ull<<61)-1);
 u64 b = (1ull<<61)-1;
 return (f64)t / (f64)b;
}

static void xoshiro256p_jump(){
 static const u64 JUMP[] = {0x180ec6d33cfd0abaull, 0xd5a61266f0c9392cull, 0xa9582618e03fc9aaull, 0x39abdc4529b1661cull};
 u64 s0 = 0;
 u64 s1 = 0;
 u64 s2 = 0;
 u64 s3 = 0;
 for(int i=0; i < sizeof(JUMP)/sizeof(*JUMP); ++i)
  for(int b=0; b<64; ++b){
   if(JUMP[i] & 1UL << b){
    s0 ^= _XOSHIRO256P_STATE[0];
    s1 ^= _XOSHIRO256P_STATE[1];
    s2 ^= _XOSHIRO256P_STATE[2];
    s3 ^= _XOSHIRO256P_STATE[3];
   }
   xoshiro256p();
  }

 _XOSHIRO256P_STATE[0] = s0;
 _XOSHIRO256P_STATE[1] = s1;
 _XOSHIRO256P_STATE[2] = s2;
 _XOSHIRO256P_STATE[3] = s3;
}


int memeq(i64 bdim,void* data0,void* data1){ if(bdim<=0ll) return 1;
 u32* data0_32 = (u32*)data0;
 u32* data1_32 = (u32*)data1;
 u8* data0_8 = data0 + bdim - bdim%4;
 u8* data1_8 = data1 + bdim - bdim%4;
 for(i64 (i)=(0); (i)<(bdim/4); ++(i)) if(data0_32[i]!=data1_32[i]) return 0;
 for(i64 (i)=(0); (i)<(bdim%4); ++(i)) if(data0_8 [i]!=data1_32[i]) return 0;
 return 1;
}
int memeq8(i64 bdim,void* data, u8 val){ if(bdim<=0ll) return 1;
 u8* data8 = (u8*)data;
 for(i64 (i)=(0); (i)<(bdim); ++(i)) if(data8[i]!=val) return 0;
 return 1;
}
int memeq32(i64 bdim,void* data, u32 val){ if(bdim<=0ll) return 1;
 u32* data32 = (u32*)data;
 u8* data8 = data + bdim - bdim%4;
 for(i64 (i)=(0); (i)<(bdim/4); ++(i)) if(data32[i]!=val) return 0;
 for(i64 (i)=(0); (i)<(bdim%4); ++(i)) if(data8 [i]!=(val>>(i*8)&0xff)) return 0;
 return 1;
}


typedef struct{
 i64 bdim;
 u8* data;
}buf_t;

static buf_t bini(i64 bdim){
 buf_t buf;
 buf.bdim = bdim;
 buf.data = malloc(buf.bdim);
 return buf;
}
static void bend(buf_t* buf){
 if(buf==
# 1571 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
        ((void *)0)
# 1571 "/home/da/google/linux/etale/mathisart/mathisart4.h"
            ) return;
 free(buf->data);
 *buf=(buf_t){0x00};
}





typedef struct{
 i64 idim;
 i64 idimmax;
 u64 code;
}vhead_t;
# 1713 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stdarg.h" 1 3 4
# 1714 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2



struct str_t;
struct strran_t;
struct strpos_t;
typedef struct str_t str_t;
typedef struct strran_t strran_t;
typedef struct strpos_t strpos_t;


static str_t str_ini( void);
static str_t str_ini_bdim( i64 bdim);
static str_t str_ini_str( str_t other);
static str_t str_ini_cstr( char* cstr);
static str_t str_ini_bytes(i64 bdim, u8* data);
# 1761 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static void str_end( str_t* self);
static i64 str_bdim( str_t self);
static i64 str_max_bdim(str_t self);

static void str_meta( str_t self);
static void str_show( str_t self);
static void str_show_range(str_t self, i64 idx_ini,i64 idx_end);

static __inline strran_t str__pythonic_range(i64 idx_ini,i64 idx_end, i64 bdim);
static __inline void str__grow_maybe(str_t* self);
static __inline void str__drop_maybe(str_t* self);
static __inline void str__grow(str_t* self);
static __inline void str__drop(str_t* self);


static void print( char* fmt_cstr, ...);
static str_t str_fmt( char* fmt_cstr, ...);
static str_t str__vfmt( char* fmt_cstr, va_list args);

static str_t str_slice( str_t src, i64 idx_ini,i64 idx_end);

static __inline void str_grow( str_t* self, i64 bdim);

static void str_push( str_t* self, str_t other);
static void str_push_fmt( str_t* self, char* fmt_cstr, ...);
static void str_push_bytes( str_t* self, i64 bdim,u8* data);
static void str_push_bytes1( str_t* self, i64 bdim,u8 byte);
static void str_push_cstr( str_t* self, char* cstr);
static void str_push_byte( str_t* self, u8 byte);

static void str_unshift( str_t* self, str_t other);
static void str_shift( str_t* self, i64 bdim);

static void str_trim( str_t* self, i64 idx_ini,i64 idx_end);
static void str_clear( str_t* self);

static void str_put( str_t* self, str_t* other, i64 idx);
static void str_del( str_t* self, i64 idim);

static str_t** str_split( str_t* self, u8 splitter);
static void str_copy( str_t* self, str_t* other);
static void str_copy_range( str_t* self, str_t* other, i64 idx_ini,i64 idx_end);


static i64 str_ndiff( str_t* str0, str_t* str1);
static i64 str_search_text( str_t* haystack, str_t* needle, i64 haystack_pos);
static void str_replace_text( str_t* self, str_t* old_needle, str_t* new_needle);
static void str_replace_regex(str_t* self, str_t* regex, str_t* text);


static int str__levenshtein(int len1, char* txt1, int len2, char* txt2);



static int str__is_prefix( u8* word, int wordlen, int pos);
static int str__suffix_length( u8* word, int wordlen, int pos);
static void str__lut_delta1_compile(int* delta1, u8* pat, int patlen);
static void str__lut_delta2_compile(int* delta2, u8* pat, int patlen);
static i64 str__boyer_moore( int* delta1, int* delta2, i64 needle_bdim,u8* needle_data, i64 haystack_bdim,u8* haystack_data);




struct strran_t{ i64 ini,end; };
struct strpos_t{ i64 ini,del; };


struct str_t{
 i64 bdim,max_bdim;
 u8* data;
};



static str_t str_ini(){
 str_t self;
 self.bdim = 0;
 self.max_bdim = 0x200;
 self.data = malloc(self.max_bdim);
 return self;
}




static str_t str_ini_bdim(i64 bdim){
 str_t self;
 self.bdim = 0;
 self.max_bdim = ({ typeof(0x200) _a=(0x200); typeof(bdim) _b=(bdim); _a<_b ? _b : _a; });
 self.data = malloc(self.max_bdim);
 return self;
}




static str_t str_ini_str(str_t other){
 str_t self;
 self.bdim = other.bdim;
 self.max_bdim = other.max_bdim;
 self.data = malloc(self.max_bdim);
 memmove(self.data, other.data, other.max_bdim);
 return self;
}




static str_t str_ini_cstr(char* cstr){
 str_t self;
 self.bdim = strlen(cstr);
 self.max_bdim = ({ typeof(0x200) _a=(0x200); typeof(self.bdim) _b=(self.bdim); _a<_b ? _b : _a; });
 self.data = malloc(self.max_bdim);
 memcpy(self.data, cstr, self.bdim);
 return self;
}





static str_t str_ini_bytes(i64 bdim, u8* data){
 str_t self;
 self.bdim = bdim;
 self.max_bdim = ({ typeof(0x200) _a=(0x200); typeof(self.bdim) _b=(self.bdim); _a<_b ? _b : _a; });
 self.data = malloc(self.max_bdim);
 memcpy(self.data, data, self.bdim);
 return self;
}



static void str_end(str_t* str){
 if(str==
# 1894 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
        ((void *)0)
# 1894 "/home/da/google/linux/etale/mathisart/mathisart4.h"
            ) return;
 free(str->data);
 *str=(str_t){0x00};
}

static i64 str_bdim( str_t self){ return self.bdim; }
static i64 str_max_bdim(str_t self){ return self.max_bdim; }

static void str_meta( str_t self){ printf("\x1b[34mstr_t  \x1b[32m%'ld\x1b[91m/\x1b[31m%'ld \x1b[0mbdim  \x1b[37m%016lx \x1b[0mdata\n", str_bdim(self), str_max_bdim(self), (u64)self.data); }
static void str_show(str_t self){
 str_show_range(self, 0, -1);
}
static void str_show_range(str_t self, i64 idx_ini,i64 idx_end){
 strran_t ran = str__pythonic_range(idx_ini, idx_end, self.bdim);
 for(i64 (idx)=(ran.ini); (idx)<(ran.end); ++(idx))
  putchar(self.data[idx]);
}




static __inline strran_t str__pythonic_range(i64 idx_ini,i64 idx_end, i64 bdim){
 idx_ini = ({ typeof(bdim) _a=(bdim); typeof(idx_ini) _b=(idx_ini); _a<_b ? _a : _b; });
 idx_end = ({ typeof(bdim) _a=(bdim); typeof(idx_end) _b=(idx_end); _a<_b ? _a : _b; });
 if(idx_ini<0) idx_ini = bdim+idx_ini+1;
 if(idx_end<0) idx_end = bdim+idx_end+1;
 idx_ini = ({ typeof(0) _a=(0); typeof(idx_ini) _b=(idx_ini); _a<_b ? _b : _a; });
 idx_end = ({ typeof(0) _a=(0); typeof(idx_end) _b=(idx_end); _a<_b ? _b : _a; });
 idx_ini = ({ typeof(idx_ini) _a=(idx_ini); typeof(idx_end) _b=(idx_end); _a<_b ? _a : _b; });
 idx_end = ({ typeof(idx_ini) _a=(idx_ini); typeof(idx_end) _b=(idx_end); _a<_b ? _b : _a; });


 return (strran_t){ini:idx_ini, end:idx_end};
}




static __inline void str__grow_maybe(str_t* self){
 if(self->bdim <= self->max_bdim) return;
 str__grow(self);
}




static __inline void str__drop_maybe(str_t* self){
 int flag0 = (4*self->bdim) > self->max_bdim;
 int flag1 = self->max_bdim < (2*0x200);
 if(flag0||flag1) return;
 str__drop(self);
}




static __inline void str__grow(str_t* self){
 self->max_bdim = 2*({ typeof(self->bdim) _a=(self->bdim); typeof(self->max_bdim) _b=(self->max_bdim); _a<_b ? _b : _a; });
 self->data = realloc(self->data, self->max_bdim);
}




static __inline void str__drop(str_t* self){
 self->max_bdim = ({ typeof(0x200) _a=(0x200); typeof(self->max_bdim/2) _b=(self->max_bdim/2); _a<_b ? _b : _a; });
 self->data = realloc(self->data, self->max_bdim);
}



static void print(char* fmt_cstr, ...){
 va_list args; 
# 1966 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              __builtin_va_start(
# 1966 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              args
# 1966 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              ,
# 1966 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              fmt_cstr
# 1966 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              )
# 1966 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                      ;
 str_t str = str__vfmt(fmt_cstr, args);
 
# 1968 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
__builtin_va_end(
# 1968 "/home/da/google/linux/etale/mathisart/mathisart4.h"
args
# 1968 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
)
# 1968 "/home/da/google/linux/etale/mathisart/mathisart4.h"
            ;

 write(
# 1970 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
      1
# 1970 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                   , str.data, str.bdim);
 str_end(&str);
}
# 1989 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static __inline str_t str_fmt(char* fmt_cstr, ...){
 va_list args; 
# 1990 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              __builtin_va_start(
# 1990 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              args
# 1990 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              ,
# 1990 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              fmt_cstr
# 1990 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              )
# 1990 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                      ;
 str_t str = str__vfmt(fmt_cstr, args);
 
# 1992 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
__builtin_va_end(
# 1992 "/home/da/google/linux/etale/mathisart/mathisart4.h"
args
# 1992 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
)
# 1992 "/home/da/google/linux/etale/mathisart/mathisart4.h"
            ;
 return str;
}



static const u64 STR_VFMT_POW10[20] = {1ull,10ull,100ull,1000ull,10000ull,100000ull,1000000ull,10000000ull,100000000ull,1000000000ull,10000000000ull,100000000000ull,1000000000000ull,10000000000000ull,100000000000000ull,1000000000000000ull,10000000000000000ull,100000000000000000ull,1000000000000000000ull,10000000000000000000ull};
static str_t str__vfmt(char* fmt, va_list args){
 str_t str = str_ini();
 str_t val = str_ini();

 while(*fmt){
  if(*fmt != '%'){
   str_push_byte(&str, *fmt++);
   continue;
  }
  ++fmt;

  int flag_plus = 0;
  int flag_comma = 0;
  int flag_zero = 0;
  int flag_minus = 0;
  i64 cstr_bdim = -1;

  if(*fmt=='+'){ ++fmt; flag_plus = 1; }
  if(*fmt==','){ ++fmt; flag_comma = 1; }
  if(*fmt=='0'){ ++fmt; flag_zero = 1; }
  if(*fmt=='-'){ ++fmt; flag_minus = 1; }

  i32 width_int = 0;
  i32 width_frac = 0;
  i32 exponent = 0;
  while(({ typeof(*fmt) _x=(*fmt); typeof(*fmt) _a=(0x30); typeof(*fmt) _b=(0x39+1); (_a<=_x && _x< _b); }))
   width_int = width_int*STR_VFMT_POW10[exponent++] + (*fmt++-0x30);
  if(*fmt=='.'){
   ++fmt;
   i32 exponent = 0;
   while(({ typeof(*fmt) _x=(*fmt); typeof(*fmt) _a=(0x30); typeof(*fmt) _b=(0x39+1); (_a<=_x && _x< _b); }))
    width_frac = width_frac*STR_VFMT_POW10[exponent++] + (*fmt++-0x30);
  }

  if(*fmt=='*'){
   ++fmt;
   cstr_bdim = 
# 2035 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              __builtin_va_arg(
# 2035 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              args
# 2035 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              ,
# 2035 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              i64
# 2035 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              )
# 2035 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                              ;
  }

  char fmt1[0x100]={0x00};

  if(*fmt=='f'){
   snprintf(fmt1,sizeof(fmt1)-1, "%%%s%s%d.%df", flag_plus?"+":"", flag_comma?"'":"", width_int,width_frac);
   f64 arg = 
# 2042 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
             __builtin_va_arg(
# 2042 "/home/da/google/linux/etale/mathisart/mathisart4.h"
             args
# 2042 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
             ,
# 2042 "/home/da/google/linux/etale/mathisart/mathisart4.h"
             f64
# 2042 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
             )
# 2042 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             ;
   val.bdim = snprintf((char*)val.data,val.max_bdim, fmt1, arg);
   str_push(&str, val);
   ++fmt;

  }else if(*fmt=='x'){
   char* fmt2 = flag_zero ? "%%%s0%dlx" : "%%%s%dlx";
   snprintf(fmt1,sizeof(fmt1)-1, fmt2, flag_comma?"'":"", width_int);
   u64 arg = 
# 2050 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
             __builtin_va_arg(
# 2050 "/home/da/google/linux/etale/mathisart/mathisart4.h"
             args
# 2050 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
             ,
# 2050 "/home/da/google/linux/etale/mathisart/mathisart4.h"
             u64
# 2050 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
             )
# 2050 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             ;
   val.bdim = snprintf((char*)val.data,val.max_bdim, fmt1, arg);
   str_push(&str, val);
   ++fmt;

  }else if(*fmt=='d'){
   i64 arg = 
# 2056 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
             __builtin_va_arg(
# 2056 "/home/da/google/linux/etale/mathisart/mathisart4.h"
             args
# 2056 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
             ,
# 2056 "/home/da/google/linux/etale/mathisart/mathisart4.h"
             i64
# 2056 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
             )
# 2056 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             ;
   i64 neg = 0<arg ? -arg : arg;
   int ddim = flag_comma ? ddimc_i64(arg) : ddim_i64(arg);
   int ldim = ({ typeof(width_int) _a=(width_int); typeof(ddim) _b=(ddim); _a<_b ? _b : _a; }); if(0<cstr_bdim) ldim = ({ typeof(ldim) _a=(ldim); typeof(cstr_bdim) _b=(cstr_bdim); _a<_b ? _b : _a; });
   str_push_bytes1(&str, ldim, 0x20);

   if(flag_comma){
    for(i32 (i)=(0); (i)<(ddim - (int)(arg<0)); ++(i)){
     if((i+1)%4){ str.data[str.bdim-1 - i] = 0x30 - neg%10; neg /= 10; }
     else{ str.data[str.bdim-1 - i] = 0x2c; }
    }
   }else{
    for(i32 (i)=(0); (i)<(ddim - (int)(arg<0)); ++(i)){
     str.data[str.bdim-1 - i] = 0x30 - neg%10;
     neg /= 10;
    }
   }

   if(flag_zero){
    for(i32 (i)=(ddim - (int)(arg<0)); (i)<(ldim); ++(i))
     str.data[str.bdim-1 - i] = 0x30;
    if(arg<0) str.data[str.bdim-1 - ldim+1] = 0x2d;
   }else
    if(arg<0) str.data[str.bdim-1 - ddim+1] = 0x2d;

   ++fmt;

  }else if(*fmt=='b'){
   val.bdim = ({ typeof(0) _a=(0); typeof(width_int) _b=(width_int); _a<_b ? _b : _a; });
   if(width_int==64){ u64 arg=
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             __builtin_va_arg(
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             args
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             ,
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             u64
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             )
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                             ; memcpy(val.data,({ u64 _x=(u64) (arg); char* _d=
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               __builtin_alloca (
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               (8*sizeof(u64))
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               )
# 2085 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               ; for(i32 (i)=(0); (i)<((8*sizeof(u64)) /4); ++(i)) ((u32*)_d)[i] = U4_TO_ASCIIBINBE[(_x>>((8*sizeof(u64)) -4*(i+1))) & 0b1111]; _d[(8*sizeof(u64))] =0x00; _d; }), val.bdim); }
   if(width_int==32){ u32 arg=
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             __builtin_va_arg(
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             args
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             ,
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             u32
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             )
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                             ; memcpy(val.data,({ u32 _x=(u32) (arg); char* _d=
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               __builtin_alloca (
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               (8*sizeof(u32))
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               )
# 2086 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               ; for(i32 (i)=(0); (i)<((8*sizeof(u32)) /4); ++(i)) ((u32*)_d)[i] = U4_TO_ASCIIBINBE[(_x>>((8*sizeof(u32)) -4*(i+1))) & 0b1111]; _d[(8*sizeof(u32))] =0x00; _d; }), val.bdim); }
   if(width_int==16){ u16 arg=
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             __builtin_va_arg(
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             args
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             ,
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             int
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             )
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                             ; memcpy(val.data,({ u16 _x=(u16) (arg); char* _d=
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               __builtin_alloca (
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               (8*sizeof(u16))
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               )
# 2087 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               ; for(i32 (i)=(0); (i)<((8*sizeof(u16)) /4); ++(i)) ((u32*)_d)[i] = U4_TO_ASCIIBINBE[(_x>>((8*sizeof(u16)) -4*(i+1))) & 0b1111]; _d[(8*sizeof(u16))] =0x00; _d; }), val.bdim); }
   if(width_int== 8){ u8 arg=
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             __builtin_va_arg(
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             args
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             ,
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             int
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             )
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                             ; memcpy(val.data,({ u8 _x=(u8) (arg); char* _d=
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               __builtin_alloca (
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               (8*sizeof(u8))
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               )
# 2088 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               ; for(i32 (i)=(0); (i)<((8*sizeof(u8)) /4); ++(i)) ((u32*)_d)[i] = U4_TO_ASCIIBINBE[(_x>>((8*sizeof(u8)) -4*(i+1))) & 0b1111]; _d[(8*sizeof(u8))] =0x00; _d; }), val.bdim); }
   else{ u32 arg=
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             __builtin_va_arg(
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             args
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             ,
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                             u32
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             )
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                             ; memcpy(val.data,({ u32 _x=(u32) (arg); char* _d=
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               __builtin_alloca (
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               (8*sizeof(u32))
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                               )
# 2089 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                               ; for(i32 (i)=(0); (i)<((8*sizeof(u32)) /4); ++(i)) ((u32*)_d)[i] = U4_TO_ASCIIBINBE[(_x>>((8*sizeof(u32)) -4*(i+1))) & 0b1111]; _d[(8*sizeof(u32))] =0x00; _d; }), val.bdim); }
   str_push(&str, val);
   ++fmt;




  }else if(*fmt=='s'){
   snprintf(fmt1,sizeof(fmt1)-1, "%%%s%ds", flag_minus?"-":"", width_int);
   str_t arg = 
# 2098 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              __builtin_va_arg(
# 2098 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              args
# 2098 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              ,
# 2098 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              str_t
# 2098 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              )
# 2098 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                ;
   val.bdim = snprintf((char*)val.data,val.max_bdim, fmt1, arg.data);
   str_push(&str, val);
   ++fmt;

  }else if(*fmt=='c'){
   char* arg = 
# 2104 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              __builtin_va_arg(
# 2104 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              args
# 2104 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              ,
# 2104 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              char*
# 2104 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              )
# 2104 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                ;
   if(cstr_bdim<0){
    snprintf(fmt1,sizeof(fmt1)-1, "%%%s%ds", flag_minus?"-":"", width_int);
    val.bdim = snprintf((char*)val.data,val.max_bdim, fmt1, arg);
   }else{
    snprintf(fmt1,sizeof(fmt1)-1, "%%%s%d.*s", flag_minus?"-":"", width_int);
    val.bdim = snprintf((char*)val.data,val.max_bdim, fmt1, cstr_bdim,arg);
   }
   str_push(&str, val);
   ++fmt;

  }else{
   do{ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2116,__func__); printf(""); putchar(0x0a); }while(0);
   return str;
  }
 }

 str_end(&val);
 return str;
}


static str_t str_slice(str_t src, i64 idx_ini,i64 idx_end){
 strran_t ran = str__pythonic_range(idx_ini, idx_end, src.bdim);

 i64 bdim = ran.end - ran.ini;
 str_t sliced = str_ini_bdim(bdim);
 memcpy(sliced.data, src.data + ran.ini, bdim);
 return sliced;
}


static __inline void str_grow(str_t* self, i64 bdim){
 self->bdim += bdim;
 str__grow_maybe(self);
}


static void str_push(str_t* self, str_t other){
 i64 bdim_old = self->bdim;
 str_grow(self, other.bdim);
 memmove(self->data + bdim_old, other.data, other.bdim);
}


static void str_push_fmt(str_t* self, char* fmt_cstr, ...){
 va_list args; 
# 2150 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              __builtin_va_start(
# 2150 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              args
# 2150 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              ,
# 2150 "/home/da/google/linux/etale/mathisart/mathisart4.h"
              fmt_cstr
# 2150 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
              )
# 2150 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                      ;
 str_t str = str__vfmt(fmt_cstr, args);
 
# 2152 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
__builtin_va_end(
# 2152 "/home/da/google/linux/etale/mathisart/mathisart4.h"
args
# 2152 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
)
# 2152 "/home/da/google/linux/etale/mathisart/mathisart4.h"
            ;

 str_push(self, str);
 str_end(&str);
}


static void str_push_bytes(str_t* self, i64 bdim,u8* data){
 i64 bdim_old = self->bdim;
 str_grow(self, bdim);
 memmove(self->data + bdim_old, data, bdim);
}


static void str_push_bytes1(str_t* self, i64 bdim,u8 byte){
 i64 bdim_old = self->bdim;
 str_grow(self, bdim);
 memset(self->data + bdim_old, byte, bdim);
}


static void str_push_cstr(str_t* self, char* cstr){
 i64 bdim_old = self->bdim;
 i64 bdim = strlen(cstr);
 str_grow(self, bdim);
 memmove(self->data + bdim_old, cstr, bdim);
}


static void str_push_byte(str_t* self, u8 byte){
 str_grow(self, 1);
 self->data[self->bdim - 1] = byte;
}


static void str_prepend(str_t* self, str_t other){
 i64 bdim_old = self->bdim;
 str_grow(self, other.bdim);
 memmove(self->data+other.bdim, self->data, bdim_old);
 memmove(self->data, other.data, other.bdim);
}


static void str_trim(str_t* self, i64 idx_ini,i64 idx_end){
 strran_t ran = str__pythonic_range(idx_ini, idx_end, self->bdim);
 memmove(self->data + ran.ini, self->data + ran.end, self->bdim - ran.end);

 self->bdim -= ran.end - ran.ini;
 str__drop_maybe(self);
}


static void str_clear(str_t* self){
 self->bdim = 0;
 str__drop_maybe(self);
}


static void str_put(str_t* self, str_t* other, i64 idx){}


static void str_del(str_t* self, i64 idim){}


static str_t** str_split(str_t* self, u8 splitter){ return 
# 2216 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                        ((void *)0)
# 2216 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                            ; }


static void str_copy(str_t* self, str_t* other){
 self->bdim = ({ typeof(self->bdim) _a=(self->bdim); typeof(other->bdim) _b=(other->bdim); _a<_b ? _b : _a; });
 str__grow_maybe(self);

 memmove(self->data, other->data, other->bdim);
}


static void str_copy_range(str_t* self, str_t* other, i64 idx_ini,i64 idx_end){
 strran_t ran = str__pythonic_range(idx_ini, idx_end, other->bdim);
 i64 other_bdim = ran.end - ran.ini;

 self->bdim = ({ typeof(self->bdim) _a=(self->bdim); typeof(other_bdim) _b=(other_bdim); _a<_b ? _b : _a; });
 str__grow_maybe(self);

 memmove(self->data, other->data + ran.ini, other_bdim);
}
# 2275 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 3 4

# 22 "/usr/include/x86_64-linux-gnu/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 173 "/usr/include/dirent.h" 3 4
extern struct dirent64 *readdir64 (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__deprecated__));
# 201 "/usr/include/dirent.h" 3 4
extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
  __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__deprecated__));




extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 245 "/usr/include/dirent.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 246 "/usr/include/dirent.h" 2 3 4
# 255 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 278 "/usr/include/dirent.h" 3 4
extern int scandir64 (const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (const struct dirent64 *),
        int (*__cmp) (const struct dirent64 **,
        const struct dirent64 **))
     __attribute__ ((__nonnull__ (1, 2)));
# 293 "/usr/include/dirent.h" 3 4
extern int scandirat (int __dfd, const char *__restrict __dir,
        struct dirent ***__restrict __namelist,
        int (*__selector) (const struct dirent *),
        int (*__cmp) (const struct dirent **,
        const struct dirent **))
     __attribute__ ((__nonnull__ (2, 3)));
# 315 "/usr/include/dirent.h" 3 4
extern int scandirat64 (int __dfd, const char *__restrict __dir,
   struct dirent64 ***__restrict __namelist,
   int (*__selector) (const struct dirent64 *),
   int (*__cmp) (const struct dirent64 **,
          const struct dirent64 **))
     __attribute__ ((__nonnull__ (2, 3)));




extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 340 "/usr/include/dirent.h" 3 4
extern int alphasort64 (const struct dirent64 **__e1,
   const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 353 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
# 370 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));






extern int versionsort (const struct dirent **__e1,
   const struct dirent **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 396 "/usr/include/dirent.h" 3 4
extern int versionsort64 (const struct dirent64 **__e1,
     const struct dirent64 **__e2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





# 1 "/usr/include/x86_64-linux-gnu/bits/dirent_ext.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/dirent_ext.h" 3 4






extern __ssize_t getdents64 (int __fd, void *__buffer, size_t __length)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



# 405 "/usr/include/dirent.h" 2 3 4
# 2276 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2



# 2278 "/home/da/google/linux/etale/mathisart/mathisart4.h"
typedef struct{
 u64 d_ino;
 u64 d_off;
 unsigned short d_reclen;
 unsigned char d_type;
 char d_name[];
}linux_dirent64_t;
# 2293 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static char* path_ext(char* path){
 i32 dot_pos = -1;
 char* it = path;
 while(*it!=0x00){
  if(*it=='.') dot_pos = it - path;
  ++it;
 }
 if( dot_pos==-1) return "";
 else if(dot_pos== 0) return "";
 else if(dot_pos==it-path-1) return "";
 else return path+dot_pos;
}

static int path_cmp(const void* a, const void* b){ return strcmp(*(char**)a,*(char**)b); }

static __inline int path_is_dotdir(char* path_cstr){
 u32 cond0 = 0;
 u32 cond1 = 0;
 i64 path_bdim = strlen(path_cstr) + 1;
 if(path_bdim>=2) cond0 |= (path_cstr[0]==0x2e & path_cstr[1]==0x00);
 if(path_bdim>=3) cond1 |= (path_cstr[0]==0x2e & path_cstr[1]==0x2e & path_cstr[2]==0x00);
 return cond0 | cond1;
}
static __inline int path_endswith(char* path_cstr, char* end_cstr){
 i64 path_bdim = strlen(path_cstr)+1;
 i64 end_bdim = strlen(end_cstr) +1; if(path_bdim<=end_bdim) return 0;
 return 0==memcmp(path_cstr + path_bdim-end_bdim, end_cstr, end_bdim);
}
static __inline int path_endswith1(i64 path_bdim,char* path_cstr, i64 end_bdim,char* end_cstr){
 if(path_bdim<=end_bdim) return 0;
 return 0==memcmp(path_cstr + path_bdim-end_bdim, end_cstr, end_bdim);
}


static char** dirlist(char* dirpath_cstr){
 char** dirpaths = ({ vhead_t* _h = malloc(sizeof(vhead_t) + sizeof(char*)*0x100); _h->idim = 0; _h->idimmax = 0x100; _h->code = 0xbbd695d541422d86ull; (void*)(&_h[1]); });
 i64 dirpath_idim = strlen(dirpath_cstr);
 int dirpath_nis_root = memcmp(dirpath_cstr,"/",2) != 0;

 u8 data[0x1000];
 int fd = open(dirpath_cstr, 
# 2333 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                            00
# 2333 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                    |
# 2333 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                     0200000 
# 2333 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                           ); if(fd<0) return dirpaths;
 for(;;){
  i64 getdents_bdim = syscall(
# 2335 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             217
# 2335 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                           , fd, data,0x1000); if(getdents_bdim<=0){ if(getdents_bdim==-1) do{ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2335,__func__); printf(""); putchar(0x0a); }while(0); break; }
  for(i64 bpos=0; bpos<getdents_bdim;){
   linux_dirent64_t* dirent = (linux_dirent64_t*)(data+bpos); bpos+=dirent->d_reclen;


   char* dirent_path = dirent->d_name;

   char* path = ({ vhead_t* _h = malloc(sizeof(vhead_t) + sizeof(char)*0x100); _h->idim = 0; _h->idimmax = 0x100; _h->code = 0xbbd695d541422d86ull; (void*)(&_h[1]); });
   do{ i64 _idx = (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim); i64 _n = _idx+(dirpath_idim); ((((vhead_t*)((void*)((path)) - sizeof(vhead_t)))->idimmax)<=(2*_n+1) ? ({ i64 _idimmax = ((2*_n+1)); vhead_t* _h = realloc(((vhead_t*)((void*)(((path))) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(((path))))*_idimmax); (((path))) = (void*)(&_h[1]); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0); for(i64 _i=0; _i<_n; ++_i) (path)[_idx+_i]=(dirpath_cstr)[_i]; (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim) = _n; }while(0);
   if(dirpath_nis_root)
    do{ i64 _idx = (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim); i64 _n = _idx+(1); ((((vhead_t*)((void*)((path)) - sizeof(vhead_t)))->idimmax)<=(2*_n+1) ? ({ i64 _idimmax = ((2*_n+1)); vhead_t* _h = realloc(((vhead_t*)((void*)(((path))) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(((path))))*_idimmax); (((path))) = (void*)(&_h[1]); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0); for(i64 _i=0; _i<_n; ++_i) (path)[_idx+_i]=("/")[_i]; (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim) = _n; }while(0);
   do{ i64 _idx = (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim); i64 _n = _idx+(strlen(dirent_path)+1); ((((vhead_t*)((void*)((path)) - sizeof(vhead_t)))->idimmax)<=(2*_n+1) ? ({ i64 _idimmax = ((2*_n+1)); vhead_t* _h = realloc(((vhead_t*)((void*)(((path))) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(((path))))*_idimmax); (((path))) = (void*)(&_h[1]); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0); for(i64 _i=0; _i<_n; ++_i) (path)[_idx+_i]=(dirent_path)[_i]; (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim) = _n; }while(0);
   (((((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idimmax)<=(((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim) ? ({ i64 _idimmax = (2*(((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idimmax)+1); vhead_t* _h = realloc(((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(dirpaths))*_idimmax); (dirpaths) = (void*)(&_h[1]); (((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0), dirpaths[(((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim)++] = path);
  }
 }
 do{ if((i64)(close(fd))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2350,__func__, 
# 2350 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 2350 "/home/da/google/linux/etale/mathisart/mathisart4.h"
,strerror(
# 2350 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 2350 "/home/da/google/linux/etale/mathisart/mathisart4.h"
)); printf(""); putchar(0x0a); } }while(0);
 return dirpaths;
}

static char** dirlist_ext(char* dirpath_cstr,char* ext){
 char** dirpaths = ({ vhead_t* _h = malloc(sizeof(vhead_t) + sizeof(char*)*0x100); _h->idim = 0; _h->idimmax = 0x100; _h->code = 0xbbd695d541422d86ull; (void*)(&_h[1]); });
 i64 dirpath_idim = strlen(dirpath_cstr);
 int dirpath_nis_root = memcmp(dirpath_cstr,"/",2) != 0;

 u8 data[0x1000];
 int fd = open(dirpath_cstr, 
# 2360 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                            00
# 2360 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                    |
# 2360 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                     0200000 
# 2360 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                           ); if(fd<0) return dirpaths;
 for(;;){
  i64 getdents_bdim = syscall(
# 2362 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                             217
# 2362 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                           , fd, data,0x1000); if(getdents_bdim<=0){ if(getdents_bdim==-1) do{ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2362,__func__); printf(""); putchar(0x0a); }while(0); break; }

  for(i64 bpos=0; bpos<getdents_bdim;){
   linux_dirent64_t* dirent = (linux_dirent64_t*)(data+bpos); bpos+=dirent->d_reclen;
   char* dirent_path = dirent->d_name;
   if(ext!=
# 2367 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
          ((void *)0) 
# 2367 "/home/da/google/linux/etale/mathisart/mathisart4.h"
               && !path_endswith(dirent_path,ext)) continue;

   char* path = ({ vhead_t* _h = malloc(sizeof(vhead_t) + sizeof(char)*0x100); _h->idim = 0; _h->idimmax = 0x100; _h->code = 0xbbd695d541422d86ull; (void*)(&_h[1]); });
   do{ i64 _idx = (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim); i64 _n = _idx+(dirpath_idim); ((((vhead_t*)((void*)((path)) - sizeof(vhead_t)))->idimmax)<=(2*_n+1) ? ({ i64 _idimmax = ((2*_n+1)); vhead_t* _h = realloc(((vhead_t*)((void*)(((path))) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(((path))))*_idimmax); (((path))) = (void*)(&_h[1]); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0); for(i64 _i=0; _i<_n; ++_i) (path)[_idx+_i]=(dirpath_cstr)[_i]; (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim) = _n; }while(0);
   if(dirpath_nis_root)
    do{ i64 _idx = (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim); i64 _n = _idx+(1); ((((vhead_t*)((void*)((path)) - sizeof(vhead_t)))->idimmax)<=(2*_n+1) ? ({ i64 _idimmax = ((2*_n+1)); vhead_t* _h = realloc(((vhead_t*)((void*)(((path))) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(((path))))*_idimmax); (((path))) = (void*)(&_h[1]); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0); for(i64 _i=0; _i<_n; ++_i) (path)[_idx+_i]=("/")[_i]; (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim) = _n; }while(0);
   do{ i64 _idx = (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim); i64 _n = _idx+(strlen(dirent_path)+1); ((((vhead_t*)((void*)((path)) - sizeof(vhead_t)))->idimmax)<=(2*_n+1) ? ({ i64 _idimmax = ((2*_n+1)); vhead_t* _h = realloc(((vhead_t*)((void*)(((path))) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(((path))))*_idimmax); (((path))) = (void*)(&_h[1]); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(((path))) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0); for(i64 _i=0; _i<_n; ++_i) (path)[_idx+_i]=(dirent_path)[_i]; (((vhead_t*)((void*)(path) - sizeof(vhead_t)))->idim) = _n; }while(0);
   (((((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idimmax)<=(((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim) ? ({ i64 _idimmax = (2*(((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idimmax)+1); vhead_t* _h = realloc(((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(dirpaths))*_idimmax); (dirpaths) = (void*)(&_h[1]); (((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0), dirpaths[(((vhead_t*)((void*)(dirpaths) - sizeof(vhead_t)))->idim)++] = path);
  }
 }
 do{ if((i64)(close(fd))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2377,__func__, 
# 2377 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 2377 "/home/da/google/linux/etale/mathisart/mathisart4.h"
,strerror(
# 2377 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
(*__errno_location ())
# 2377 "/home/da/google/linux/etale/mathisart/mathisart4.h"
)); printf(""); putchar(0x0a); } }while(0);
 return dirpaths;
}


typedef struct{
 i32 idim;
 i32 bdim;
 u32* data;
}kmask_t;

kmask_t kmask_ini(u32 max_k){
 kmask_t kb = (kmask_t){0x00};
 kb.idim = max_k;
 kb.bdim = ({ u32 _a=(u32)(kb.idim); u32 _b=(u32)(8); _a/_b + (_a%_b ? 1 : 0); });
 kb.data = malloc(kb.bdim); memset(kb.data,0x00,kb.bdim);
 return kb;
}
void kmask_end(kmask_t* kb){ if(kb==
# 2395 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                    ((void *)0)
# 2395 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                        ) return; free(kb->data); memset(kb,0x00,sizeof(kmask_t)); }
int kmask_get(kmask_t* kb, i64 idx){ return bitget(kb->data, idx); }
void kmask_set(kmask_t* kb, i64 idx){ bitset(kb->data, idx); }
void kmask_del(kmask_t* kb, i64 idx){ bitdel(kb->data, idx); }

void kmask_show(kmask_t* kb){
 printf("  \x1b[34mkmask_t  \x1b[0m");
 for(i32 (i)=(0); (i)<(kb->idim); ++(i))
  if(kmask_get(kb, i)) printf("\x1b[32m%02d\x1b[0m ", i);
 putchar(0x0a);
}
# 2415 "/home/da/google/linux/etale/mathisart/mathisart4.h"
# 1 "/usr/include/x86_64-linux-gnu/sys/wait.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4

# 36 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 27 "/usr/include/signal.h" 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/signum.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/signum.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/signum-generic.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/signum.h" 2 3 4
# 31 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h" 1 3 4








# 8 "/usr/include/x86_64-linux-gnu/bits/types/sig_atomic_t.h" 3 4
typedef __sig_atomic_t sig_atomic_t;
# 33 "/usr/include/signal.h" 2 3 4
# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/__sigval_t.h" 3 4
union sigval
{
  int sival_int;
  void *sival_ptr;
};

typedef union sigval __sigval_t;
# 7 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-arch.h" 1 3 4
# 17 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 2 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/types/siginfo_t.h" 3 4
typedef struct
  {
    int si_signo;

    int si_errno;

    int si_code;





    int __pad0;


    union
      {
 int _pad[((128 / sizeof (int)) - 4)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     __sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     __sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
    
     short int si_addr_lsb;
     union
       {

  struct
    {
      void *_lower;
      void *_upper;
    } _addr_bnd;

  __uint32_t _pkey;
       } _bounds;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;



 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;

      } _sifields;
  } siginfo_t ;
# 58 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
enum
{
  SI_ASYNCNL = -60,
  SI_DETHREAD = -7,

  SI_TKILL,
  SI_SIGIO,

  SI_ASYNCIO,
  SI_MESGQ,
  SI_TIMER,





  SI_QUEUE,
  SI_USER,
  SI_KERNEL = 0x80
# 66 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 3 4
};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK,

  ILL_BADIADDR

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB,

  FPE_FLTUNK = 14,

  FPE_CONDTRAP

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR,

  SEGV_BNDERR,

  SEGV_PKUERR,

  SEGV_ACCADI,

  SEGV_ADIDERR,

  SEGV_ADIPERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};




enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE,

  TRAP_BRANCH,

  TRAP_HWBKPT,

  TRAP_UNK

};




enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};





# 1 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts-arch.h" 1 3 4
# 210 "/usr/include/x86_64-linux-gnu/bits/siginfo-consts.h" 2 3 4
# 59 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 1 3 4
# 16 "/usr/include/x86_64-linux-gnu/bits/types/sigval_t.h" 3 4
typedef __sigval_t sigval_t;
# 63 "/usr/include/signal.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 1 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 2 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/types/sigevent_t.h" 3 4
typedef struct sigevent
  {
    __sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 4)];



 __pid_t _tid;

 struct
   {
     void (*_function) (__sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;
# 67 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sigevent-consts.h" 3 4
enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4


};
# 68 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));






extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
# 112 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));



extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));



extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 151 "/usr/include/signal.h" 3 4
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
# 170 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
# 185 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (const sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3)));




# 1 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 227 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));







extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
# 286 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[(64 + 1)];
extern const char *const sys_siglist[(64 + 1)];



# 1 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t __glibc_reserved1[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short __glibc_reserved1[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};
# 123 "/usr/include/x86_64-linux-gnu/bits/sigcontext.h" 3 4
struct _fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};

struct sigcontext
{
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
      struct _fpstate * fpstate;
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
};



struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t __glibc_reserved1[2];
  __uint64_t __glibc_reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};
# 292 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 302 "/usr/include/signal.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 3 4
# 1 "/home/da/gcc-8.3.0/lib/gcc/x86_64-pc-linux-gnu/8.3.0/include/stddef.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/types/stack_t.h" 2 3 4


typedef struct
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 304 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 1 3 4
# 37 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
__extension__ typedef long long int greg_t;
# 46 "/usr/include/x86_64-linux-gnu/sys/ucontext.h" 3 4
typedef greg_t gregset_t[23];



enum
{
  REG_R8 = 0,

  REG_R9,

  REG_R10,

  REG_R11,

  REG_R12,

  REG_R13,

  REG_R14,

  REG_R15,

  REG_RDI,

  REG_RSI,

  REG_RBP,

  REG_RBX,

  REG_RDX,

  REG_RAX,

  REG_RCX,

  REG_RSP,

  REG_RIP,

  REG_EFL,

  REG_CSGSFS,

  REG_ERR,

  REG_TRAPNO,

  REG_OLDMASK,

  REG_CR2

};


struct _libc_fpxreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
  unsigned short int __glibc_reserved1[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
};

struct _libc_fpstate
{

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t __glibc_reserved1[24];
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
    __extension__ unsigned long long __reserved1 [8];
} mcontext_t;


typedef struct ucontext_t
  {
    unsigned long int uc_flags;
    struct ucontext_t *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
    __extension__ unsigned long long int __ssp[4];
  } ucontext_t;
# 307 "/usr/include/signal.h" 2 3 4







extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

# 1 "/usr/include/x86_64-linux-gnu/bits/sigstack.h" 1 3 4
# 317 "/usr/include/signal.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/ss_flags.h" 3 4
enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 318 "/usr/include/signal.h" 2 3 4



extern int sigaltstack (const stack_t *__restrict __ss,
   stack_t *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));




# 1 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/types/struct_sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };
# 328 "/usr/include/signal.h" 2 3 4







extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));






extern int sighold (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern int sigrelse (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern int sigignore (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__ , __leaf__));






# 1 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 1 3 4
# 31 "/usr/include/x86_64-linux-gnu/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__ , __leaf__));
# 360 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));





# 1 "/usr/include/x86_64-linux-gnu/bits/signal_ext.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/signal_ext.h" 3 4
extern int tgkill (__pid_t __tgid, __pid_t __tid, int __signal);
# 375 "/usr/include/signal.h" 2 3 4


# 37 "/usr/include/x86_64-linux-gnu/sys/wait.h" 2 3 4
# 77 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t wait (int *__stat_loc);
# 100 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern __pid_t waitpid (__pid_t __pid, int *__stat_loc, int __options);
# 121 "/usr/include/x86_64-linux-gnu/sys/wait.h" 3 4
extern int waitid (idtype_t __idtype, __id_t __id, siginfo_t *__infop,
     int __options);






struct rusage;






extern __pid_t wait3 (int *__stat_loc, int __options,
        struct rusage * __usage) __attribute__ ((__nothrow__));




extern __pid_t wait4 (__pid_t __pid, int *__stat_loc, int __options,
        struct rusage *__usage) __attribute__ ((__nothrow__));




# 2416 "/home/da/google/linux/etale/mathisart/mathisart4.h" 2


# 2417 "/home/da/google/linux/etale/mathisart/mathisart4.h"
static pid_t exec(char* args[]){
 pid_t pid = vfork(); do{ if((i64)(pid)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2418,__func__, 
# 2418 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                      (*__errno_location ())
# 2418 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                      ,strerror(
# 2418 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                      (*__errno_location ())
# 2418 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                      )); printf(""); putchar(0x0a); } }while(0);
 if(pid==0){
  int fd = open("/dev/null", 
# 2420 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                            01
# 2420 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                    ); do{ if((i64)(fd)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2420,__func__, 
# 2420 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                        (*__errno_location ())
# 2420 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                        ,strerror(
# 2420 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                        (*__errno_location ())
# 2420 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                        )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(dup2(fd, 
# 2421 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 1
# 2421 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2421,__func__, 
# 2421 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2421 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2421 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2421 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(dup2(fd, 
# 2422 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 2
# 2422 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2422,__func__, 
# 2422 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2422 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2422 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2422 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(close(fd))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2423,__func__, 
# 2423 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2423 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2423 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2423 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(execv(args[0],args))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2424,__func__, 
# 2424 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2424 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2424 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2424 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  _exit(1);
 }else if(pid>0){

 }
 return pid;
}
static pid_t exec1(char* args[]){
 pid_t pid = vfork(); do{ if((i64)(pid)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2432,__func__, 
# 2432 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                      (*__errno_location ())
# 2432 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                      ,strerror(
# 2432 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                      (*__errno_location ())
# 2432 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                      )); printf(""); putchar(0x0a); } }while(0);
 if(pid==0){
  int fd = open("/dev/null", 
# 2434 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                            01
# 2434 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                    ); do{ if((i64)(fd)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2434,__func__, 
# 2434 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                        (*__errno_location ())
# 2434 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                        ,strerror(
# 2434 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                        (*__errno_location ())
# 2434 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                        )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(dup2(fd, 
# 2435 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 1
# 2435 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2435,__func__, 
# 2435 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2435 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2435 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2435 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(dup2(fd, 
# 2436 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 2
# 2436 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2436,__func__, 
# 2436 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2436 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2436 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2436 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(close(fd))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2437,__func__, 
# 2437 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2437 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2437 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2437 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(execv(args[0],args))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2438,__func__, 
# 2438 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2438 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2438 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2438 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  _exit(1);
 }else if(pid>0){
  do{ if((i64)(waitpid(pid,
# 2441 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 ((void *)0)
# 2441 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,0))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2441,__func__, 
# 2441 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2441 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2441 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2441 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
 }
 return pid;
}

static char* exec2(char* args[]){
 i64 txt_bdim = 0;
 i64 txt_max_bdim = 0x100000;
 char* txt_cstr = aligned_alloc(0x1000,txt_max_bdim); txt_cstr[0]=0x00;
 int pipe_fds[2]; do{ if((i64)(pipe(pipe_fds))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2450,__func__, 
# 2450 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                   (*__errno_location ())
# 2450 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                   ,strerror(
# 2450 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                   (*__errno_location ())
# 2450 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                   )); printf(""); putchar(0x0a); } }while(0);

 pid_t pid = fork(); do{ if((i64)(pid)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2452,__func__, 
# 2452 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                     (*__errno_location ())
# 2452 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                     ,strerror(
# 2452 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                     (*__errno_location ())
# 2452 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                     )); printf(""); putchar(0x0a); } }while(0);
 if(pid==0){
  int fd = open("/dev/null", 
# 2454 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                            01
# 2454 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                    ); do{ if((i64)(fd)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2454,__func__, 
# 2454 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                        (*__errno_location ())
# 2454 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                        ,strerror(
# 2454 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                        (*__errno_location ())
# 2454 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                        )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(dup2(fd, 
# 2455 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 2
# 2455 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2455,__func__, 
# 2455 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2455 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2455 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2455 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(close(fd))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2456,__func__, 
# 2456 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2456 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2456 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2456 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);

  do{ if((i64)(close(pipe_fds[0]))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2458,__func__, 
# 2458 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2458 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2458 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2458 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(dup2( pipe_fds[1], 
# 2459 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 1
# 2459 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2459,__func__, 
# 2459 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2459 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2459 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2459 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(close(pipe_fds[1]))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2460,__func__, 
# 2460 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2460 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2460 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2460 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(execv(args[0], args))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2461,__func__, 
# 2461 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2461 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2461 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2461 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  _exit(1);
 }else if(pid>0){
  do{ if((i64)(close(pipe_fds[1]))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2464,__func__, 
# 2464 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2464 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2464 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2464 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  i64 read_bdim;
  while((read_bdim = read(pipe_fds[0], txt_cstr+txt_bdim, txt_max_bdim-txt_bdim))){ do{ if((i64)(read_bdim)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2466,__func__, 
# 2466 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                                                    (*__errno_location ())
# 2466 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                                                    ,strerror(
# 2466 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                                                    (*__errno_location ())
# 2466 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                                                    )); printf(""); putchar(0x0a); } }while(0);
   txt_bdim += read_bdim;
   if(txt_bdim==txt_max_bdim){
    txt_max_bdim *= 2;
    txt_cstr = realloc(txt_cstr, txt_max_bdim);
   }
  }
  do{ if((i64)(close(pipe_fds[0]))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2473,__func__, 
# 2473 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2473 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2473 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2473 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);

 }
 return txt_cstr;
}
static str_t exec3(char* args[]){
 str_t str = str_ini_bdim(0x100000);
 int pipe_fds[2]; do{ if((i64)(pipe(pipe_fds))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2480,__func__, 
# 2480 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                   (*__errno_location ())
# 2480 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                   ,strerror(
# 2480 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                   (*__errno_location ())
# 2480 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                   )); printf(""); putchar(0x0a); } }while(0);

 pid_t pid = fork(); do{ if((i64)(pid)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2482,__func__, 
# 2482 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                     (*__errno_location ())
# 2482 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                     ,strerror(
# 2482 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                     (*__errno_location ())
# 2482 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                     )); printf(""); putchar(0x0a); } }while(0);
 if(pid==0){
  int fd = open("/dev/null", 
# 2484 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                            01
# 2484 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                    ); do{ if((i64)(fd)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2484,__func__, 
# 2484 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                        (*__errno_location ())
# 2484 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                        ,strerror(
# 2484 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                        (*__errno_location ())
# 2484 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                        )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(dup2(fd, 
# 2485 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 2
# 2485 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2485,__func__, 
# 2485 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2485 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2485 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2485 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(close(fd))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2486,__func__, 
# 2486 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2486 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2486 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2486 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);

  do{ if((i64)(close(pipe_fds[0]))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2488,__func__, 
# 2488 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2488 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2488 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2488 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(dup2( pipe_fds[1], 
# 2489 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 1
# 2489 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2489,__func__, 
# 2489 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2489 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2489 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2489 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(close(pipe_fds[1]))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2490,__func__, 
# 2490 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2490 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2490 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2490 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(execv(args[0], args))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2491,__func__, 
# 2491 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2491 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2491 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2491 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  _exit(1);
 }else if(pid>0){
  do{ if((i64)(close(pipe_fds[1]))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2494,__func__, 
# 2494 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2494 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2494 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2494 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  i64 read_bdim;
  while((read_bdim = read(pipe_fds[0], str.data+str.bdim, str.max_bdim-str.bdim))){ do{ if((i64)(read_bdim)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2496,__func__, 
# 2496 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                                                    (*__errno_location ())
# 2496 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                                                    ,strerror(
# 2496 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                                                                                    (*__errno_location ())
# 2496 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                                                                                    )); printf(""); putchar(0x0a); } }while(0);
   str.bdim += read_bdim;
   if(str.bdim==str.max_bdim)
    str__grow(&str);
  }
  do{ if((i64)(close(pipe_fds[0]))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2501,__func__, 
# 2501 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2501 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2501 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2501 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  do{ if((i64)(waitpid(pid,
# 2502 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 ((void *)0)
# 2502 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,0))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2502,__func__, 
# 2502 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2502 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2502 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2502 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
 }
 return str;
}
static pid_t exec4(char* args[]){
 pid_t pid = vfork(); do{ if((i64)(pid)==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2507,__func__, 
# 2507 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                      (*__errno_location ())
# 2507 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                      ,strerror(
# 2507 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
                      (*__errno_location ())
# 2507 "/home/da/google/linux/etale/mathisart/mathisart4.h"
                      )); printf(""); putchar(0x0a); } }while(0);
 if(pid==0){
  do{ if((i64)(execv(args[0],args))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2509,__func__, 
# 2509 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2509 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2509 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2509 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
  _exit(1);
 }else if(pid>0){
  do{ if((i64)(waitpid(pid,
# 2512 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 ((void *)0)
# 2512 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,0))==-1ll){ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  \x1b[31m%d\x1b[91m:\x1b[33m%s\x1b[0m  ", "/home/da/google/linux/etale/mathisart/mathisart4.h",2512,__func__, 
# 2512 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2512 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 ,strerror(
# 2512 "/home/da/google/linux/etale/mathisart/mathisart4.h" 3 4
 (*__errno_location ())
# 2512 "/home/da/google/linux/etale/mathisart/mathisart4.h"
 )); printf(""); putchar(0x0a); } }while(0);
 }
 return pid;
}
# 21 "nam.c" 2
# 29 "nam.c"
static void nntut(){
 printf("\n""-------------------------------------------------------------------------------------------------------------------------------\x1b[91m#\x1b[0m\n");
 print("\x1b[92m%c\x1b[0m\n", __func__);
 print("\x1b[91m- \x1b[0mn\x1b[32mj       \x1b[0m\x1b[91m= \x1b[35mf\x1b[32mj\x1b[91m[\x1b[35mSUM\x1b[91m[\x1b[31mi\x1b[91m,\x1b[92mI\x1b[32mj\x1b[91m, \x1b[0mn\x1b[31mi\x1b[91m*\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]]\x1b[0m\n");
 print("\x1b[91m- \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m=    \x1b[35mSUM\x1b[91m[\x1b[34mk\x1b[91m,\x1b[92mO\x1b[32mj\x1b[91m, \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m*\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m_\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]\x1b[0m\n");
 print("\x1b[91m- \x1b[0mfwd-prop: the \x1b[91mVALUE                  \x1b[0mn\x1b[32mj       \x1b[0mof each \x1b[91mNEURON            \x1b[0mn\x1b[32mj  \x1b[0mis ALWAYS a DOT PRODUCT (and \x1b[35mf\x1b[32mj\x1b[91m[]\x1b[0m) over \x1b[91mNEURON IN -CONECTIONS \x1b[91m{\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m} \x1b[0mfor \x1b[91mIN -NEURONS \x1b[91m{\x1b[0mn\x1b[31mi\x1b[91m} \x1b[92minto   \x1b[0mn\x1b[32mj\x1b[0m\n");
 print("\x1b[91m- \x1b[0mbwd-prop: the \x1b[91mLOSS-WEIGHT DERIVATIVE \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mw\x1b[31mi\x1b[32mj \x1b[0mof each \x1b[91mNEURON CONNECTION \x1b[0mw\x1b[31mi\x1b[32mj \x1b[0mis ALWAYS a DOT PRODUCT            over \x1b[91mNEURON OUT-CONECTIONS \x1b[91m{\x1b[0mw\x1b[32mj\x1b[34mk\x1b[91m} \x1b[0mfor \x1b[91mOUT-NEURONS \x1b[91m{\x1b[0mn\x1b[34mk\x1b[91m} \x1b[92mout of \x1b[0mn\x1b[32mj\x1b[0m\n");
 print("\x1b[91m- \x1b[0meach \x1b[92mI\x1b[32mj \x1b[0mis the set of all indices \x1b[91m{\x1b[31mi\x1b[91m} \x1b[0mfor \x1b[91mIN -NEURONS \x1b[91m{\x1b[0mn\x1b[31mi\x1b[91m} \x1b[92minto   \x1b[0mn\x1b[32mj\x1b[0m. eg. if \x1b[92mI\x1b[32m4 \x1b[0mis \x1b[91m{\x1b[31m0\x1b[91m,\x1b[31m1\x1b[91m}\x1b[0m, then n\x1b[31m0\x1b[0m,n\x1b[31m1 \x1b[0mgo   \x1b[92minto   \x1b[0mn\x1b[32m4\x1b[0m. n\x1b[31m0\x1b[0m,n\x1b[31m1 \x1b[0mcan simultaneously go   \x1b[92minto   \x1b[0mother neurons, say n\x1b[32m5\x1b[0m\n");
 print("\x1b[91m- \x1b[0meach \x1b[92mO\x1b[32mj \x1b[0mis the set of all indices \x1b[91m{\x1b[34mk\x1b[91m} \x1b[0mfor \x1b[91mOUT-NEURONS \x1b[91m{\x1b[0mn\x1b[34mk\x1b[91m} \x1b[92mout of \x1b[0mn\x1b[32mj\x1b[0m. eg. if \x1b[92mO\x1b[32m0 \x1b[0mis \x1b[91m{\x1b[34m4\x1b[91m,\x1b[34m5\x1b[91m}\x1b[0m, then n\x1b[34m4\x1b[0m,n\x1b[34m5 \x1b[0mcome \x1b[92mout of \x1b[0mn\x1b[32m0\x1b[0m. n\x1b[34m4\x1b[0m,n\x1b[34m5 \x1b[0mcan simultaneously come \x1b[92mout of \x1b[0mother neurons, say n\x1b[32m1\x1b[0m\n");
 print("\x1b[91m- \x1b[0meach factor in the summand \x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m*\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m_\x1b[0mw\x1b[31mi\x1b[32mj \x1b[0min the dot product \x1b[35mSUM\x1b[91m[\x1b[34mk\x1b[91m,\x1b[92mO\x1b[32mj\x1b[91m, \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m*\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m_\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m] \x1b[0mtriggers \x1b[35mO\x1b[91m[\x1b[92mN\x1b[91m^\x1b[0m2\x1b[91m] \x1b[0mproducts? but there are many repeated computations: this is backpropagation\n");
 putchar(0x0a);
 print("\x1b[91m- \x1b[0ma \x1b[91mneural net \x1b[0mis a \x1b[91mdirected graph\x1b[0m, where the \x1b[91mvertices \x1b[0mare \x1b[91mneurons \x1b[0mand the \x1b[91medges \x1b[0mare \x1b[91mneuron connections\x1b[0m\n");
 print("\x1b[91m- \x1b[0mthe \x1b[91mneuron connections \x1b[0mare the so-called \x1b[91mweights\x1b[0m\n");
 putchar(0x0a);
 print("\x1b[91m- \x1b[92mN                       \x1b[0mis the set of all INTEGERS in \x1b[91m[\x1b[0m0\x1b[91m..\x1b[92mN\x1b[91m)\x1b[0m, and also the number of \x1b[91mNEURONS\x1b[0m\n");
 print("\x1b[91m- \x1b[91m{\x1b[00mn\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all \x1b[91mNEURONS\x1b[0m\n");
 print("\x1b[91m- \x1b[91m{\x1b[35mf\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all \x1b[91mNEURON ACTIVATION FNS\x1b[0m\n");
 print("\x1b[91m- \x1b[91m{\x1b[92mI\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all sets of \x1b[91mNEURON IN -CONNECTION INDICES\x1b[0m, where each \x1b[92mI\x1b[32mj \x1b[0mis the set of all indices \x1b[91m{\x1b[31mi\x1b[91m} \x1b[0mfor \x1b[91mIN -NEURONS \x1b[91m{\x1b[0mn\x1b[31mi\x1b[91m} \x1b[92minto   \x1b[0mn\x1b[32mj\x1b[0m. used during fwd-prop\x1b[0m\n");
 print("\x1b[91m- \x1b[91m{\x1b[92mO\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m}          \x1b[0mis the set of all sets of \x1b[91mNEURON OUT-CONNECTION INDICES\x1b[0m, where each \x1b[92mO\x1b[32mj \x1b[0mis the set of all indices \x1b[91m{\x1b[34mk\x1b[91m} \x1b[0mfor \x1b[91mOUT-NEURONS \x1b[91m{\x1b[0mn\x1b[34mk\x1b[91m} \x1b[92mout of \x1b[0mn\x1b[32mj\x1b[0m. used during bwd-prop\x1b[0m\n");
 print("\x1b[91m- \x1b[91m{\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[31mi \x1b[91min \x1b[92mI\x1b[32mj\x1b[91m} \x1b[0mis the set of all \x1b[91mNEURON IN -CONNECTIONS \x1b[0mfrom neuron n\x1b[31mi \x1b[0mto neuron n\x1b[32mj \x1b[0m(aka. synapses, weights, parameters)\n");
 print("\x1b[91m- \x1b[91m{\x1b[0mw\x1b[32mj\x1b[34mk \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[34mk \x1b[91min \x1b[92mO\x1b[34mk\x1b[91m} \x1b[0mis the set of all \x1b[91mNEURON OUT-CONNECTIONS \x1b[0mfrom neuron n\x1b[32mj \x1b[0mto neuron n\x1b[34mk \x1b[0m(aka. synapses, weights, parameters)\n");
 print("\x1b[91m- \x1b[91m{\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[31mi \x1b[91min \x1b[92mI\x1b[32mj\x1b[91m} \x1b[0mand \x1b[91m{\x1b[0mw\x1b[32mj\x1b[34mk \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m, \x1b[34mk \x1b[91min \x1b[92mO\x1b[34mk\x1b[91m} \x1b[0mare isomorphic\n");
 print("\x1b[91m- \x1b[91m{\x1b[92mI\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m} \x1b[0mand \x1b[91m{\x1b[92mO\x1b[32mj  \x1b[91m| \x1b[32mj \x1b[91min \x1b[92mN\x1b[91m} \x1b[0mare isomorphic, via graph ops. complexity may be \x1b[35mO\x1b[91m[\x1b[0mV\x1b[91m] \x1b[0mw/ a hash table for each index set \x1b[92mI\x1b[32mj\x1b[0m/\x1b[92mO\x1b[32mj\x1b[0m, or \x1b[35mO\x1b[91m[\x1b[0mV\x1b[91m*\x1b[0mE\x1b[91m] \x1b[0mw/ an array for each index set \x1b[92mI\x1b[32mj\x1b[0m/\x1b[92mO\x1b[32mj\x1b[0m\n");
 print("\x1b[91m- \x1b[0mto FULLY SPECIFY (the topology/connectivity of) a net (feedforward-only like fc/conv/recurrent nets, or feedforward/feedback like deep boltzmann machines).\n");
 print("  it suffices to SPECIFY \x1b[92mN\x1b[0m, \x1b[35mf\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m, and \x1b[92mI\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m, OR\n");
 print("  it suffices to SPECIFY \x1b[92mN\x1b[0m, \x1b[35mf\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m, and \x1b[92mO\x1b[32mj \x1b[0mfor each \x1b[32mj \x1b[91min \x1b[92mN\x1b[0m.\n");
 print("  this representation is called the \x1b[91mNIR \x1b[0m(neural index representation), because it encodes the (topology/connectivity of) the net via \x1b[92mN \x1b[0msets of indices.\n");
 print("  example (\x1b[91mNIR\x1b[0m).\n");
 print("    let \x1b[92mN \x1b[0mbe \x1b[34m0x\x1b[35m0e\x1b[0m. now:\n");
 print("      \x1b[91m- \x1b[0mthe \x1b[32mj\x1b[0m-indices             are in \x1b[91m{ \x1b[32m0\x1b[0m, \x1b[32m1\x1b[0m, \x1b[32m2\x1b[0m, \x1b[32m3\x1b[0m, \x1b[32m4\x1b[0m, \x1b[32m5\x1b[0m, \x1b[32m6\x1b[0m, \x1b[32m7\x1b[0m, \x1b[32m8\x1b[0m, \x1b[32m9\x1b[0m, \x1b[32ma\x1b[0m, \x1b[32mb\x1b[0m, \x1b[32mc\x1b[0m, \x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
 print("      \x1b[91m- \x1b[0mthe neurons n\x1b[32mj            \x1b[0mare in \x1b[91m{\x1b[0mn\x1b[32m0\x1b[0m,n\x1b[32m1\x1b[0m,n\x1b[32m2\x1b[0m,n\x1b[32m3\x1b[0m,n\x1b[32m4\x1b[0m,n\x1b[32m5\x1b[0m,n\x1b[32m6\x1b[0m,n\x1b[32m7\x1b[0m,n\x1b[32m8\x1b[0m,n\x1b[32m9\x1b[0m,n\x1b[32ma\x1b[0m,n\x1b[32mb\x1b[0m,n\x1b[32mc\x1b[0m,n\x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
 print("      \x1b[91m- \x1b[0mthe activation fns \x1b[35mf\x1b[32mj     \x1b[0mare in \x1b[91m{\x1b[35mf\x1b[32m0\x1b[0m,\x1b[35mf\x1b[32m1\x1b[0m,\x1b[35mf\x1b[32m2\x1b[0m,\x1b[35mf\x1b[32m3\x1b[0m,\x1b[35mf\x1b[32m4\x1b[0m,\x1b[35mf\x1b[32m5\x1b[0m,\x1b[35mf\x1b[32m6\x1b[0m,\x1b[35mf\x1b[32m7\x1b[0m,\x1b[35mf\x1b[32m8\x1b[0m,\x1b[35mf\x1b[32m9\x1b[0m,\x1b[35mf\x1b[32ma\x1b[0m,\x1b[35mf\x1b[32mb\x1b[0m,\x1b[35mf\x1b[32mc\x1b[0m,\x1b[35mf\x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
 print("      \x1b[91m- \x1b[0mthe sets of in-indices \x1b[92mI\x1b[32mj \x1b[0mare in \x1b[91m{\x1b[92mI\x1b[32m0\x1b[0m,\x1b[92mI\x1b[32m1\x1b[0m,\x1b[92mI\x1b[32m2\x1b[0m,\x1b[92mI\x1b[32m3\x1b[0m,\x1b[92mI\x1b[32m4\x1b[0m,\x1b[92mI\x1b[32m5\x1b[0m,\x1b[92mI\x1b[32m6\x1b[0m,\x1b[92mI\x1b[32m7\x1b[0m,\x1b[92mI\x1b[32m8\x1b[0m,\x1b[92mI\x1b[32m9\x1b[0m,\x1b[92mI\x1b[32ma\x1b[0m,\x1b[92mI\x1b[32mb\x1b[0m,\x1b[92mI\x1b[32mc\x1b[0m,\x1b[92mI\x1b[32md\x1b[0m\x1b[91m}\x1b[0m\n");
 print("    let \x1b[92mI\x1b[32m0 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m0 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
 print("    let \x1b[92mI\x1b[32m1 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m1 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
 print("    let \x1b[92mI\x1b[32m2 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m2 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
 print("    let \x1b[92mI\x1b[32m3 \x1b[0mbe \x1b[91m{\x1b[0m\x1b[91m}         \x1b[0mso n\x1b[32m3 \x1b[0mcomes from nothing.     layer \x1b[35m0\x1b[0m: length \x1b[35m0 \x1b[0mdependency chain (input neuron: no inputs)\n");
 print("    let \x1b[92mI\x1b[32m4 \x1b[0mbe \x1b[91m{\x1b[0m0\x1b[91m,\x1b[0m1\x1b[91m}\x1b[0m.     so n\x1b[32m4 \x1b[0mcomes from n\x1b[31m0\x1b[0m,n\x1b[31m1\x1b[0m.       layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
 print("    let \x1b[92mI\x1b[32m5 \x1b[0mbe \x1b[91m{\x1b[0m0\x1b[91m,\x1b[0m1\x1b[91m,\x1b[0m2\x1b[91m}\x1b[0m.   so n\x1b[32m5 \x1b[0mcomes from n\x1b[31m0\x1b[0m,n\x1b[31m1\x1b[0m,n\x1b[31m2\x1b[0m.    layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
 print("    let \x1b[92mI\x1b[32m6 \x1b[0mbe \x1b[91m{\x1b[0m1\x1b[91m,\x1b[0m2\x1b[91m,\x1b[0m3\x1b[91m}\x1b[0m.   so n\x1b[32m6 \x1b[0mcomes from n\x1b[31m1\x1b[0m,n\x1b[31m2\x1b[0m,n\x1b[31m3\x1b[0m.    layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
 print("    let \x1b[92mI\x1b[32m7 \x1b[0mbe \x1b[91m{\x1b[0m2\x1b[91m,\x1b[0m3\x1b[91m}\x1b[0m.     so n\x1b[32m7 \x1b[0mcomes from n\x1b[31m2\x1b[0m,n\x1b[31m3\x1b[0m.       layer \x1b[35m1\x1b[0m: length \x1b[35m1 \x1b[0mdependency chain\n");
 print("    let \x1b[92mI\x1b[32m8 \x1b[0mbe \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m}\x1b[0m.     so n\x1b[32m8 \x1b[0mcomes from n\x1b[31m4\x1b[0m,n\x1b[31m5\x1b[0m.       layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
 print("    let \x1b[92mI\x1b[32m9 \x1b[0mbe \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m}\x1b[0m.   so n\x1b[32m9 \x1b[0mcomes from n\x1b[31m4\x1b[0m,n\x1b[31m5\x1b[0m,n\x1b[31m6\x1b[0m.    layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
 print("    let \x1b[92mI\x1b[32ma \x1b[0mbe \x1b[91m{\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.   so n\x1b[32ma \x1b[0mcomes from n\x1b[31m5\x1b[0m,n\x1b[31m6\x1b[0m,n\x1b[31m7\x1b[0m.    layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
 print("    let \x1b[92mI\x1b[32mb \x1b[0mbe \x1b[91m{\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.     so n\x1b[32mb \x1b[0mcomes from n\x1b[31m6\x1b[0m,n\x1b[31m7\x1b[0m.       layer \x1b[35m2\x1b[0m: length \x1b[35m2 \x1b[0mdependency chain\n");
 print("    let \x1b[92mI\x1b[32mc \x1b[0mbe \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m. so n\x1b[32mc \x1b[0mcomes from n\x1b[31m8\x1b[0m,n\x1b[31m9\x1b[0m,n\x1b[31ma\x1b[0m,n\x1b[31mb\x1b[0m. layer \x1b[35m3\x1b[0m: length \x1b[35m3 \x1b[0mdependency chain (output neuron: no outputs)\n");
 print("    let \x1b[92mI\x1b[32md \x1b[0mbe \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m. so n\x1b[32mc \x1b[0mcomes from n\x1b[31m8\x1b[0m,n\x1b[31m9\x1b[0m,n\x1b[31ma\x1b[0m,n\x1b[31mb\x1b[0m. layer \x1b[35m3\x1b[0m: length \x1b[35m3 \x1b[0mdependency chain (output neuron: no outputs)\n");
 print("    now \x1b[92mO\x1b[32m0 \x1b[0mis \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m}\x1b[0m.     so n\x1b[32m0 \x1b[0mgoes  into n\x1b[34m4\x1b[0m,n\x1b[34m5\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32m1 \x1b[0mis \x1b[91m{\x1b[0m4\x1b[91m,\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m}\x1b[0m.   so n\x1b[32m1 \x1b[0mgoes  into n\x1b[34m4\x1b[0m,n\x1b[34m5\x1b[0m,n\x1b[34m6\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32m2 \x1b[0mis \x1b[91m{\x1b[0m5\x1b[91m,\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.   so n\x1b[32m2 \x1b[0mgoes  into n\x1b[34m5\x1b[0m,n\x1b[34m6\x1b[0m,n\x1b[34m7\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32m3 \x1b[0mis \x1b[91m{\x1b[0m6\x1b[91m,\x1b[0m7\x1b[91m}\x1b[0m.     so n\x1b[32m3 \x1b[0mgoes  into n\x1b[34m6\x1b[0m,n\x1b[34m7\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32m4 \x1b[0mis \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m\x1b[91m}\x1b[0m.     so n\x1b[32m4 \x1b[0mgoes  into n\x1b[34m8\x1b[0m,n\x1b[34m9\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32m5 \x1b[0mis \x1b[91m{\x1b[0m8\x1b[91m,\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m}\x1b[0m.   so n\x1b[32m5 \x1b[0mgoes  into n\x1b[34m8\x1b[0m,n\x1b[34m9\x1b[0m,n\x1b[34ma\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32m6 \x1b[0mis \x1b[91m{\x1b[0m9\x1b[91m,\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m.   so n\x1b[32m6 \x1b[0mgoes  into n\x1b[34m9\x1b[0m,n\x1b[34ma\x1b[0m,n\x1b[34mb\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32m7 \x1b[0mis \x1b[91m{\x1b[0ma\x1b[91m,\x1b[0mb\x1b[91m}\x1b[0m.     so n\x1b[32m7 \x1b[0mgoes  into n\x1b[34ma\x1b[0m,n\x1b[34mb\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32m8 \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32m8 \x1b[0mgoes  into n\x1b[34mc\x1b[0m,n\x1b[34md\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32m9 \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32m9 \x1b[0mgoes  into n\x1b[34mc\x1b[0m,n\x1b[34md\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32ma \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32ma \x1b[0mgoes  into n\x1b[34mc\x1b[0m,n\x1b[34md\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32mb \x1b[0mis \x1b[91m{\x1b[0mc\x1b[91m,\x1b[0md\x1b[91m}\x1b[0m.     so n\x1b[32mb \x1b[0mgoes  into n\x1b[34mc\x1b[0m,n\x1b[34md\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32mc \x1b[0mis \x1b[91m{\x1b[91m}\x1b[0m.        so n\x1b[32mc \x1b[0mgoes  into nothing\x1b[0m\n");
 print("    now \x1b[92mO\x1b[32md \x1b[0mis \x1b[91m{\x1b[91m}\x1b[0m.        so n\x1b[32md \x1b[0mgoes  into nothing\x1b[0m\n");
 print("    this specifies a net with: 4 inputs, a 4-neuron (sparsely-connected) hidden layer, a 4-neuron (sparsely-connected) hidden layer, and 2 outputs\n");
 print("\x1b[91m- \x1b[0mthe \"number of layers\" is an implicit number given in the NAM/NIR, defined as the longest chain in a topological sort of the connectivity graph (implicitly) given by the NAM/NIR\n");
}

static void nirshow(){}

static void namshow(i64 n, u32* NAM){
 printf("\n""-------------------------------------------------------------------------------------------------------------------------------\x1b[91m#\x1b[0m\n"); print("\x1b[92m%c\x1b[0m\n", __func__);
 i64 C = ({ u32 _a=(u32)(n); u32 _b=(u32)(32); _a/_b + (_a%_b ? 1 : 0); });
 print("\x1b[31m%,d \x1b[32m%,d\x1b[0m\n", n,C);
 for(i64 (i)=(0); (i)<(n); ++(i)){
  for(i64 (j)=(0); (j)<(C); ++(j))
   printf("%s", ({ u64 _x=(u64)(NAM[i*C+j]); u64 _k=(u64)(n); char* _d=
# 102 "nam.c" 3 4
               __builtin_alloca (
# 102 "nam.c"
               _k+1
# 102 "nam.c" 3 4
               )
# 102 "nam.c"
               ; for(int _i=0; _i< _k; ++_i) _d[_i] = 0x30+(_x>> _i & 0b1); _d[_k]=0x00; _d; }));
  putchar(0x0a);
 }
}

static void opsshow(u32** ops){
 printf("\n""-------------------------------------------------------------------------------------------------------------------------------\x1b[91m#\x1b[0m\n");
 print("\x1b[92m%c\x1b[0m\n", __func__);
 print("\x1b[91m- \x1b[0mn\x1b[32mj       \x1b[0m\x1b[91m= \x1b[35mf\x1b[32mj\x1b[91m[\x1b[35mSUM\x1b[91m[\x1b[31mi\x1b[91m,\x1b[92mI\x1b[32mj\x1b[91m, \x1b[0mn\x1b[31mi\x1b[91m*\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]]\x1b[0m\n");
 print("\x1b[91m- \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mw\x1b[31mi\x1b[32mj \x1b[91m=    \x1b[35mSUM\x1b[91m[\x1b[34mk\x1b[91m,\x1b[92mO\x1b[32mj\x1b[91m, \x1b[34mD\x1b[0mLY\x1b[91m_\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m*\x1b[34mD\x1b[0mn\x1b[34mk\x1b[91m_\x1b[0mw\x1b[31mi\x1b[32mj\x1b[91m]\x1b[0m\n");

 for(i64 (i)=(0); (i)<((((vhead_t*)((void*)(ops) - sizeof(vhead_t)))->idim)); ++(i)){
  u32* row = ops[i];
  printf("n%02x = f%02x(", i,i);
  for(typeof(row) (it1)=(row); (it1)!=(&((row)[(((vhead_t*)((void*)(row) - sizeof(vhead_t)))->idim)])); (++(it1)))
# 125 "nam.c"
  switch(*it1){
   case 0xffffffff: printf(" +n"); break;
   case 0xfffffffe: printf("*w"); break;
   default: printf("%02x",*it1); break;
  }


  printf(")\n");
 }
}
# 153 "nam.c"
static void nirparse(i64 tbdim,u8* tdata, i64* on){
 printf("\n""-------------------------------------------------------------------------------------------------------------------------------\x1b[91m#\x1b[0m\n"); print("\x1b[92m%c\x1b[0m\n", __func__);
 if(tbdim<3){ do{ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  ", "nam.c",155,__func__); printf("""file is too small: %'d bytes"); putchar(0x0a); }while(0); exit(1); }
# 170 "nam.c"
 if(*tdata==0x25){
  while(tbdim && *tdata!=0x0a){ --tbdim; ++tdata; }
  --tbdim; ++tdata;
 }

 u8 val0 = *tdata; --tbdim; ++tdata;
 u8 val1 = *tdata; --tbdim; ++tdata;
 if(val0!=0x4e && val0!=0x6e){ do{ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  ", "nam.c",177,__func__); printf("""character 0 must be N or n"); putchar(0x0a); }while(0); exit(1); }
 if(val1!=0x20){ do{ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  ", "nam.c",178,__func__); printf("""character 1 must be a space"); putchar(0x0a); }while(0); exit(1); }


 i64 n = ({ u32 _n0 = 0; u8 _val1 = *tdata; do{ if(!({ (({ typeof(_val2) _x=(_val2); typeof(_val2) _a=(0x30); typeof(_val2) _b=(0x3a); (_a<=_x && _x< _b); }) || ({ typeof(_val2) _x=(_val2); typeof(_val2) _a=(0x61); typeof(_val2) _b=(0x67); (_a<=_x && _x< _b); })); })){ printf("\x1b[31m%'d \x1b[32m%02x  \x1b[0m", tbdim,*tdata); printf("""expected an ascii hex byte"); putchar(0x0a); exit(1); } }while(0); while(tbdim && ({ (({ typeof(_val3) _x=(_val3); typeof(_val3) _a=(0x30); typeof(_val3) _b=(0x3a); (_a<=_x && _x< _b); }) || ({ typeof(_val3) _x=(_val3); typeof(_val3) _a=(0x61); typeof(_val3) _b=(0x67); (_a<=_x && _x< _b); })); })){ --tbdim; ++tdata; _n4 *= 0x10; _n5 += ({ u8 _asc=(_val6); 0x9*(_asc>>6) + (_asc&0xf); }); _val7 = *tdata; } _n8; }); do{ if(*tdata!=0x0a){ printf("\x1b[31m%'d \x1b[32m%02x  \x1b[0m", tbdim,*tdata); printf("""expected linefeed"); putchar(0x0a); exit(1); } }while(0);
 --tbdim; ++tdata;
 printf("\x1b[92mN \x1b[34m%02x\x1b[0m\n",n);


 u32* F = ({ vhead_t* _h = malloc(sizeof(vhead_t) + sizeof(u32)*0x100); _h->idim = 0; _h->idimmax = 0x100; _h->code = 0xbbd695d541422d86ull; (void*)(&_h[1]); });
 u32** I = ({ vhead_t* _h = malloc(sizeof(vhead_t) + sizeof(u32)*0x100); _h->idim = 0; _h->idimmax = 0x100; _h->code = 0xbbd695d541422d86ull; (void*)(&_h[1]); });

 u8 val;
 u32 state = 0x0;
 while(tbdim){
  switch(state){
   case 0x0:{
    u32 j = ({ u32 _n9 = 0; u8 _val10 = *tdata; do{ if(!({ (({ typeof(_val11) _x=(_val11); typeof(_val11) _a=(0x30); typeof(_val11) _b=(0x3a); (_a<=_x && _x< _b); }) || ({ typeof(_val11) _x=(_val11); typeof(_val11) _a=(0x61); typeof(_val11) _b=(0x67); (_a<=_x && _x< _b); })); })){ printf("\x1b[31m%'d \x1b[32m%02x  \x1b[0m", tbdim,*tdata); printf("""expected an ascii hex byte"); putchar(0x0a); exit(1); } }while(0); while(tbdim && ({ (({ typeof(_val12) _x=(_val12); typeof(_val12) _a=(0x30); typeof(_val12) _b=(0x3a); (_a<=_x && _x< _b); }) || ({ typeof(_val12) _x=(_val12); typeof(_val12) _a=(0x61); typeof(_val12) _b=(0x67); (_a<=_x && _x< _b); })); })){ --tbdim; ++tdata; _n13 *= 0x10; _n14 += ({ u8 _asc=(_val15); 0x9*(_asc>>6) + (_asc&0xf); }); _val16 = *tdata; } _n17; });
    printf("%02x\n",j);
    val = *tdata;
    if( 0<tbdim && (val==0x0a)) state=0x0;
    else if(0<tbdim && (val==0x20)) state=0x1;
    else{ do{ if(1){ printf("\x1b[31m%'d \x1b[32m%02x  \x1b[0m", tbdim,*tdata); printf("""unexpected character"); putchar(0x0a); exit(1); } }while(0); }
   }break;
   case 0x1:{
    u32 fj = ({ u32 _n18 = 0; u8 _val19 = *tdata; do{ if(!({ (({ typeof(_val20) _x=(_val20); typeof(_val20) _a=(0x30); typeof(_val20) _b=(0x3a); (_a<=_x && _x< _b); }) || ({ typeof(_val20) _x=(_val20); typeof(_val20) _a=(0x61); typeof(_val20) _b=(0x67); (_a<=_x && _x< _b); })); })){ printf("\x1b[31m%'d \x1b[32m%02x  \x1b[0m", tbdim,*tdata); printf("""expected an ascii hex byte"); putchar(0x0a); exit(1); } }while(0); while(tbdim && ({ (({ typeof(_val21) _x=(_val21); typeof(_val21) _a=(0x30); typeof(_val21) _b=(0x3a); (_a<=_x && _x< _b); }) || ({ typeof(_val21) _x=(_val21); typeof(_val21) _a=(0x61); typeof(_val21) _b=(0x67); (_a<=_x && _x< _b); })); })){ --tbdim; ++tdata; _n22 *= 0x10; _n23 += ({ u8 _asc=(_val24); 0x9*(_asc>>6) + (_asc&0xf); }); _val25 = *tdata; } _n26; });
   }break;
  }
  --tbdim; ++tdata;
 }


 free(((vhead_t*)((void*)(F) - sizeof(vhead_t))));
 free(((vhead_t*)((void*)(I) - sizeof(vhead_t))));
}


void namparse(i64 txtbdim,u8* txtdata, i64* on,u32** oNAM){
 printf("\n""-------------------------------------------------------------------------------------------------------------------------------\x1b[91m#\x1b[0m\n"); print("\x1b[92m%c\x1b[0m\n", __func__);
 u8* pos = txtdata;
 i64 nr = 0;
 i64 nc = 0;
 while(*pos!=0x00 && *pos!=0x0a){
  ++pos; ++nc;
 }

 i64 nambdim = sizeof(u32)*nc*({ u32 _a=(u32)(nc); u32 _b=(u32)(32); _a/_b + (_a%_b ? 1 : 0); });
 u32* NAM = malloc(nambdim); memset(NAM,0x00,nambdim);
 u32** OPS = ({ i64 _idim_max = (nc); vhead_t* _h = malloc(sizeof(vhead_t) + sizeof(u32*)*_idim_max); _h->idim = 0; _h->idimmax = _idim_max; _h->code = 0xbbd695d541422d86ull; (void*)(&_h[1]); });
 print("\x1b[31m%,d \x1b[32m%,d  \x1b[34m%,d \x1b[0m%,d\n", nc,({ u32 _a=(u32)(nc); u32 _b=(u32)(32); _a/_b + (_a%_b ? 1 : 0); }), nc*nc, nambdim);

 for(i64 (i)=(0); (i)<(nc); ++(i)) (((((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->idimmax)<=(((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->idim) ? ({ i64 _idimmax = (2*(((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->idimmax)+1); vhead_t* _h = realloc(((vhead_t*)((void*)(OPS) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(OPS))*_idimmax); (OPS) = (void*)(&_h[1]); (((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0), OPS[(((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->idim)++] = ({ vhead_t* _h = malloc(sizeof(vhead_t) + sizeof(u32)*0x100); _h->idim = 0; _h->idimmax = 0x100; _h->code = 0xbbd695d541422d86ull; (void*)(&_h[1]); }));
 pos = txtdata;
 i64 C = ({ u32 _a=(u32)(nc); u32 _b=(u32)(32); _a/_b + (_a%_b ? 1 : 0); });
 i64 i = 0;
 i64 j = 0;
 u8 val;
 for(i64 (i)=(0); (i)<(nc); ++(i)) printf("        n\x1b[32m%02x\x1b[0m",i); putchar(0x0a);
 printf("n\x1b[32m%02x\x1b[0m",0);
 while((val=*pos)!=0x00){
  ++pos;
  if(val==0x0a){
   if(j!=nc){ do{ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  ", "nam.c",239,__func__); printf("""expected %d rows, but got %d", nc,j); putchar(0x0a); }while(0); exit(1); }

   ++i; j=0;
   if(i<nc) printf("\nn\x1b[32m%02x\x1b[0m",i);
   else putchar(0x0a);
   continue;
  }else if(val==0x31) NAM[i*C + j/32] |= 1 << j%32;






  if(val==0x30){ putchar(0x20); for(i64 (i)=(0); (i)<(1+1+2+1+1+2+2); ++(i)) putchar(0x5f); }
  else { printf(" \x1b[91m%c\x1b[0mn\x1b[32m%02x\x1b[91m%c\x1b[0mw\x1b[31m%02x\x1b[32m%02x\x1b[0m", 0x2b,i,0x2a, i,j); }



  if(val==0x31){
   (((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)<=(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) ? ({ i64 _idimmax = (2*(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)+1); vhead_t* _h = realloc(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(OPS[j]))*_idimmax); (OPS[j]) = (void*)(&_h[1]); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0), OPS[j][(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)++] = 0xffffffff);
   (((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)<=(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) ? ({ i64 _idimmax = (2*(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)+1); vhead_t* _h = realloc(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(OPS[j]))*_idimmax); (OPS[j]) = (void*)(&_h[1]); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0), OPS[j][(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)++] = i);
   (((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)<=(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) ? ({ i64 _idimmax = (2*(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)+1); vhead_t* _h = realloc(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(OPS[j]))*_idimmax); (OPS[j]) = (void*)(&_h[1]); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0), OPS[j][(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)++] = 0xfffffffe);
   (((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)<=(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) ? ({ i64 _idimmax = (2*(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)+1); vhead_t* _h = realloc(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(OPS[j]))*_idimmax); (OPS[j]) = (void*)(&_h[1]); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0), OPS[j][(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)++] = i);
   (((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)<=(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) ? ({ i64 _idimmax = (2*(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax)+1); vhead_t* _h = realloc(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t))), sizeof(vhead_t) + sizeof(*(OPS[j]))*_idimmax); (OPS[j]) = (void*)(&_h[1]); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim) = ({ typeof((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)) _a=((((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)); typeof(_idimmax) _b=(_idimmax); _a<_b ? _a : _b; }); (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idimmax) = _idimmax; (((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->code) = 0xbbd695d541422d86ull; }) : 0), OPS[j][(((vhead_t*)((void*)(OPS[j]) - sizeof(vhead_t)))->idim)++] = j);
  }

  ++j;
 }
 nr = i;
 if(nr!=nc){ do{ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  ", "nam.c",268,__func__); printf("""\x1b[34mnr \x1b[0mnot equal to \x1b[34mnc\x1b[0m, \x1b[34mnr\x1b[0m: \x1b[31m%d\x1b[0m, \x1b[34mnc\x1b[0m: \x1b[31m%d\x1b[0m", nr,nc); putchar(0x0a); }while(0); exit(1); }

 namshow(nc,NAM);
 opsshow(OPS);

 for(typeof(OPS) (it0)=(OPS); (it0)!=(&((OPS)[(((vhead_t*)((void*)(OPS) - sizeof(vhead_t)))->idim)])); (++(it0))) free(((vhead_t*)((void*)(*it0) - sizeof(vhead_t))));
 free(((vhead_t*)((void*)(OPS) - sizeof(vhead_t))));
 *on=nc; *oNAM=NAM;
}


extern int main(int nargs, char* args[]){
 char* filepath = "nn00.nam"; if(1<nargs) filepath = args[1];
 if(access(filepath,
# 281 "nam.c" 3 4
                   0
# 281 "nam.c"
                       |
# 281 "nam.c" 3 4
                        4
# 281 "nam.c"
                            )<0){ do{ printf("\x1b[91mFAIL  \x1b[31m%s\x1b[91m:\x1b[0mL\x1b[32m%d\x1b[91m:\x1b[34m%s\x1b[0m()  ", "nam.c",281,__func__); printf("""can't open \x1b[92m%s\x1b[0m",filepath); putchar(0x0a); }while(0); exit(1); }


 print("filepath \x1b[34m%c\x1b[0m\n", filepath);
 nntut();

 i64 filepath_bdim = strlen(filepath);
 if(3<filepath_bdim && memcmp(".nam",filepath+filepath_bdim-4,4)==0){
  file_t namfile = file_ini(filepath);
  i64 n; u32* P=
# 290 "nam.c" 3 4
               ((void *)0)
# 290 "nam.c"
                   ;
  namparse(namfile.bdim,namfile.data, &n,&P);
  file_end(&namfile);
  free(P);
 }else{
  file_t nirfile = file_ini(filepath);
  i64 n;
  nirparse(nirfile.bdim,nirfile.data, &n);
  file_end(&nirfile);
 }


 exit(0);
}
