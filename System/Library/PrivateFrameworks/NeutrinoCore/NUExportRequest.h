//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;
@protocol NUScalePolicy;

@interface NUExportRequest
{
    NSURL *_destinationURL;	// 8 = 0x8
    id <NUScalePolicy> _scalePolicy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000201f40
@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property(copy) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000201e72
- (id)initWithComposition:(id)arg1 destinationURL:(id)arg2;	// IMP=0x0000000000201dff
- (id)initWithComposition:(id)arg1;	// IMP=0x0000000000201d97

@end

