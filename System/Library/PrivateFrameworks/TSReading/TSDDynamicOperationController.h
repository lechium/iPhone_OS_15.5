//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TSDAutoscroll, TSDInteractiveCanvasController;

@interface TSDDynamicOperationController : NSObject
{
    TSDInteractiveCanvasController *mICC;	// 8 = 0x8
    _Bool mOperationIsDynamic;	// 16 = 0x10
    _Bool mResetGuides;	// 17 = 0x11
    _Bool mSupportsAlignmentGuides;	// 18 = 0x12
    _Bool mPossibleDynamicOperation;	// 19 = 0x13
    NSMutableSet *mReps;	// 24 = 0x18
    NSMutableSet *mAllTransformedReps;	// 32 = 0x20
    TSDAutoscroll *mAutoscroll;	// 40 = 0x28
}

@property(readonly, nonatomic) NSSet *allTransformedReps; // @synthesize allTransformedReps=mAllTransformedReps;
@property(readonly, nonatomic) NSSet *currentlyTransformingReps; // @synthesize currentlyTransformingReps=mReps;
- (void)p_resetGuidesForCleanup:(_Bool)arg1;	// IMP=0x000000000017a952
- (void)invalidateGuides;	// IMP=0x000000000017a948
- (void)handleTrackerManipulator:(id)arg1;	// IMP=0x000000000017a74a
- (void)p_controllingTMDidResetInOperation:(id)arg1;	// IMP=0x000000000017a588
- (void)handleGestureRecognizer:(id)arg1;	// IMP=0x000000000017a33d
- (void)stopTransformingReps:(id)arg1;	// IMP=0x000000000017a166
- (void)startTransformingReps:(id)arg1;	// IMP=0x0000000000179e55
- (void)p_cleanupOperation;	// IMP=0x0000000000179dca
- (void)cancelOperation;	// IMP=0x0000000000179d1b
- (_Bool)isOperationDynamic;	// IMP=0x0000000000179d12
- (_Bool)isInPossibleDynamicOperation;	// IMP=0x0000000000179d09
- (_Bool)isInOperation;	// IMP=0x0000000000179cea
- (void)endOperation;	// IMP=0x0000000000179b94
- (void)p_beginDynamicOperationForReps:(id)arg1;	// IMP=0x0000000000179b1e
- (void)beginOperation;	// IMP=0x000000000017984a
- (void)beginPossibleDynamicOperation;	// IMP=0x0000000000179709
- (void)dealloc;	// IMP=0x00000000001796bf
- (id)initWithInteractiveCanvasController:(id)arg1;	// IMP=0x000000000017967e

@end
