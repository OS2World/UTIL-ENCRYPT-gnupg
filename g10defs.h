/* Generated automatically by configure */
#ifdef HAVE_DRIVE_LETTERS
 #ifdef __EMX__
  #define G10_LOCALEDIR ((char*)&__OS2_G10_LOCALEDIR)
  #define GNUPG_LIBDIR ((char*)&__OS2_GNUPG_LIBDIR)
  #define GNUPG_DATADIR ((char*)&__OS2_GNUPG_DATADIR)
  #define GNUPG_HOMEDIR ((char*)&__OS2_GNUPG_HOMEDIR)
 #else
  #define G10_LOCALEDIR "c:/lib/gnupg/locale"
  #define GNUPG_LIBDIR  "c:/lib/gnupg"
  #define GNUPG_DATADIR "c:/lib/gnupg"
  #define GNUPG_HOMEDIR "c:/gnupg"
 #endif
#else
  #define G10_LOCALEDIR "/usr/local//locale"
  #define GNUPG_LIBDIR  "/usr/local/lib/gnupg"
  #define GNUPG_DATADIR "/usr/local/share/gnupg"
  #ifdef __VMS
    #define GNUPG_HOMEDIR "/SYS$LOGIN/gnupg" 
  #else
    #define GNUPG_HOMEDIR "~/.gnupg" 
  #endif
#endif
/* This file defines some basic constants for the MPI machinery.  We
 * need to define the types on a per-CPU basis, so it is done with
 * this file here.  */
#define BYTES_PER_MPI_LIMB  (SIZEOF_UNSIGNED_LONG)

#ifdef __EMX__
#define __OS2_PATHLEN	200
extern char __OS2_G10_LOCALEDIR[__OS2_PATHLEN+1];
extern char __OS2_GNUPG_LIBDIR[__OS2_PATHLEN+1];
extern char __OS2_GNUPG_DATADIR[__OS2_PATHLEN+1];
extern char __OS2_GNUPG_HOMEDIR[__OS2_PATHLEN+1];
#endif
