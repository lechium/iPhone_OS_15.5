//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class NRDevice, NSSManager, NSString;

@interface COSResetController : PSListController
{
    NRDevice *_device;	// 192 = 0xc0
    NSSManager *_manager;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x00200000000f6ea2
@property(retain, nonatomic) NSSManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NRDevice *device; // @synthesize device=_device;
- (void)didAcceptEnteredPIN;	// IMP=0x00100000000f6de2
- (void)_eraseCellularPlans;	// IMP=0x00100000000f6c25
- (void)presentPasscodePrompt;	// IMP=0x00100000000f6a01
- (void)resetCalendarSyncState:(id)arg1;	// IMP=0x00100000000f698a
- (void)resetContactsSyncState:(id)arg1;	// IMP=0x00100000000f6913
- (void)resetCellularPlans:(id)arg1;	// IMP=0x00100000000f68a1
- (void)resetSyncState:(id)arg1;	// IMP=0x00100000000f684c
- (void)resetAppLayoutConfirmed:(id)arg1;	// IMP=0x00100000000f66e6
- (void)eraseSettingsAndContent:(_Bool)arg1;	// IMP=0x00100000000f6463
- (void)onEraseConfirmationAction:(id)arg1;	// IMP=0x00100000000f6174
- (void)confirmationSpecifierConfirmed:(id)arg1;	// IMP=0x00100000000f5e76
- (id)specifiers;	// IMP=0x00100000000f5bac
- (id)init;	// IMP=0x00100000000f5adf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

