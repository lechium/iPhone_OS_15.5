//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPopoverControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, UIAlertController, _UIAlertControllerShimPresenter;
@protocol UIActionSheetDelegate;

@interface UIActionSheet <UIPopoverControllerDelegate>
{
    UIAlertController *_alertController;	// 8 = 0x8
    _UIAlertControllerShimPresenter *_presenter;	// 16 = 0x10
    UIActionSheet *_retainedSelf;	// 24 = 0x18
    NSMutableArray *_actions;	// 32 = 0x20
    long long _cancelIndex;	// 40 = 0x28
    long long _firstOtherButtonIndex;	// 48 = 0x30
    long long _destructiveButtonIndex;	// 56 = 0x38
    long long _actionSheetStyle;	// 64 = 0x40
    _Bool _hasPreparedAlertActions;	// 72 = 0x48
    _Bool _isPresented;	// 73 = 0x49
    _Bool _alertControllerShouldDismiss;	// 74 = 0x4a
    _Bool _handlingAlertActionShouldDismiss;	// 75 = 0x4b
    _Bool _dismissingAlertController;	// 76 = 0x4c
    id <UIActionSheetDelegate> _delegate;	// 80 = 0x50
    id _context;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000001bdbb
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) __weak id <UIActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_titleLabel;	// IMP=0x000000000001bd61
- (id)_alertController;	// IMP=0x000000000001bd4c
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;	// IMP=0x000000000001bd37
- (void)_setAttributedTitleString:(id)arg1;	// IMP=0x000000000001bcc5
- (void)presentFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 allowInteractionWithViews:(id)arg4 backgroundStyle:(long long)arg5 animated:(_Bool)arg6;	// IMP=0x000000000001bcae
- (id)subtitle;	// IMP=0x000000000001bc9c
- (void)setSubtitle:(id)arg1;	// IMP=0x000000000001bc8a
- (void)setTaglineText:(id)arg1;	// IMP=0x000000000001bc78
- (id)bodyText;	// IMP=0x000000000001bc66
- (void)setBodyText:(id)arg1;	// IMP=0x000000000001bc54
- (id)message;	// IMP=0x000000000001bc37
- (void)setMessage:(id)arg1;	// IMP=0x000000000001bc1a
- (void)_didPresent;	// IMP=0x000000000001bbbd
- (void)_setIsPresented:(_Bool)arg1;	// IMP=0x000000000001bb07
- (void)popoverControllerDidDismissPopover:(id)arg1;	// IMP=0x000000000001bab1
- (void)_dismissForTappedIndex:(long long)arg1;	// IMP=0x000000000001ba9a
- (_Bool)_prepareToDismissForTappedIndex:(long long)arg1;	// IMP=0x000000000001b9e0
- (void)_prepareAlertActions;	// IMP=0x000000000001b6d6
- (id)_preparedAlertActionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001b652
- (void)_performPresentationDismissalWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001b526
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001b464
- (void)showInView:(id)arg1;	// IMP=0x000000000001b31c
- (void)_showFromRect:(struct CGRect)arg1 inView:(id)arg2 direction:(unsigned long long)arg3 animated:(_Bool)arg4;	// IMP=0x000000000001b24f
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000001b235
- (void)showFromBarButtonItem:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001b17c
- (void)showFromTabBar:(id)arg1;	// IMP=0x000000000001b16a
- (void)showFromToolbar:(id)arg1;	// IMP=0x000000000001b158
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
@property(readonly, nonatomic) long long firstOtherButtonIndex;
- (void)_setFirstOtherButtonIndex:(long long)arg1;	// IMP=0x000000000001b0e2
@property(nonatomic) long long destructiveButtonIndex;
@property(nonatomic) long long cancelButtonIndex;
@property(readonly, nonatomic) long long numberOfButtons;
- (id)buttonTitleAtIndex:(long long)arg1;	// IMP=0x000000000001b064
- (long long)addButtonWithTitle:(id)arg1;	// IMP=0x000000000001af98
@property(nonatomic) long long actionSheetStyle;
@property(copy, nonatomic) NSString *title;
- (void)dealloc;	// IMP=0x000000000001aec3
- (id)initWithTitle:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;	// IMP=0x000000000001ac54
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001ab1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
