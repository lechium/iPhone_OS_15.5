//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GQUProgressiveHelper : NSObject
{
    const void *mClient;	// 8 = 0x8
    CDStruct_ba543347 *mCallBacks;	// 16 = 0x10
    unsigned char started;	// 24 = 0x18
    struct __CFString *mNumbersSheetUri;	// 32 = 0x20
    float mPreviewHeight;	// 40 = 0x28
    float mPreviewWidth;	// 44 = 0x2c
    _Bool mStartedMainHTML;	// 48 = 0x30
}

- (_Bool)previewHasStreamedMainHTML;	// IMP=0x000000000005c2f4
- (void)displayGenericError:(struct __CFError *)arg1;	// IMP=0x000000000005c2db
- (float)getPreviewHeight;	// IMP=0x000000000005c2d0
- (float)getPreviewWidth;	// IMP=0x000000000005c2c5
- (void)setPreviewHeight:(float)arg1 andWidth:(float)arg2;	// IMP=0x000000000005c2b5
- (struct __CFString *)getNumbersSheetUri;	// IMP=0x000000000005c2ab
- (void)setNumbersSheetUri:(struct __CFString *)arg1;	// IMP=0x000000000005c272
- (void)closeAttachment:(struct __CFURL *)arg1;	// IMP=0x000000000005c251
- (void)appendDataToAttachment:(struct __CFURL *)arg1 chunk:(struct __CFData *)arg2;	// IMP=0x000000000005c1fc
- (struct __CFURL *)createAttachment:(struct __CFString *)arg1 options:(struct __CFDictionary *)arg2;	// IMP=0x000000000005c1df
- (_Bool)progressiveStreamStarted;	// IMP=0x000000000005c1d2
- (void)startDataWithOptions:(struct __CFDictionary *)arg1;	// IMP=0x000000000005c1a4
- (void)dealloc;	// IMP=0x000000000005c165
- (id)initWithClient:(const void *)arg1 andCallbacks:(CDStruct_ba543347 *)arg2;	// IMP=0x000000000005c0fa

@end

