//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HUPersonalRequestsDevicesItemModule, NSString;

@interface HUPersonalRequestsDevicesModuleController <HUSwitchCellDelegate, UITextViewDelegate>
{
}

- (id)setPersonalRequestsDevices:(id)arg1;	// IMP=0x0000000000168ab6
- (id)turnOnPersonalRequestsForAllMultiUserCapableDevices;	// IMP=0x00000000001689f1
- (void)_turnOnPersonalRequestForItem:(id)arg1 cell:(id)arg2 didTurnOn:(_Bool)arg3;	// IMP=0x0000000000168851
- (void)_presentConfirmationForEnablingPersonalRequestsForItem:(id)arg1 cell:(id)arg2 didTurnOn:(_Bool)arg3 isOutdatedOS:(_Bool)arg4 unsupportedAccessoryLanguage:(_Bool)arg5 hasMismatchedLanguages:(_Bool)arg6;	// IMP=0x00000000001682cf
- (void)_togglePersonalRequestStateForItem:(id)arg1;	// IMP=0x0000000000167ce7
- (void)_presentAlert:(id)arg1;	// IMP=0x0000000000167c57
- (id)_promptToChangeLocationDeviceFromCurrentDevice:(id)arg1;	// IMP=0x00000000001678e2
- (id)_promptToChangeLocationDeviceIfNecessary;	// IMP=0x0000000000167506
- (id)_promptToEnableSiriIfNecessary;	// IMP=0x000000000016702c
- (id)_preflightEnablingPersonalRequests;	// IMP=0x0000000000166f51
- (_Bool)_isCurrentDeviceCandidateForLocationDevice;	// IMP=0x0000000000166f37
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;	// IMP=0x0000000000166a08
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000000166909
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000016673f
- (void)setupCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000001665fe
- (Class)cellClassForItem:(id)arg1;	// IMP=0x000000000016655e
- (id)initWithModule:(id)arg1 host:(id)arg2;	// IMP=0x00000000001663da
- (id)initWithModule:(id)arg1;	// IMP=0x0000000000166325

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUPersonalRequestsDevicesItemModule *module; // @dynamic module;
@property(readonly) Class superclass;

@end
