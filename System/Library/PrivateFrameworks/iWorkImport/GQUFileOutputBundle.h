//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQUOutputBundle-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQUFileOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFURL *mOutputUrl;	// 8 = 0x8
}

- (void)setPageElementXPath:(struct __CFString *)arg1 withThumbnailsOnLeft:(_Bool)arg2;	// IMP=0x0000000000014afa
- (void)setDocumentSize:(struct CGSize)arg1;	// IMP=0x0000000000014af4
- (_Bool)setData:(struct __CFData *)arg1 mimeType:(struct __CFString *)arg2 forNamedResource:(struct __CFString *)arg3;	// IMP=0x000000000001494e
- (_Bool)setDataForMainHtmlResource:(struct __CFData *)arg1;	// IMP=0x0000000000014933
- (struct __CFString *)createUriForResource:(struct __CFString *)arg1;	// IMP=0x0000000000014926
- (void)dealloc;	// IMP=0x00000000000148e7
- (id)initWithOutputPath:(struct __CFString *)arg1;	// IMP=0x000000000001483c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

