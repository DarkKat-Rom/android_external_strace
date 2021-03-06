/* Generated by ./xlat/gen.sh from ./xlat/efd_flags.in; do not edit. */
#if !(defined(EFD_SEMAPHORE) || (defined(HAVE_DECL_EFD_SEMAPHORE) && HAVE_DECL_EFD_SEMAPHORE))
# define EFD_SEMAPHORE 1
#endif
#if defined EFD_CLOEXEC || defined O_CLOEXEC
#if !(defined(EFD_CLOEXEC) || (defined(HAVE_DECL_EFD_CLOEXEC) && HAVE_DECL_EFD_CLOEXEC))
# define EFD_CLOEXEC O_CLOEXEC
#endif
#endif
#if !(defined(EFD_NONBLOCK) || (defined(HAVE_DECL_EFD_NONBLOCK) && HAVE_DECL_EFD_NONBLOCK))
# define EFD_NONBLOCK O_NONBLOCK
#endif

#ifdef IN_MPERS

# error static const struct xlat efd_flags in mpers mode

#else

static
const struct xlat efd_flags[] = {
 XLAT(EFD_SEMAPHORE),
#if defined EFD_CLOEXEC || defined O_CLOEXEC
 XLAT(EFD_CLOEXEC),
#endif
 XLAT(EFD_NONBLOCK),
 XLAT_END
};

#endif /* !IN_MPERS */
