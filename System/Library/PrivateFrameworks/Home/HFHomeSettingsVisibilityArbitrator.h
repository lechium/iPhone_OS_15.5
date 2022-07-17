//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFHomeManagerObserver-Protocol.h>
#import <Home/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSString;

@interface HFHomeSettingsVisibilityArbitrator : NSObject <HFHomeManagerObserver, LSApplicationWorkspaceObserverProtocol>
{
    _Bool _homesConfigured;	// 8 = 0x8
    int _homeKitPreferencesChangeNotifyToken;	// 12 = 0xc
    unsigned long long _visibilityState;	// 16 = 0x10
    CDUnknownBlockType _visibilityStateChangeHandler;	// 24 = 0x18
    unsigned long long _homeAppInstallState;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x000000000022ed67
+ (id)homeManagerConfigurationWithExpandedOptions:(_Bool)arg1;	// IMP=0x000000000022ecf8
- (void).cxx_destruct;	// IMP=0x000000000022faaa
@property(nonatomic) int homeKitPreferencesChangeNotifyToken; // @synthesize homeKitPreferencesChangeNotifyToken=_homeKitPreferencesChangeNotifyToken;
@property(nonatomic) unsigned long long homeAppInstallState; // @synthesize homeAppInstallState=_homeAppInstallState;
@property(nonatomic) _Bool homesConfigured; // @synthesize homesConfigured=_homesConfigured;
@property(copy, nonatomic) CDUnknownBlockType visibilityStateChangeHandler; // @synthesize visibilityStateChangeHandler=_visibilityStateChangeHandler;
@property(nonatomic) unsigned long long visibilityState; // @synthesize visibilityState=_visibilityState;
- (void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(_Bool)arg2;	// IMP=0x000000000022fa3b
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000000022f8ea
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x000000000022f799
- (void)_queryHomeAppInstallStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000022f55d
- (void)_startListeningForManagedConfigurationChanges;	// IMP=0x000000000022f483
- (void)_reloadVisibilityStateIncludingInstallState:(_Bool)arg1;	// IMP=0x000000000022f0eb
- (void)reloadVisibilityState;	// IMP=0x000000000022f0d4
- (void)dealloc;	// IMP=0x000000000022f011
- (id)init;	// IMP=0x000000000022edad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
