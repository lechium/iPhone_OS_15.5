//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUTimeBased-Protocol.h>

@class NSString;
@protocol NUScalePolicy;

@interface NUFaceDetectionRequest <NUTimeBased>
{
    long long _maxFaceCount;	// 8 = 0x8
    id <NUScalePolicy> _scalePolicy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000135705
@property(retain) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
@property long long maxFaceCount; // @synthesize maxFaceCount=_maxFaceCount;
- (void)submit:(CDUnknownBlockType)arg1;	// IMP=0x00000000001356aa
- (long long)mediaComponentType;	// IMP=0x000000000013569f
- (id)newRenderJob;	// IMP=0x0000000000135671
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000135554
- (id)initWithComposition:(id)arg1;	// IMP=0x00000000001354d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) CDStruct_1b6d18a9 time;

@end
