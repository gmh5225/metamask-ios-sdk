#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Ecies.h"

FOUNDATION_EXPORT double metamask_ios_sdkVersionNumber;
FOUNDATION_EXPORT const unsigned char metamask_ios_sdkVersionString[];
