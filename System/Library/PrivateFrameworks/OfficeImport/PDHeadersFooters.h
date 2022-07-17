//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PDHeadersFooters : NSObject
{
    _Bool mHasDateTime;	// 8 = 0x8
    _Bool mHasNowDateTime;	// 9 = 0x9
    _Bool mHasUserDateTime;	// 10 = 0xa
    _Bool mHasSlideNumber;	// 11 = 0xb
    _Bool mHasHeader;	// 12 = 0xc
    _Bool mHasFooter;	// 13 = 0xd
    int mDateTimeFormat;	// 16 = 0x10
    NSString *mUserDateTime;	// 24 = 0x18
    NSString *mHeader;	// 32 = 0x20
    NSString *mFooter;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000447b84
- (void)setFooter:(id)arg1;	// IMP=0x0000000000447b2d
- (id)footer;	// IMP=0x0000000000447b1f
- (void)setHeader:(id)arg1;	// IMP=0x0000000000447ac8
- (id)header;	// IMP=0x0000000000447aba
- (void)setUserDateTime:(id)arg1;	// IMP=0x0000000000447a63
- (id)userDateTime;	// IMP=0x0000000000447a55
- (void)setHasFooter:(_Bool)arg1;	// IMP=0x0000000000447a4c
- (_Bool)hasFooter;	// IMP=0x0000000000447a43
- (void)setHasHeader:(_Bool)arg1;	// IMP=0x0000000000447a3a
- (_Bool)hasHeader;	// IMP=0x0000000000447a31
- (void)setHasSlideNumber:(_Bool)arg1;	// IMP=0x0000000000447a28
- (_Bool)hasSlideNumber;	// IMP=0x0000000000447a1f
- (void)setHasUserDateTime:(_Bool)arg1;	// IMP=0x0000000000447a16
- (_Bool)hasUserDateTime;	// IMP=0x0000000000447a0d
- (void)setHasNowDateTime:(_Bool)arg1;	// IMP=0x0000000000447a04
- (_Bool)hasNowDateTime;	// IMP=0x00000000004479fb
- (void)setHasDateTime:(_Bool)arg1;	// IMP=0x00000000004479f2
- (_Bool)hasDateTime;	// IMP=0x00000000004479e9

@end
