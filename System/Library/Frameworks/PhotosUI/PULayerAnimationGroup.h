//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer;

__attribute__((visibility("hidden")))
@interface PULayerAnimationGroup
{
    _Bool _areTrackedAnimationsPaused;	// 8 = 0x8
    CALayer *_referenceLayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000020378a
@property(readonly, nonatomic) CALayer *referenceLayer; // @synthesize referenceLayer=_referenceLayer;
- (void)updateAnimations;	// IMP=0x0000000000203585
- (double)currentTime;	// IMP=0x000000000020352e
- (id)initWithReferenceLayer:(id)arg1;	// IMP=0x0000000000203424
- (id)init;	// IMP=0x0000000000203410

@end

