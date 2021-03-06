//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOperation, NSOperationQueue, UIViewController, VSAccountChannels, VSAppSettingsViewModel, VSIdentityProvider, VSPersistentStorage, VSRestrictionsCenter;

@interface VSAppSettingsFacade : NSObject
{
    _Bool _hasChannelApps;	// 8 = 0x8
    _Bool _needsUpdateApps;	// 9 = 0x9
    _Bool _needsPresentationOfMVPDAppInstallPromptIfAvailable;	// 10 = 0xa
    int _registrationToken;	// 12 = 0xc
    VSIdentityProvider *_identityProvider;	// 16 = 0x10
    NSArray *_decidedApps;	// 24 = 0x18
    NSArray *_availableApps;	// 32 = 0x20
    NSOperationQueue *_privateQueue;	// 40 = 0x28
    NSOperation *_currentPresentationOperation;	// 48 = 0x30
    VSPersistentStorage *_storage;	// 56 = 0x38
    VSRestrictionsCenter *_restrictionsCenter;	// 64 = 0x40
    VSAccountChannels *_accountChannels;	// 72 = 0x48
    NSArray *_knownAppBundles;	// 80 = 0x50
    NSArray *_unredeemedVouchers;	// 88 = 0x58
    VSAppSettingsViewModel *_mvpdAppSettingsViewModel;	// 96 = 0x60
    UIViewController *_mvpdInstallPromptPresentingViewController;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000068429
@property(retain, nonatomic) UIViewController *mvpdInstallPromptPresentingViewController; // @synthesize mvpdInstallPromptPresentingViewController=_mvpdInstallPromptPresentingViewController;
@property(nonatomic) _Bool needsPresentationOfMVPDAppInstallPromptIfAvailable; // @synthesize needsPresentationOfMVPDAppInstallPromptIfAvailable=_needsPresentationOfMVPDAppInstallPromptIfAvailable;
@property(retain, nonatomic) VSAppSettingsViewModel *mvpdAppSettingsViewModel; // @synthesize mvpdAppSettingsViewModel=_mvpdAppSettingsViewModel;
@property(nonatomic) int registrationToken; // @synthesize registrationToken=_registrationToken;
@property(nonatomic) _Bool needsUpdateApps; // @synthesize needsUpdateApps=_needsUpdateApps;
@property(copy, nonatomic) NSArray *unredeemedVouchers; // @synthesize unredeemedVouchers=_unredeemedVouchers;
@property(copy, nonatomic) NSArray *knownAppBundles; // @synthesize knownAppBundles=_knownAppBundles;
@property(retain, nonatomic) VSAccountChannels *accountChannels; // @synthesize accountChannels=_accountChannels;
@property(retain, nonatomic) VSRestrictionsCenter *restrictionsCenter; // @synthesize restrictionsCenter=_restrictionsCenter;
@property(retain, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSOperation *currentPresentationOperation; // @synthesize currentPresentationOperation=_currentPresentationOperation;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) _Bool hasChannelApps; // @synthesize hasChannelApps=_hasChannelApps;
@property(copy, nonatomic) NSArray *availableApps; // @synthesize availableApps=_availableApps;
@property(copy, nonatomic) NSArray *decidedApps; // @synthesize decidedApps=_decidedApps;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void)presentMVPDAppInstallPromptFromViewController:(id)arg1;	// IMP=0x0000000000067e46
- (_Bool)shouldShowMVPDAppInstallPrompt;	// IMP=0x0000000000067d63
- (_Bool)shouldShowMVPDAppInstallPromptFromViewController:(id)arg1;	// IMP=0x0000000000067d35
- (void)_setNeedsUpdateApps;	// IMP=0x0000000000067920
- (id)viewModelsForAppDescriptions:(id)arg1 bundleByBundleID:(id)arg2 vouchersForProvider:(id)arg3 restrictionsCenter:(id)arg4 privacyFacade:(id)arg5;	// IMP=0x00000000000672f7
- (id)viewModelsForChannelAppDescriptions:(id)arg1 andNonChannelAppDescriptions:(id)arg2;	// IMP=0x0000000000066bba
- (void)_updateApps;	// IMP=0x0000000000064e8d
- (void)dealloc;	// IMP=0x0000000000064e43
- (id)init;	// IMP=0x0000000000064dd4
- (id)initWithStorage:(id)arg1 restrictionsCenter:(id)arg2;	// IMP=0x00000000000649d3
- (id)autorelease;	// IMP=0x000000000000c9cc
- (oneway void)release;	// IMP=0x000000000000c996
- (id)retain;	// IMP=0x000000000000c960

@end

