//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/UIActionSheetDelegate-Protocol.h>

@class NSString, UIActionSheet, UIView;

@interface TSKUIActionSheet <UIActionSheetDelegate>
{
    UIActionSheet *_actionSheet;	// 64 = 0x40
    UIView *_targetView;	// 72 = 0x48
}

+ (id)alertWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 targetView:(id)arg5;	// IMP=0x000000000008b7c5
- (void)willPresentActionSheet:(id)arg1;	// IMP=0x000000000008bcfc
- (void)didPresentActionSheet:(id)arg1;	// IMP=0x000000000008bc49
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2;	// IMP=0x000000000008bb96
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x000000000008bae3
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x000000000008ba30
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008ba13
- (long long)firstOtherButtonIndex;	// IMP=0x000000000008b9f6
- (void)setCancelButtonIndex:(long long)arg1;	// IMP=0x000000000008b9d9
- (long long)cancelButtonIndex;	// IMP=0x000000000008b9bc
- (long long)numberOfButtons;	// IMP=0x000000000008b99f
- (id)buttonTitleAtIndex:(long long)arg1;	// IMP=0x000000000008b982
- (long long)addButtonWithTitle:(id)arg1;	// IMP=0x000000000008b965
- (void)showAlert;	// IMP=0x000000000008b93a
- (void)dealloc;	// IMP=0x000000000008b8cf
- (id)initWithTitle:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 targetView:(id)arg5;	// IMP=0x000000000008b825

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

