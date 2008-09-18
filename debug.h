/**************************************************************************/
/* debug.h : macros pour faciliter l'�criture du code                     */
/**************************************************************************/

#ifdef DBG
#define DEBUG(s,x) fprintf(stderr,"***DEBUG*** "s,x)
#else
#define DEBUG(s,x)
#endif
