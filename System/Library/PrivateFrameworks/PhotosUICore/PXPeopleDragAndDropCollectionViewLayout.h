//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath, NSTimer;
@protocol PXPeopleDragAndDropCollectionViewDelegateLayout;

@interface PXPeopleDragAndDropCollectionViewLayout : UICollectionViewFlowLayout
{
    _Bool _performActualRearrange;	// 8 = 0x8
    NSTimer *_dragPauseTimer;	// 16 = 0x10
    NSIndexPath *_dragIndexPathForMerge;	// 24 = 0x18
    NSIndexPath *_targetIndexPathForMerge;	// 32 = 0x20
    struct CGPoint _lastDragPoint;	// 40 = 0x28
    struct CGPoint _currentPosition;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002f95fd
@property(retain, nonatomic) NSIndexPath *targetIndexPathForMerge; // @synthesize targetIndexPathForMerge=_targetIndexPathForMerge;
@property(retain, nonatomic) NSIndexPath *dragIndexPathForMerge; // @synthesize dragIndexPathForMerge=_dragIndexPathForMerge;
@property(nonatomic) _Bool performActualRearrange; // @synthesize performActualRearrange=_performActualRearrange;
@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) struct CGPoint lastDragPoint; // @synthesize lastDragPoint=_lastDragPoint;
@property(retain, nonatomic) NSTimer *dragPauseTimer; // @synthesize dragPauseTimer=_dragPauseTimer;
- (void)_cancelDragPauseTimer;	// IMP=0x00000000002f94ae
- (void)_updateDragPause;	// IMP=0x00000000002f9412
- (void)_potentialMergeWithDragIndexPath:(id)arg1 ontoIndexPath:(id)arg2 withPosition:(struct CGPoint)arg3;	// IMP=0x00000000002f92d1
- (void)dealloc;	// IMP=0x00000000002f9293
@property(readonly, nonatomic) id <PXPeopleDragAndDropCollectionViewDelegateLayout> mergeDelegate;
- (_Bool)performMergeIfPossible;	// IMP=0x00000000002f913c
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint)arg2;	// IMP=0x00000000002f83fa
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000002f82ea
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000002f81da
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;	// IMP=0x00000000002f80ef
- (id)init;	// IMP=0x00000000002f809b

@end
