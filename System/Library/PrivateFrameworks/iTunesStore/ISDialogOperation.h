//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISDialog, ISDialogButton, NSArray;
@protocol ISDialogOperationDelegate;

@interface ISDialogOperation
{
    ISDialog *_dialog;	// 96 = 0x60
    _Bool _performDefaultActions;	// 104 = 0x68
    ISDialogButton *_selectedButton;	// 112 = 0x70
    NSArray *_textFieldValues;	// 120 = 0x78
    id _userNotification;	// 128 = 0x80
}

+ (id)operationWithError:(id)arg1;	// IMP=0x000000000003e6e9
+ (id)operationWithDialog:(id)arg1;	// IMP=0x000000000003e6b0
@property(retain) id userNotification; // @synthesize userNotification=_userNotification;
@property(retain) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property _Bool performDefaultActions; // @synthesize performDefaultActions=_performDefaultActions;
@property(retain) ISDialog *dialog; // @synthesize dialog=_dialog;
- (void)_waitForUserNotificationResponse:(struct __CFUserNotification *)arg1;	// IMP=0x000000000003f895
- (void)_showUserNotification:(id)arg1;	// IMP=0x000000000003f56e
- (void)_run;	// IMP=0x000000000003ee54
- (void)_handleResponseForNotification:(struct __CFUserNotification *)arg1 responseFlags:(unsigned long long)arg2;	// IMP=0x000000000003ed1d
- (void)run;	// IMP=0x000000000003e9b8
- (void)cancel;	// IMP=0x000000000003e96d
@property(readonly) NSArray *textFieldValues;
- (void)handleButtonSelected:(long long)arg1 withResponseDictionary:(id)arg2;	// IMP=0x000000000003e749
- (void)dealloc;	// IMP=0x000000000003e61c
- (id)init;	// IMP=0x000000000003e5dd

// Remaining properties
@property id <ISDialogOperationDelegate> delegate; // @dynamic delegate;

@end

