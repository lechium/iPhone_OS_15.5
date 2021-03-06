//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIMultiSelectInteractionDelegate-Protocol.h>

@class NSString, UICollectionView, UIMultiSelectInteraction, UIMultiSelectInteractionState;

__attribute__((visibility("hidden")))
@interface _UICollectionViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate>
{
    long long _computedAxisConstraint;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
    UIMultiSelectInteraction *_multiSelectInteraction;	// 24 = 0x18
    UIMultiSelectInteractionState *_selectionState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000006df6af
@property(retain, nonatomic) UIMultiSelectInteractionState *selectionState; // @synthesize selectionState=_selectionState;
@property(retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // @synthesize multiSelectInteraction=_multiSelectInteraction;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic, getter=isInMultiselectInteraction) _Bool inMultiselectInteraction;
- (_Bool)_allowsBandSelectionStartingAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000006df498
- (_Bool)multiSelectInteraction:(id)arg1 shouldStartBandSelectionAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000006df486
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000006df3e6
- (_Bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;	// IMP=0x00000000006df33a
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000006df20b
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;	// IMP=0x00000000006df178
- (_Bool)shouldAllowSelectionExtensionAtIndexPath:(id)arg1;	// IMP=0x00000000006df03e
- (_Bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000006defac
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000006dee48
- (_Bool)_testTouchPolicyAtPoint:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;	// IMP=0x00000000006decf0
- (_Bool)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000006dec07
- (_Bool)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;	// IMP=0x00000000006deaac
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000006de4b1
- (_Bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;	// IMP=0x00000000006de418
- (_Bool)_shouldBeginInteractionAtIndexPath:(id)arg1;	// IMP=0x00000000006de366
- (_Bool)_shouldBeginInteractionAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000006de2d4
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(_Bool)arg1;	// IMP=0x00000000006de0e1
- (_Bool)isInMultiSelectMode;	// IMP=0x00000000006de00f
- (_Bool)supportsMultiSelectInteraction:(id)arg1;	// IMP=0x00000000006ddf70
- (void)multiSelectInteraction:(id)arg1 extendSelectionInDirection:(unsigned long long)arg2;	// IMP=0x00000000006dd99b
- (_Bool)supportsKeyboardSelectionExtension;	// IMP=0x00000000006dd993
- (id)targetForKeyCommands;	// IMP=0x00000000006dd985
- (id)keyCommandsForSelectionExtension;	// IMP=0x00000000006dd96f
- (long long)_hitTestForSystemEditControlAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000006dd592
- (_Bool)_isUsingTableLayoutSPI;	// IMP=0x00000000006dd51b
- (id)_collectionViewDelegate;	// IMP=0x00000000006dd455
- (void)clearSelectionState;	// IMP=0x00000000006dd441
- (void)selectedIndexPathsChanged:(id)arg1;	// IMP=0x00000000006dd36c
- (void)updateSelectedIndexPaths:(id)arg1;	// IMP=0x00000000006dd1f6
- (void)_deselectIndexPaths:(id)arg1;	// IMP=0x00000000006dce69
- (void)_selectIndexPaths:(id)arg1;	// IMP=0x00000000006dcad2
- (void)multiSelectInteraction:(id)arg1 toggleSelectionWithinRect:(struct CGRect)arg2 leadingPoint:(struct CGPoint)arg3;	// IMP=0x00000000006dc8cd
- (void)multiSelectInteraction:(id)arg1 selectItemsWithinRect:(struct CGRect)arg2 leadingPoint:(struct CGPoint)arg3;	// IMP=0x00000000006dc849
- (id)_indexPathsWithinRect:(struct CGRect)arg1;	// IMP=0x00000000006dc124
- (void)_extendSelectionToPoint:(struct CGPoint)arg1;	// IMP=0x00000000006dbf62
- (id)indexPathsBetweenIndexPath:(id)arg1 andIndexPath:(id)arg2;	// IMP=0x00000000006db776
- (_Bool)_point:(struct CGPoint)arg1 liesBeyondFrame:(struct CGRect)arg2 inDirection:(double)arg3;	// IMP=0x00000000006db69b
- (id)_antecedentIndexPathsForLayoutAttributes:(id)arg1 inDirection:(double)arg2;	// IMP=0x00000000006db14f
- (void)_autoScrollAtIndexPaths:(id)arg1 fromPoint:(struct CGPoint)arg2;	// IMP=0x00000000006db074
- (id)childScrollViewAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000006dafd4
- (id)_boundingScrollViewForIndexPath:(id)arg1;	// IMP=0x00000000006daf2b
- (id)_autoScrollAssistantForIndexPaths:(id)arg1;	// IMP=0x00000000006dad03
- (id)selectionEndIndexPath;	// IMP=0x00000000006daced
- (id)selectionStartIndexPath;	// IMP=0x00000000006dacd7
- (long long)axisConstraintAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000006dac43
- (long long)axisConstraintAtIndexPath:(id)arg1;	// IMP=0x00000000006daa05
- (long long)axisConstraintForSingleFingerPanGestureAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000006da926
- (void)uninstallFromCollectionView;	// IMP=0x00000000006da8e3
- (void)dealloc;	// IMP=0x00000000006da8a5
- (id)initWithCollectionView:(id)arg1;	// IMP=0x00000000006da7b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

