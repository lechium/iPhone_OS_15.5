//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, AIDAAccountManager, NSString, UIViewController;

@interface COSSatellitePairingHelper : NSObject
{
    ACAccountStore *_store;	// 8 = 0x8
    AIDAAccountManager *_accountManager;	// 16 = 0x10
    UIViewController *_alertPresentationViewController;	// 24 = 0x18
}

+ (void)popToLoginControllerFromController:(id)arg1;	// IMP=0x00200000000ca14d
- (void).cxx_destruct;	// IMP=0x00200000000ca6d6
@property(nonatomic) __weak UIViewController *alertPresentationViewController; // @synthesize alertPresentationViewController=_alertPresentationViewController;
- (id)accountsForAccountManager:(id)arg1;	// IMP=0x00100000000ca001
- (id)_accountManager;	// IMP=0x00100000000c9ee0
- (id)_familyEligibilityRequester;	// IMP=0x00100000000c9e77
- (void)_finishedWithResult:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c9391
- (void)_checkFamilyEligibilityWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c9010
- (void)checkPairingPreconditionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c8274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
