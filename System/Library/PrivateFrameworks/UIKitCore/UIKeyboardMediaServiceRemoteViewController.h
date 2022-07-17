//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKeyboardMediaHostProtocol-Protocol.h>

@class NSString;
@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate;

@interface UIKeyboardMediaServiceRemoteViewController <UIKeyboardMediaHostProtocol>
{
    _Bool _shownInline;	// 400 = 0x190
    id <UIKeyboardMediaServiceRemoteViewControllerDelegate> _delegate;	// 408 = 0x198
}

+ (id)exportedInterface;	// IMP=0x000000000078b6e0
+ (id)serviceViewControllerInterface;	// IMP=0x000000000078b674
+ (_Bool)__shouldHostRemoteTextEffectsWindow;	// IMP=0x000000000078b66c
+ (id)requestCardViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000078b649
+ (id)requestInlineViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000078b4ff
- (void).cxx_destruct;	// IMP=0x000000000078bae0
@property(nonatomic) __weak id <UIKeyboardMediaServiceRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=_isShownInline, setter=_setShownInline:) _Bool _shownInline; // @synthesize _shownInline;
- (void)draggedStickerToPoint:(struct CGPoint)arg1;	// IMP=0x000000000078ba3a
- (void)requestInsertionPointCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000078b9c8
- (void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3;	// IMP=0x000000000078b92e
- (void)pasteImageAtFileHandle:(id)arg1;	// IMP=0x000000000078b8bc
- (void)dismissCard;	// IMP=0x000000000078b87f
- (void)presentCard;	// IMP=0x000000000078b842
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000078b7d0
- (_Bool)__shouldRemoteViewControllerFenceGeometryChange:(const CDStruct_ac6e8047 *)arg1 forAncestor:(id)arg2;	// IMP=0x000000000078b74c
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000078b4f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
