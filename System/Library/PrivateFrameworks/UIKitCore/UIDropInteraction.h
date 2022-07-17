//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIDragInteraction-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteraction_Internal-Protocol.h>
#import <UIKitCore/_UIDragSetDownAnimationTarget-Protocol.h>

@class NSMapTable, NSMutableSet, NSString, UIDropInteractionContextImpl, UIPasteConfiguration, UIView;
@protocol UIDropInteractionDelegate, UIDropInteractionEffect, _UIDropInteractionOwning;

@interface UIDropInteraction : NSObject <UIDragGestureRecognizerDelegate, UIInteraction_Internal, UIDragInteraction, _UIDragSetDownAnimationTarget, UIInteraction>
{
    NSMutableSet *_activeDragGestureRecognizers;	// 8 = 0x8
    NSMapTable *_enteredDropSessionByDraggingSession;	// 16 = 0x10
    unsigned long long _potentialDragOperation;	// 24 = 0x18
    _Bool _allowsSimultaneousDropSessions;	// 32 = 0x20
    _Bool _wantsDefaultVisualBehavior;	// 33 = 0x21
    id <UIDropInteractionDelegate> _delegate;	// 40 = 0x28
    id <_UIDropInteractionOwning> _owner;	// 48 = 0x30
    UIDropInteractionContextImpl *_context;	// 56 = 0x38
    UIPasteConfiguration *_pasteConfiguration;	// 64 = 0x40
    id <UIDropInteractionEffect> _interactionEffect;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000005e2ee0
@property(nonatomic, getter=_wantsDefaultVisualBehavior, setter=_setWantsDefaultVisualBehavior:) _Bool wantsDefaultVisualBehavior; // @synthesize wantsDefaultVisualBehavior=_wantsDefaultVisualBehavior;
@property(retain, nonatomic) id <UIDropInteractionEffect> interactionEffect; // @synthesize interactionEffect=_interactionEffect;
@property(readonly, copy, nonatomic, getter=_pasteConfiguration) UIPasteConfiguration *pasteConfiguration; // @synthesize pasteConfiguration=_pasteConfiguration;
@property(retain, nonatomic) UIDropInteractionContextImpl *context; // @synthesize context=_context;
@property(nonatomic) __weak id <_UIDropInteractionOwning> owner; // @synthesize owner=_owner;
@property(nonatomic) _Bool allowsSimultaneousDropSessions; // @synthesize allowsSimultaneousDropSessions=_allowsSimultaneousDropSessions;
@property(readonly, nonatomic) __weak id <UIDropInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendSessionDidEnd:(id)arg1;	// IMP=0x00000000005e2c6c
- (void)_dropSessionEntered:(id)arg1 withSessionDestination:(id)arg2;	// IMP=0x00000000005e2bc7
- (unsigned long long)_setLastDragOperation:(unsigned long long)arg1 forbidden:(_Bool)arg2 precise:(_Bool)arg3 prefersFullSizePreview:(_Bool)arg4 preferredBadgeStyle:(long long)arg5 onSession:(id)arg6;	// IMP=0x00000000005e2ae1
- (unsigned long long)_validateDragOperation:(unsigned long long)arg1 forSelector:(SEL)arg2 delegate:(id)arg3 dropSession:(id)arg4 onSession:(id)arg5 forbidden:(_Bool *)arg6;	// IMP=0x00000000005e286b
- (_Bool)_canHandleDragEvent:(id)arg1;	// IMP=0x00000000005e270f
- (id)_setDownAnimation:(id)arg1 customSpringAnimationBehaviorForSetDownOfDragItem:(id)arg2;	// IMP=0x00000000005e267f
- (_Bool)_setDownAnimation:(id)arg1 shouldDelaySetDownOfDragItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005e2677
- (void)_setDownAnimation:(id)arg1 willAnimateSetDownOfDragItem:(id)arg2 withAnimator:(id)arg3;	// IMP=0x00000000005e25a5
- (id)_setDownAnimation:(id)arg1 prepareForSetDownOfDragItem:(id)arg2 visibleDroppedItem:(id)arg3;	// IMP=0x00000000005e1e6c
- (id)_windowForSetDownOfDragItem:(id)arg1;	// IMP=0x00000000005e1e1c
- (void)_prepareItemsInSessionForDrop:(id)arg1;	// IMP=0x00000000005e1cdf
- (void)_dragDestinationGestureStateChanged:(id)arg1;	// IMP=0x00000000005e12b1
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x00000000005e129b
- (_Bool)_allowsSimultaneousDragWithEvent:(id)arg1;	// IMP=0x00000000005e1289
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveDragEvent:(id)arg2;	// IMP=0x00000000005e11a1
- (void)didMoveToView:(id)arg1;	// IMP=0x00000000005e10f4
- (void)willMoveToView:(id)arg1;	// IMP=0x00000000005e10e2
@property(readonly, nonatomic) __weak UIView *view;
- (void)didMoveToOwner:(id)arg1;	// IMP=0x00000000005e0dbe
- (void)willMoveToOwner:(id)arg1;	// IMP=0x00000000005e0d5b
- (_Bool)isActive;	// IMP=0x00000000005e0d3e
- (id)_dynamicGestureRecognizersForEvent:(id)arg1;	// IMP=0x00000000005e0c8b
- (id)_initWithPasteConfiguration:(id)arg1;	// IMP=0x00000000005e0c20
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000005e0bad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
