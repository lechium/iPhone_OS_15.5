//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TelephonyUI/TPSimpleNumberPadDelegate-Protocol.h>

@class NSString, TPPasscodeView, TPSimpleNumberPad, UILabel, UIView;
@protocol TPSetPINViewControllerDelegate;

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate>
{
    _Bool _confirmPIN;	// 8 = 0x8
    int _initialState;	// 12 = 0xc
    int _state;	// 16 = 0x10
    unsigned int _minPINLength;	// 20 = 0x14
    unsigned int _maxPINLength;	// 24 = 0x18
    id <TPSetPINViewControllerDelegate> _delegate;	// 32 = 0x20
    NSString *_promptTextForOldPIN;	// 40 = 0x28
    NSString *_promptTextForNewPIN;	// 48 = 0x30
    NSString *_promptTextForConfirmingNewPIN;	// 56 = 0x38
    NSString *_promptTextForSavingPIN;	// 64 = 0x40
    UIView *_customBackgroundView;	// 72 = 0x48
    UILabel *_statusLabel;	// 80 = 0x50
    TPPasscodeView *_passcodeView;	// 88 = 0x58
    TPSimpleNumberPad *_numberPad;	// 96 = 0x60
    NSString *_oldPIN;	// 104 = 0x68
    NSString *_unconfirmedPIN;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000001d293
@property(retain) NSString *unconfirmedPIN; // @synthesize unconfirmedPIN=_unconfirmedPIN;
@property(retain) NSString *oldPIN; // @synthesize oldPIN=_oldPIN;
@property(retain) TPSimpleNumberPad *numberPad; // @synthesize numberPad=_numberPad;
@property(retain) TPPasscodeView *passcodeView; // @synthesize passcodeView=_passcodeView;
@property(retain) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property _Bool confirmPIN; // @synthesize confirmPIN=_confirmPIN;
@property unsigned int maxPINLength; // @synthesize maxPINLength=_maxPINLength;
@property unsigned int minPINLength; // @synthesize minPINLength=_minPINLength;
@property(nonatomic) int state; // @synthesize state=_state;
@property int initialState; // @synthesize initialState=_initialState;
@property(retain) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(retain, nonatomic) NSString *promptTextForSavingPIN; // @synthesize promptTextForSavingPIN=_promptTextForSavingPIN;
@property(retain, nonatomic) NSString *promptTextForConfirmingNewPIN; // @synthesize promptTextForConfirmingNewPIN=_promptTextForConfirmingNewPIN;
@property(retain, nonatomic) NSString *promptTextForNewPIN; // @synthesize promptTextForNewPIN=_promptTextForNewPIN;
@property(retain, nonatomic) NSString *promptTextForOldPIN; // @synthesize promptTextForOldPIN=_promptTextForOldPIN;
@property id <TPSetPINViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateUIForStateChange;	// IMP=0x000000000001d00c
- (void)_updateStatusLabel;	// IMP=0x000000000001cab1
- (void)_updateNavBarButtons;	// IMP=0x000000000001c96a
- (void)_updateDeleteAllowed;	// IMP=0x000000000001c8c2
- (void)simpleNumberPadDeletePressed:(id)arg1;	// IMP=0x000000000001c797
- (void)simpleNumberPad:(id)arg1 buttonPressedWithCharacter:(id)arg2;	// IMP=0x000000000001c604
- (void)_cancelButtonTapped;	// IMP=0x000000000001c580
- (void)_doneButtonTapped;	// IMP=0x000000000001c183
- (void)resetWithErrorPrompt:(id)arg1 title:(id)arg2;	// IMP=0x000000000001bbc0
- (void)resetWithErrorPrompt:(id)arg1;	// IMP=0x000000000001bbac
- (_Bool)wantsFullScreenLayout;	// IMP=0x000000000001bba4
- (double)numberPadTopConstraintConstant;	// IMP=0x000000000001babc
- (void)loadView;	// IMP=0x000000000001b3d1
- (void)dealloc;	// IMP=0x000000000001b386
- (id)initForChangePINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(_Bool)arg3;	// IMP=0x000000000001b34f
- (id)initForNewPINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(_Bool)arg3;	// IMP=0x000000000001b315
- (id)_initForMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(_Bool)arg3;	// IMP=0x000000000001b06d
- (id)init;	// IMP=0x000000000001af9f

@end

