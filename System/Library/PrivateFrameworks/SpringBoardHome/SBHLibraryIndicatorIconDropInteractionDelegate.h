//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBFSpringLoadedInteractionBehaviorDelegate-Protocol.h>
#import <SpringBoardHome/SBFSpringLoadedInteractionEffectDelegate-Protocol.h>
#import <SpringBoardHome/UIDropInteractionDelegate-Protocol.h>

@class NSString, SBIconView, UIDropInteraction;
@protocol SBHLibraryIndicatorIconDropInteractionContextProviding;

@interface SBHLibraryIndicatorIconDropInteractionDelegate : NSObject <SBFSpringLoadedInteractionBehaviorDelegate, SBFSpringLoadedInteractionEffectDelegate, UIDropInteractionDelegate>
{
    SBIconView *_libraryIndicatorIconView;	// 8 = 0x8
    id <SBHLibraryIndicatorIconDropInteractionContextProviding> _contextProvider;	// 16 = 0x10
    UIDropInteraction *_dropInteraction;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001d636b
@property(readonly, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(nonatomic) __weak id <SBHLibraryIndicatorIconDropInteractionContextProviding> contextProvider; // @synthesize contextProvider=_contextProvider;
@property(readonly, nonatomic) __weak SBIconView *libraryIndicatorIconView; // @synthesize libraryIndicatorIconView=_libraryIndicatorIconView;
- (void)_updateIndicatorIconViewForSession:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x00000000001d61cb
- (void)_handleSpringLoadedInteractionDidActivateWithContext:(id)arg1;	// IMP=0x00000000001d615b
- (void)_notifyDidPerformDropForSession:(id)arg1;	// IMP=0x00000000001d60d1
- (id)_iconModel;	// IMP=0x00000000001d6051
- (_Bool)_canPerformDropForDraggedIcon:(id)arg1;	// IMP=0x00000000001d5f91
- (_Bool)_canPerformDropForDragItem:(id)arg1;	// IMP=0x00000000001d5ef2
- (_Bool)_canPerformDropForAnyItemInSession:(id)arg1;	// IMP=0x00000000001d5ce5
- (id)_draggedItemIdentifiersInSession:(id)arg1;	// IMP=0x00000000001d5a17
- (id)_iconIdentifierForDragItem:(id)arg1;	// IMP=0x00000000001d59c4
- (id)targetViewForSpringLoadingEffectForView:(id)arg1;	// IMP=0x00000000001d594a
- (id)targetItemForSpringLoadingInteractionInView:(id)arg1 atLocation:(struct CGPoint)arg2 forDropSession:(id)arg3;	// IMP=0x00000000001d5903
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;	// IMP=0x00000000001d58fd
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;	// IMP=0x00000000001d571d
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;	// IMP=0x00000000001d55a6
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x00000000001d5336
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;	// IMP=0x00000000001d531f
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;	// IMP=0x00000000001d5308
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;	// IMP=0x00000000001d52ee
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x00000000001d52a4
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x00000000001d518f
- (id)initWithLibraryIndicatorIconView:(id)arg1;	// IMP=0x00000000001d4e29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

