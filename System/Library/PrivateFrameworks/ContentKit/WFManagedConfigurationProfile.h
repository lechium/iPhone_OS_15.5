//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, MCProfileConnection, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface WFManagedConfigurationProfile : NSObject
{
    NSSet *_managedAppBundleIDs;	// 8 = 0x8
    ACAccount *_primaryAppleAccount;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_operatingQueue;	// 24 = 0x18
    ACAccountStore *_accountStore;	// 32 = 0x20
    NSMutableDictionary *_accounts;	// 40 = 0x28
    NSMutableDictionary *_accountIdentifiersByDataClass;	// 48 = 0x30
    MCProfileConnection *_profileConnection;	// 56 = 0x38
}

+ (id)defaultProfile;	// IMP=0x00000000000bc00d
- (void).cxx_destruct;	// IMP=0x00000000000bb9ee
@property(readonly, copy, nonatomic) MCProfileConnection *profileConnection; // @synthesize profileConnection=_profileConnection;
@property(readonly, nonatomic) NSMutableDictionary *accountIdentifiersByDataClass; // @synthesize accountIdentifiersByDataClass=_accountIdentifiersByDataClass;
@property(readonly, nonatomic) NSMutableDictionary *accounts; // @synthesize accounts=_accounts;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *operatingQueue; // @synthesize operatingQueue=_operatingQueue;
- (void)handleManagedAppDidChangeNotification:(id)arg1;	// IMP=0x00000000000bb94b
- (void)handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x00000000000bb848
- (void)removeCachedChildrenAccountForAccount:(id)arg1;	// IMP=0x00000000000bb6ed
@property(readonly, copy, nonatomic) NSSet *managedAppBundleIDs; // @synthesize managedAppBundleIDs=_managedAppBundleIDs;
@property(readonly, nonatomic) ACAccount *primaryAppleAccount; // @synthesize primaryAppleAccount=_primaryAppleAccount;
- (id)initWithProfileConnection:(id)arg1 accountStore:(id)arg2;	// IMP=0x00000000000bb310
- (id)init;	// IMP=0x00000000000bb297
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(_Bool)arg3;	// IMP=0x00000000000bc52b
- (unsigned long long)managedLevelForContentOfURLs:(id)arg1;	// IMP=0x00000000000bc385
- (unsigned long long)managedLevelForContentOfURL:(id)arg1;	// IMP=0x00000000000bc310
- (_Bool)isAccountBasedSourceApp:(id)arg1;	// IMP=0x00000000000bc2f9
- (_Bool)isAccountManaged:(id)arg1;	// IMP=0x00000000000bc2b5
- (_Bool)isAppManaged:(id)arg1;	// IMP=0x00000000000bc23e
@property(readonly) _Bool mayOpenFromManagedToUnmanaged;
@property(readonly) _Bool mayOpenFromUnmanagedToManaged;
@property(readonly) _Bool isOpenInRestrictionInEffect;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;	// IMP=0x00000000000bc775
- (id)accountWithIdentifier:(id)arg1;	// IMP=0x00000000000bc633
@property(readonly) _Bool isWallpaperModificationAllowed;
@property(readonly) _Bool isScreenShotAllowed;
@property(readonly) _Bool isBluetoothModificationAllowed;
@property(readonly) _Bool isWiFiPowerModificationAllowed;

@end

