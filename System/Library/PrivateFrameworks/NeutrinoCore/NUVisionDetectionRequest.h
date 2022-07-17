//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NUTimeBased-Protocol.h>

@class NSArray, NSString;
@protocol NUScalePolicy;

@interface NUVisionDetectionRequest <NUTimeBased>
{
    id <NUScalePolicy> _scalePolicy;	// 8 = 0x8
    NSArray *_visionRequests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012eb73
@property(copy, nonatomic) NSArray *visionRequests; // @synthesize visionRequests=_visionRequests;
@property(retain, nonatomic) id <NUScalePolicy> scalePolicy; // @synthesize scalePolicy=_scalePolicy;
- (id)submitGenericSynchronous:(out id *)arg1;	// IMP=0x000000000012eaee
- (void)submit:(CDUnknownBlockType)arg1;	// IMP=0x000000000012eadc
- (long long)mediaComponentType;	// IMP=0x000000000012ead1
- (id)newRenderJob;	// IMP=0x000000000012eaa3
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012e971
- (id)initWithComposition:(id)arg1;	// IMP=0x000000000012e8e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) CDStruct_1b6d18a9 time;

@end
