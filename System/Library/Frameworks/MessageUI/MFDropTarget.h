//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MessageUI/UIDropInteractionDelegate_Private-Protocol.h>

@class NSSet, NSString, UIDropInteraction, UIView;
@protocol MFDropTargetDelegate;

@interface MFDropTarget : NSObject <UIDropInteractionDelegate_Private>
{
    struct {
        unsigned int respondsToCanDropDraggedItemsAtPoint;
        unsigned int respondsToDragEntered;
        unsigned int respondsToDragExited;
        unsigned int respondsToDragDidMoveToPoint;
        unsigned int respondsToDidDropItemsAtPoint;
        unsigned int respondsToDataOwner;
    } _delegateFlags;	// 8 = 0x8
    NSSet *_acceptableUTIs;	// 32 = 0x20
    UIView *_targetView;	// 40 = 0x28
    id <MFDropTargetDelegate> _delegate;	// 48 = 0x30
    UIDropInteraction *_dropInteraction;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000007022b
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(nonatomic) __weak id <MFDropTargetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(copy, nonatomic) NSSet *acceptableUTIs; // @synthesize acceptableUTIs=_acceptableUTIs;
- (void)_dropSessionEnded;	// IMP=0x00000000000701a3
- (_Bool)_delegateCanDropItemsWithDropSession:(id)arg1;	// IMP=0x00000000000700ab
- (_Bool)_delegateHandlesDrops;	// IMP=0x000000000007009e
- (void)_delegateDidDropItemsWithDropSession:(id)arg1;	// IMP=0x000000000006ff88
- (_Bool)_sessionContainsOnlyAcceptableTypeIdentifiers:(id)arg1;	// IMP=0x000000000006fd7e
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;	// IMP=0x000000000006fcf6
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;	// IMP=0x000000000006fce3
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;	// IMP=0x000000000006fc3e
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;	// IMP=0x000000000006fabd
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;	// IMP=0x000000000006fa56
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;	// IMP=0x000000000006f99c
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;	// IMP=0x000000000006f859
- (void)_updateDelegateFlags;	// IMP=0x000000000006f780
- (id)initWithView:(id)arg1 delegate:(id)arg2;	// IMP=0x000000000006f654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
