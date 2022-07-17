//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;

@interface COSiMessageLoginViewController
{
    ACAccount *_account;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1;	// IMP=0x00200000001252e1
- (void).cxx_destruct;	// IMP=0x0020000000125d02
- (id)localizedWaitScreenDescription;	// IMP=0x0010000000125c96
- (double)waitScreenPushGracePeriod;	// IMP=0x0010000000125c88
- (_Bool)holdWithWaitScreen;	// IMP=0x0010000000125bf9
- (void)signInFailedWithError:(id)arg1;	// IMP=0x0010000000125bb8
- (void)loggedInSuccessfullyWithBuddyControllerDoneBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000125ade
- (void)checkIfCanReleaseHold;	// IMP=0x0010000000125842
- (void)silentSignInStateChanged:(id)arg1;	// IMP=0x0010000000125795
- (void)finishedActivating;	// IMP=0x0010000000125783
- (void)didEstablishHold;	// IMP=0x0010000000125755
- (_Bool)holdBeforeDisplaying;	// IMP=0x00100000001254e6
- (id)activationHoldActivityIdentifier;	// IMP=0x00100000001252d4
- (id)holdActivityIdentifier;	// IMP=0x00100000001252c7
- (unsigned long long)performanceMonitorCATiming;	// IMP=0x00100000001252bc
- (id)performanceMonitorActivityName;	// IMP=0x00100000001252af
- (_Bool)allowSkipping;	// IMP=0x00100000001252a7
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x0010000000125264
- (id)detailString;	// IMP=0x00100000001251c8
- (id)titleString;	// IMP=0x001000000012515c
- (id)username;	// IMP=0x00100000001250f9
- (id)accountTypeString;	// IMP=0x00100000001250e5
- (id)account;	// IMP=0x00100000001250d0
- (void)dealloc;	// IMP=0x001000000012505b
- (id)init;	// IMP=0x0010000000124fb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
