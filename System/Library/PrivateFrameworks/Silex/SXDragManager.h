//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/UIDragInteractionDelegate-Protocol.h>

@class NSString, UIDragInteraction;
@protocol SXDragManagerDataSource;

@interface SXDragManager : NSObject <UIDragInteractionDelegate>
{
    _Bool _enabled;	// 8 = 0x8
    id <SXDragManagerDataSource> _dataSource;	// 16 = 0x10
    unsigned long long _sharingPolicy;	// 24 = 0x18
    UIDragInteraction *_dragInteraction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a14ab
@property(readonly, nonatomic) UIDragInteraction *dragInteraction; // @synthesize dragInteraction=_dragInteraction;
@property(readonly, nonatomic) unsigned long long sharingPolicy; // @synthesize sharingPolicy=_sharingPolicy;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <SXDragManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)updateAccessibilityDragSourceDescriptorsForDraggableElement:(id)arg1;	// IMP=0x00000000000a12b2
- (_Bool)dragSession:(id)arg1 containsDragItemWithIdentifier:(id)arg2;	// IMP=0x00000000000a1047
- (id)dragItemForObject:(id)arg1 withSession:(id)arg2;	// IMP=0x00000000000a0efb
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;	// IMP=0x00000000000a0d22
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;	// IMP=0x00000000000a0b5c
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;	// IMP=0x00000000000a0983
- (id)itemsForSession:(id)arg1 atLocation:(struct CGPoint)arg2;	// IMP=0x00000000000a085d
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;	// IMP=0x00000000000a076d
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;	// IMP=0x00000000000a0758
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;	// IMP=0x00000000000a06ab
- (void)dealloc;	// IMP=0x00000000000a057c
- (id)initWithSharingPolicy:(unsigned long long)arg1 dataSource:(id)arg2;	// IMP=0x00000000000a0494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

