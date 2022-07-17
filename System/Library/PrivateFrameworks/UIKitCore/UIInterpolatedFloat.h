//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIVectorOperatable-Protocol.h>

@class NSString;

@interface UIInterpolatedFloat : NSObject <UIVectorOperatable>
{
    double _number;	// 8 = 0x8
    double _epsilon;	// 16 = 0x10
}

+ (id)zero;	// IMP=0x00000000011bb695
+ (id)epsilon;	// IMP=0x00000000011bb628
+ (id)valueWithFloat:(double)arg1 epsilon:(double)arg2;	// IMP=0x00000000011bb52a
+ (id)valueWithFloat:(double)arg1;	// IMP=0x00000000011bb510
@property(readonly, copy) NSString *debugDescription;
- (void)reinitWithVector:(id)arg1;	// IMP=0x00000000011bb95e
- (id)multiplyByVector:(id)arg1;	// IMP=0x00000000011bb946
- (id)multiplyByScalar:(double)arg1;	// IMP=0x00000000011bb933
- (id)addVector:(id)arg1;	// IMP=0x00000000011bb91b
- (void)integrateWithVelocity:(id)arg1 target:(id)arg2 intermediateTarget:(id)arg3 intermediateTargetVelocity:(id)arg4 parameters:(CDStruct_500c0369)arg5 state:(CDStruct_289c5ec3)arg6 delta:(double)arg7;	// IMP=0x00000000011bb734
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011bb6fd
- (_Bool)isUndefined;	// IMP=0x00000000011bb601
- (_Bool)isApproximatelyEqualTo:(id)arg1 withinEpsilon:(id)arg2;	// IMP=0x00000000011bb5dd
- (_Bool)isApproximatelyEqualTo:(id)arg1;	// IMP=0x00000000011bb5b9
- (id)getValue;	// IMP=0x00000000011bb598
- (id)getNSValue;	// IMP=0x00000000011bb586
- (id)interpolateTo:(id)arg1 progress:(double)arg2;	// IMP=0x00000000011bb562

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
