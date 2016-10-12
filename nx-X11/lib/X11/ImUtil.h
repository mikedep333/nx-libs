
#if !defined(_X11_IMUTIL_H_) && !defined(_IM_UTIL_H_)
#define _X11_IMUTIL_H_
#define _IMUTIL_H_

extern int
_XGetScanlinePad(
    Display *dpy,
    int depth);

extern int
_XGetBitsPerPixel(
 Display *dpy,
 int depth);

extern int
_XSetImage(
    XImage *srcimg,
    register XImage *dstimg,
    register int x,
    register int y);

extern int
_XReverse_Bytes(
    register unsigned char *bpt,
    register int nb);
extern void
_XInitImageFuncPtrs(
    register XImage *image);

#endif /* !defined(_X11_IMUTIL_H_) && !defined(_IM_UTIL_H_) */
