//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQUOutputBundle-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFDictionary *mQuicklookProperties;	// 8 = 0x8
    struct __CFDictionary *mAttachments;	// 16 = 0x10
    struct __CFData *mMainHtmlData;	// 24 = 0x18
    struct __CFString *mUriScheme;	// 32 = 0x20
    struct __CFString *mUuidStr;	// 40 = 0x28
}

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;	// IMP=0x00000000000144c7
- (void)setDocumentSize:(struct CGSize)arg1;	// IMP=0x000000000001443c
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;	// IMP=0x0000000000014374
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;	// IMP=0x0000000000014360
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;	// IMP=0x000000000001433e
- (_Bool)giveOutputToPreviewRequest:(struct __QLPreviewRequest *)arg1;	// IMP=0x0000000000014330
- (struct __CFDictionary *)quicklookDictionary;	// IMP=0x0000000000014326
- (struct __CFData *)mainHtmlData;	// IMP=0x000000000001431c
- (void)dealloc;	// IMP=0x00000000000142a5
- (id)initWithUriScheme:(struct __CFString *)arg1;	// IMP=0x00000000000141a9
- (id)init;	// IMP=0x0000000000014190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

