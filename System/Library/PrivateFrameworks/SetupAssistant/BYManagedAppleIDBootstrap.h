//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SetupAssistant/AKAppleIDAuthenticationDelegate-Protocol.h>
#import <SetupAssistant/BYNetworkObserver-Protocol.h>

@class AKAppleIDAuthenticationContext, NSDictionary, NSString;

@interface BYManagedAppleIDBootstrap : NSObject <AKAppleIDAuthenticationDelegate, BYNetworkObserver>
{
    AKAppleIDAuthenticationContext *_authContext;	// 8 = 0x8
    _Bool _shouldRetrySilentLoginUpgrade;	// 16 = 0x10
    long long _silentLoginUpgradeRetryCount;	// 24 = 0x18
    NSDictionary *_authenticationResults;	// 32 = 0x20
}

+ (_Bool)isManagedAppleIDSignedIn;	// IMP=0x000000000000629e
+ (_Bool)isSettingUpMultiUser;	// IMP=0x0000000000006197
+ (_Bool)isFirstTimeLogin;	// IMP=0x000000000000618f
+ (_Bool)isMultiUser;	// IMP=0x0000000000006187
+ (id)delegateBundleIDsForManagedAccount;	// IMP=0x000000000000603d
+ (id)sharedManager;	// IMP=0x0000000000005fe8
- (void).cxx_destruct;	// IMP=0x0000000000007672
@property(retain, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(nonatomic) long long silentLoginUpgradeRetryCount; // @synthesize silentLoginUpgradeRetryCount=_silentLoginUpgradeRetryCount;
@property(nonatomic) _Bool shouldRetrySilentLoginUpgrade; // @synthesize shouldRetrySilentLoginUpgrade=_shouldRetrySilentLoginUpgrade;
- (void)willSwitchUser;	// IMP=0x000000000000762b
- (void)_modifyAuthenticationContextIfNeeded:(id)arg1;	// IMP=0x000000000000755c
- (id)_fetchAKURLBagSynchronously;	// IMP=0x00000000000074b1
- (void)writeAccountConfigurationIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000074ab
- (id)_languageConfigurationDictionary;	// IMP=0x0000000000007466
- (void)_upgradeShortLivedTokenCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000744b
- (void)_createAppleAccountWithAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007430
- (void)recoverEMCSWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007415
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(CDUnknownBlockType)arg1 shortLivedTokenUpgradeCompletion:(CDUnknownBlockType)arg2 willNotCompleteBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006bc4
- (void)runSilentLoginUpgradeIfNeededWithCompletion:(CDUnknownBlockType)arg1 shortLivedTokenUpgradeCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006baf
- (void)_runSilentLoginUpgradeWithCompletion:(CDUnknownBlockType)arg1 shortLivedTokenUpgradeCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000639f
- (void)switchToLoginWindowDueToError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000006399
- (_Bool)needsToUpgradeShortLivedToken;	// IMP=0x0000000000006391
- (void)ingestManagedBuddyData;	// IMP=0x000000000000638b
- (void)postUserSwitchContextHasBeenUsed;	// IMP=0x0000000000006385
@property(readonly, nonatomic) _Bool passwordChangeFlowNeedsToRun;
@property(readonly, copy, nonatomic) NSString *shortLivedToken;
- (void)userSwitchContextHasBeenUsed;	// IMP=0x0000000000006319
- (_Bool)isLoginUser;	// IMP=0x0000000000006311
- (void)dealloc;	// IMP=0x000000000000613d
- (id)init;	// IMP=0x000000000000604a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
