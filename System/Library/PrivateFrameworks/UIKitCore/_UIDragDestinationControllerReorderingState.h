//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UICollectionView, _UIDragDestinationControllerSessionState, _UIDragMovementCadenceSettings, _UIVelocityIntegrator;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationControllerReorderingState : NSObject
{
    _Bool _supportsLocalSessionReordering;	// 8 = 0x8
    _Bool _hasStartedInteractiveReorder;	// 9 = 0x9
    _UIVelocityIntegrator *_velocityIntegrator;	// 16 = 0x10
    long long _reorderCount;	// 24 = 0x18
    _UIDragDestinationControllerSessionState *_sessionState;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    double _reorderBecamePossibleTime;	// 48 = 0x30
    long long _dragMovementPhase;	// 56 = 0x38
    _UIDragMovementCadenceSettings *_reorderCadenceSettings;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003a81fe
@property(retain, nonatomic) _UIDragMovementCadenceSettings *reorderCadenceSettings; // @synthesize reorderCadenceSettings=_reorderCadenceSettings;
@property(nonatomic) long long dragMovementPhase; // @synthesize dragMovementPhase=_dragMovementPhase;
@property(nonatomic) double reorderBecamePossibleTime; // @synthesize reorderBecamePossibleTime=_reorderBecamePossibleTime;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(nonatomic) _Bool hasStartedInteractiveReorder; // @synthesize hasStartedInteractiveReorder=_hasStartedInteractiveReorder;
@property(nonatomic) long long reorderCount; // @synthesize reorderCount=_reorderCount;
@property(nonatomic) _Bool supportsLocalSessionReordering; // @synthesize supportsLocalSessionReordering=_supportsLocalSessionReordering;
@property(retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;
- (id)_reorderCadenceSettings;	// IMP=0x00000000003a800f
- (void)velocityExceededThreshold;	// IMP=0x00000000003a7fba
- (_Bool)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)arg1;	// IMP=0x00000000003a7f74
- (void)reorderingDidBecomePossible;	// IMP=0x00000000003a7f3f
@property(readonly, nonatomic) _Bool hasPerformedReordering;
- (void)reorderResetToStartingLocation;	// IMP=0x00000000003a7f19
- (void)didEndInteractiveReorder;	// IMP=0x00000000003a7f0f
- (void)didBeginInteractiveReorder;	// IMP=0x00000000003a7f05
- (void)didReorder;	// IMP=0x00000000003a7eb1
- (id)initWithSessionState:(id)arg1 collectionView:(id)arg2;	// IMP=0x00000000003a7de2

@end

