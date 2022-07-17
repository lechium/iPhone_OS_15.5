//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class ISDialog, ISDialogButton, NSNumber, NSURL, SSAuthenticationContext;

@interface ServerAuthenticationOperation : ISOperation
{
    unsigned long long _authenticatedAccountCredentialSource;	// 96 = 0x60
    NSNumber *_authenticatedAccountDSID;	// 104 = 0x68
    SSAuthenticationContext *_authenticationContext;	// 112 = 0x70
    ISDialog *_dialog;	// 120 = 0x78
    _Bool _performsButtonAction;	// 128 = 0x80
    ISDialogButton *_performedButton;	// 136 = 0x88
    NSURL *_redirectURL;	// 144 = 0x90
    ISDialogButton *_selectedButton;	// 152 = 0x98
}

- (void);	// IMP=0x00200000000d80c8
@property unsigned long long authenticatedAccountCredentialSource; // @synthesize authenticatedAccountCredentialSource=_authenticatedAccountCredentialSource;
- (_Bool)_shouldSkipInitialDialog:(id)arg1;	// IMP=0x00100000000d78de
- (_Bool)_shouldAuthenticateForButton:(id)arg1;	// IMP=0x00100000000d7820
- (_Bool)_isLocalizationAlreadyConfiguredForAuthContext:(id)arg1;	// IMP=0x00100000000d776c
- (void)_handleSelectedButton:(id)arg1;	// IMP=0x00100000000d74a2
- (_Bool)_copySelectedButton:(id *)arg1 returningError:(id *)arg2;	// IMP=0x00100000000d7170
- (id)_copyButtonToSkipDialog:(id)arg1;	// IMP=0x00100000000d6fc5
- (id)_copyAuthenticationContext;	// IMP=0x00100000000d6505
- (_Bool)_copyAccountIdentifier:(id *)arg1 returningError:(id *)arg2;	// IMP=0x00100000000d60ad
- (void)run;	// IMP=0x00100000000d5bbc
@property _Bool performsButtonAction; // @synthesize performsButtonAction=_performsButtonAction;
@property(copy) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property(readonly) ISDialogButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(readonly) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly) ISDialogButton *performedButton; // @synthesize performedButton=_performedButton;
@property(readonly) ISDialog *dialog; // @synthesize dialog=_dialog;
@property(readonly) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
- (id)initWithDialog:(id)arg1;	// IMP=0x00100000000d5879
- (id)init;	// IMP=0x00100000000d5637

@end
