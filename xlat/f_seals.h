/* Generated by ./xlat/gen.sh from ./xlat/f_seals.in; do not edit. */
#if !(defined(F_SEAL_SEAL) || (defined(HAVE_DECL_F_SEAL_SEAL) && HAVE_DECL_F_SEAL_SEAL))
# define F_SEAL_SEAL 1
#endif
#if !(defined(F_SEAL_SHRINK) || (defined(HAVE_DECL_F_SEAL_SHRINK) && HAVE_DECL_F_SEAL_SHRINK))
# define F_SEAL_SHRINK 2
#endif
#if !(defined(F_SEAL_GROW) || (defined(HAVE_DECL_F_SEAL_GROW) && HAVE_DECL_F_SEAL_GROW))
# define F_SEAL_GROW 4
#endif
#if !(defined(F_SEAL_WRITE) || (defined(HAVE_DECL_F_SEAL_WRITE) && HAVE_DECL_F_SEAL_WRITE))
# define F_SEAL_WRITE 8
#endif

#ifdef IN_MPERS

# error static const struct xlat f_seals in mpers mode

#else

static
const struct xlat f_seals[] = {
 XLAT(F_SEAL_SEAL),
 XLAT(F_SEAL_SHRINK),
 XLAT(F_SEAL_GROW),
 XLAT(F_SEAL_WRITE),
 XLAT_END
};

#endif /* !IN_MPERS */
