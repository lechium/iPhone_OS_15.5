//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/UIAlertViewDelegate-Protocol.h>

@class NSString, UIAlertView;

@interface TSKUIAlert <UIAlertViewDelegate>
{
    UIAlertView *_alertView;	// 64 = 0x40
}

+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;	// IMP=0x000000000008b124
+ (void)setUseMockUIAlert:(_Bool)arg1;	// IMP=0x000000000008b118
- (void)willPresentAlertView:(id)arg1;	// IMP=0x000000000008b71a
- (void)didPresentAlertView:(id)arg1;	// IMP=0x000000000008b667
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;	// IMP=0x000000000008b5b4
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x000000000008b501
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;	// IMP=0x000000000008b44e
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008b3dd
- (long long)firstOtherButtonIndex;	// IMP=0x000000000008b3c0
- (void)setCancelButtonIndex:(long long)arg1;	// IMP=0x000000000008b3a3
- (long long)cancelButtonIndex;	// IMP=0x000000000008b386
- (long long)numberOfButtons;	// IMP=0x000000000008b369
- (id)buttonTitleAtIndex:(long long)arg1;	// IMP=0x000000000008b34c
- (long long)addButtonWithTitle:(id)arg1;	// IMP=0x000000000008b32f
- (void)showAlert;	// IMP=0x000000000008b312
- (void)dealloc;	// IMP=0x000000000008b2b9
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 otherOtherButtonTitle:(id)arg5;	// IMP=0x000000000008b21d
- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;	// IMP=0x000000000008b188

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
