#ifndef __LLVM_GENERAL_INTERNAL_FFI__LIB_FUNC__H__
#define __LLVM_GENERAL_INTERNAL_FFI__LIB_FUNC__H__

#define LLVM_GENERAL_FOR_EACH_LIB_FUNC(macro)		\
	macro(under_IO_getc)													\
	macro(under_IO_putc)													\
	macro(ZdaPv)																	\
	macro(ZdaPvRKSt9nothrow_t)										\
	macro(ZdlPv)																	\
	macro(ZdlPvRKSt9nothrow_t)										\
	macro(Znaj)																		\
	macro(ZnajRKSt9nothrow_t)											\
	macro(Znam)																		\
	macro(ZnamRKSt9nothrow_t)											\
	macro(Znwj)																		\
	macro(ZnwjRKSt9nothrow_t)											\
	macro(Znwm)																		\
	macro(ZnwmRKSt9nothrow_t)											\
	macro(cospi)																	\
	macro(cospif)																	\
	macro(cxa_atexit)															\
	macro(cxa_guard_abort)												\
	macro(cxa_guard_acquire)											\
	macro(cxa_guard_release)											\
	macro(dunder_isoc99_scanf)										\
	macro(dunder_isoc99_sscanf)										\
	macro(memcpy_chk)															\
	macro(sincospi_stret)													\
	macro(sincospif_stret)												\
	macro(sinpi)																	\
	macro(sinpif)																	\
	macro(sqrt_finite)														\
	macro(sqrtf_finite)														\
	macro(sqrtl_finite)														\
	macro(dunder_strdup)													\
	macro(dunder_strndup)													\
	macro(dunder_strtok_r)												\
	macro(abs)																		\
	macro(access)																	\
	macro(acos)																		\
	macro(acosf)																	\
	macro(acosh)																	\
	macro(acoshf)																	\
	macro(acoshl)																	\
	macro(acosl)																	\
	macro(asin)																		\
	macro(asinf)																	\
	macro(asinh)																	\
	macro(asinhf)																	\
	macro(asinhl)																	\
	macro(asinl)																	\
	macro(atan)																		\
	macro(atan2)																	\
	macro(atan2f)																	\
	macro(atan2l)																	\
	macro(atanf)																	\
	macro(atanh)																	\
	macro(atanhf)																	\
	macro(atanhl)																	\
	macro(atanl)																	\
	macro(atof)																		\
	macro(atoi)																		\
	macro(atol)																		\
	macro(atoll)																	\
	macro(bcmp)																		\
	macro(bcopy)																	\
	macro(bzero)																	\
	macro(calloc)																	\
	macro(cbrt)																		\
	macro(cbrtf)																	\
	macro(cbrtl)																	\
	macro(ceil)																		\
	macro(ceilf)																	\
	macro(ceill)																	\
	macro(chmod)																	\
	macro(chown)																	\
	macro(clearerr)																\
	macro(closedir)																\
	macro(copysign)																\
	macro(copysignf)															\
	macro(copysignl)															\
	macro(cos)																		\
	macro(cosf)																		\
	macro(cosh)																		\
	macro(coshf)																	\
	macro(coshl)																	\
	macro(cosl)																		\
	macro(ctermid)																\
	macro(exp)																		\
	macro(exp10)																	\
	macro(exp10f)																	\
	macro(exp10l)																	\
	macro(exp2)																		\
	macro(exp2f)																	\
	macro(exp2l)																	\
	macro(expf)																		\
	macro(expl)																		\
	macro(expm1)																	\
	macro(expm1f)																	\
	macro(expm1l)																	\
	macro(fabs)																		\
	macro(fabsf)																	\
	macro(fabsl)																	\
	macro(fclose)																	\
	macro(fdopen)																	\
	macro(feof)																		\
	macro(ferror)																	\
	macro(fflush)																	\
	macro(ffs)																		\
	macro(ffsl)																		\
	macro(ffsll)																	\
	macro(fgetc)																	\
	macro(fgetpos)																\
	macro(fgets)																	\
	macro(fileno)																	\
	macro(fiprintf)																\
	macro(flockfile)															\
	macro(floor)																	\
	macro(floorf)																	\
	macro(floorl)																	\
	macro(fmax)																		\
	macro(fmaxf)																	\
	macro(fmaxl)																	\
	macro(fmin)																		\
	macro(fminf)																	\
	macro(fminl)																	\
	macro(fmod)																		\
	macro(fmodf)																	\
	macro(fmodl)																	\
	macro(fopen)																	\
	macro(fopen64)																\
	macro(fprintf)																\
	macro(fputc)																	\
	macro(fputs)																	\
	macro(fread)																	\
	macro(free)																		\
	macro(frexp)																	\
	macro(frexpf)																	\
	macro(frexpl)																	\
	macro(fscanf)																	\
	macro(fseek)																	\
	macro(fseeko)																	\
	macro(fseeko64)																\
	macro(fsetpos)																\
	macro(fstat)																	\
	macro(fstat64)																\
	macro(fstatvfs)																\
	macro(fstatvfs64)															\
	macro(ftell)																	\
	macro(ftello)																	\
	macro(ftello64)																\
	macro(ftrylockfile)														\
	macro(funlockfile)														\
	macro(fwrite)																	\
	macro(getc)																		\
	macro(getc_unlocked)													\
	macro(getchar)																\
	macro(getenv)																	\
	macro(getitimer)															\
	macro(getlogin_r)															\
	macro(getpwnam)																\
	macro(gets)																		\
	macro(gettimeofday)														\
	macro(htonl)																	\
	macro(htons)																	\
	macro(iprintf)																\
	macro(isascii)																\
	macro(isdigit)																\
	macro(labs)																		\
	macro(lchown)																	\
	macro(ldexp)																	\
	macro(ldexpf)																	\
	macro(ldexpl)																	\
	macro(llabs)																	\
	macro(log)																		\
	macro(log10)																	\
	macro(log10f)																	\
	macro(log10l)																	\
	macro(log1p)																	\
	macro(log1pf)																	\
	macro(log1pl)																	\
	macro(log2)																		\
	macro(log2f)																	\
	macro(log2l)																	\
	macro(logb)																		\
	macro(logbf)																	\
	macro(logbl)																	\
	macro(logf)																		\
	macro(logl)																		\
	macro(lstat)																	\
	macro(lstat64)																\
	macro(malloc)																	\
	macro(memalign)																\
	macro(memccpy)																\
	macro(memchr)																	\
	macro(memcmp)																	\
	macro(memcpy)																	\
	macro(memmove)																\
	macro(memrchr)																\
	macro(memset)																	\
	macro(memset_pattern16)												\
	macro(mkdir)																	\
	macro(mktime)																	\
	macro(modf)																		\
	macro(modff)																	\
	macro(modfl)																	\
	macro(nearbyint)															\
	macro(nearbyintf)															\
	macro(nearbyintl)															\
	macro(ntohl)																	\
	macro(ntohs)																	\
	macro(open)																		\
	macro(open64)																	\
	macro(opendir)																\
	macro(pclose)																	\
	macro(perror)																	\
	macro(popen)																	\
	macro(posix_memalign)													\
	macro(pow)																		\
	macro(powf)																		\
	macro(powl)																		\
	macro(pread)																	\
	macro(printf)																	\
	macro(putc)																		\
	macro(putchar)																\
	macro(puts)																		\
	macro(pwrite)																	\
	macro(qsort)																	\
	macro(read)																		\
	macro(readlink)																\
	macro(realloc)																\
	macro(reallocf)																\
	macro(realpath)																\
	macro(remove)																	\
	macro(rename)																	\
	macro(rewind)																	\
	macro(rint)																		\
	macro(rintf)																	\
	macro(rintl)																	\
	macro(rmdir)																	\
	macro(round)																	\
	macro(roundf)																	\
	macro(roundl)																	\
	macro(scanf)																	\
	macro(setbuf)																	\
	macro(setitimer)															\
	macro(setvbuf)																\
	macro(sin)																		\
	macro(sinf)																		\
	macro(sinh)																		\
	macro(sinhf)																	\
	macro(sinhl)																	\
	macro(sinl)																		\
	macro(siprintf)																\
	macro(snprintf)																\
	macro(sprintf)																\
	macro(sqrt)																		\
	macro(sqrtf)																	\
	macro(sqrtl)																	\
	macro(sscanf)																	\
	macro(stat)																		\
	macro(stat64)																	\
	macro(statvfs)																\
	macro(statvfs64)															\
	macro(stpcpy)																	\
	macro(stpncpy)																\
	macro(strcasecmp)															\
	macro(strcat)																	\
	macro(strchr)																	\
	macro(strcmp)																	\
	macro(strcoll)																\
	macro(strcpy)																	\
	macro(strcspn)																\
	macro(strdup)																	\
	macro(strlen)																	\
	macro(strncasecmp)														\
	macro(strncat)																\
	macro(strncmp)																\
	macro(strncpy)																\
	macro(strndup)																\
	macro(strnlen)																\
	macro(strpbrk)																\
	macro(strrchr)																\
	macro(strspn)																	\
	macro(strstr)																	\
	macro(strtod)																	\
	macro(strtof)																	\
	macro(strtok)																	\
	macro(strtok_r)																\
	macro(strtol)																	\
	macro(strtold)																\
	macro(strtoll)																\
	macro(strtoul)																\
	macro(strtoull)																\
	macro(strxfrm)																\
	macro(system)																	\
	macro(tan)																		\
	macro(tanf)																		\
	macro(tanh)																		\
	macro(tanhf)																	\
	macro(tanhl)																	\
	macro(tanl)																		\
	macro(times)																	\
	macro(tmpfile)																\
	macro(tmpfile64)															\
	macro(toascii)																\
	macro(trunc)																	\
	macro(truncf)																	\
	macro(truncl)																	\
	macro(uname)																	\
	macro(ungetc)																	\
	macro(unlink)																	\
	macro(unsetenv)																\
	macro(utime)																	\
	macro(utimes)																	\
	macro(valloc)																	\
	macro(vfprintf)																\
	macro(vfscanf)																\
	macro(vprintf)																\
	macro(vscanf)																	\
	macro(vsnprintf)															\
	macro(vsprintf)																\
	macro(vsscanf)																\
	macro(write)

typedef enum {
#define ENUM_CASE(x) LLVMLibFunc__ ## x,
LLVM_GENERAL_FOR_EACH_LIB_FUNC(ENUM_CASE)
#undef ENUM_CASE
} LLVMLibFunc;

#endif
