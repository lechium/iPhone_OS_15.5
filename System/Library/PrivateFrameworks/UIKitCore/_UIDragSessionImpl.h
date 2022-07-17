//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragSession-Protocol.h>
#import <UIKitCore/_UIDragDropSessionInternal-Protocol.h>
#import <UIKitCore/_UIDragSetDownAnimationTarget-Protocol.h>
#import <UIKitCore/_UIDraggingSessionDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString, UIDragInteraction, _UIInternalDraggingSessionSource;

__attribute__((visibility("hidden")))
@interface _UIDragSessionImpl : NSObject <_UIDraggingSessionDelegate, UIDragSession, _UIDragSetDownAnimationTarget, _UIDragDropSessionInternal>
{
    NSMutableArray *_allItems;	// 8 = 0x8
    NSMapTable *_dragSourceInteractionByItem;	// 16 = 0x10
    NSHashTable *_allInteractions;	// 24 = 0x18
    _Bool _didHandOffDragImage;	// 32 = 0x20
    NSMutableSet *_addedDraggingItemsWaitingForHandOffOfDragImage;	// 40 = 0x28
    NSMutableSet *_addedDragItemsPendingUpdate;	// 48 = 0x30
    _Bool _sentSessionDidBegin;	// 56 = 0x38
    id _localContext;	// 64 = 0x40
    _UIInternalDraggingSessionSource *_internalDragSession;	// 72 = 0x48
    UIDragInteraction *_primaryInteraction;	// 80 = 0x50
}

+ (id)_localDragSessionForSessionDestination:(id)arg1;	// IMP=0x00000000005f402c
+ (id)activeSessions;	// IMP=0x00000000005f400b
- (void).cxx_destruct;	// IMP=0x00000000005f6060
@property(nonatomic, getter=_sentSessionDidBegin, setter=_setSentSessionDidBegin:) _Bool sentSessionDidBegin; // @synthesize sentSessionDidBegin=_sentSessionDidBegin;
@property(readonly, nonatomic) __weak UIDragInteraction *primaryInteraction; // @synthesize primaryInteraction=_primaryInteraction;
@property(retain, nonatomic, getter=_internalDragSession, setter=_setInternalDragSession:) _UIInternalDraggingSessionSource *internalDragSession; // @synthesize internalDragSession=_internalDragSession;
@property(retain, nonatomic) id localContext; // @synthesize localContext=_localContext;
- (id)_setDownAnimation:(id)arg1 customSpringAnimationBehaviorForSetDownOfDragItem:(id)arg2;	// IMP=0x00000000005f5f93
- (_Bool)_setDownAnimation:(id)arg1 shouldDelaySetDownOfDragItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000005f5e18
- (void)_setDownAnimation:(id)arg1 willAnimateSetDownOfDragItem:(id)arg2 withAnimator:(id)arg3;	// IMP=0x00000000005f5ca3
- (id)_setDownAnimation:(id)arg1 prepareForSetDownOfDragItem:(id)arg2 visibleDroppedItem:(id)arg3;	// IMP=0x00000000005f589f
- (id)_windowForSetDownOfDragItem:(id)arg1;	// IMP=0x00000000005f5825
- (void)draggingSessionDidTransferItems:(id)arg1;	// IMP=0x00000000005f56e0
- (void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;	// IMP=0x00000000005f5562
- (void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;	// IMP=0x00000000005f541e
- (void)draggingSession:(id)arg1 willAddItems:(id)arg2;	// IMP=0x00000000005f4fca
- (void)draggingSessionDidMove:(id)arg1;	// IMP=0x00000000005f4e9c
- (void)_draggingSession:(id)arg1 handedOffDragImageForItem:(id)arg2;	// IMP=0x00000000005f4dbc
- (void)_draggingSessionHandedOffDragImage:(id)arg1;	// IMP=0x00000000005f4d54
- (void)draggingSessionWillBegin:(id)arg1;	// IMP=0x00000000005f4d1e
- (_Bool)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;	// IMP=0x00000000005f4ce1
- (_Bool)draggingSessionPrefersFullSizePreviews:(id)arg1;	// IMP=0x00000000005f4ca4
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingWithinApp:(_Bool)arg2;	// IMP=0x00000000005f4c58
- (_Bool)canLoadObjectsOfClass:(Class)arg1;	// IMP=0x00000000005f4a76
- (_Bool)hasItemsConformingToTypeIdentifiers:(id)arg1;	// IMP=0x00000000005f473b
@property(readonly, nonatomic, getter=isRestrictedToDraggingApplication) _Bool restrictedToDraggingApplication;
@property(readonly, nonatomic) _Bool allowsMoveOperation;
- (struct CGPoint)locationInView:(id)arg1;	// IMP=0x00000000005f45bb
@property(readonly, nonatomic) NSArray *items;
- (void)_cancelDrag;	// IMP=0x00000000005f4597
@property(readonly, nonatomic) long long _dataOwner;
@property(readonly, nonatomic, getter=_allowsItemsToUpdate) _Bool _allowsItemsToUpdate;
- (void)_itemsNeedUpdate:(id)arg1;	// IMP=0x00000000005f41ea
- (id)_internalSession;	// IMP=0x00000000005f3f8f
- (id)dragSourceInteractionForDragItem:(id)arg1;	// IMP=0x00000000005f3f79
- (void)addItems:(id)arg1 forDragSourceInteraction:(id)arg2;	// IMP=0x00000000005f3bd2
@property(readonly, nonatomic) NSSet *trackedInteractions;
- (_Bool)_isActive;	// IMP=0x00000000005f3ba6
- (_Bool)_canAddItems;	// IMP=0x00000000005f3b90
- (id)initWithInteraction:(id)arg1;	// IMP=0x00000000005f39c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
