//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSHashTable, NSNumber, NSString;

@interface COSAppInstallationController : NSObject
{
    MISSING_TYPE *_availableInStoreResult;	// 8 = 0x8
    _Bool _needsAvailableInStoreCheck;	// 9 = 0x9
    NSHashTable *_observers;	// 16 = 0x10
    NSString *_bundleIndentifier;	// 24 = 0x18
    NSNumber *_storeIdentifier;	// 32 = 0x20
}

+ (void)getAppAvailabilityStatusWithBundleID:(id)arg1 andStoreIdentifier:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;	// IMP=0x002000000007c413
- (void).cxx_destruct;	// IMP=0x002000000007ce3e
@property(nonatomic) _Bool needsAvailableInStoreCheck; // @synthesize needsAvailableInStoreCheck=_needsAvailableInStoreCheck;
@property(nonatomic) _Bool availableInStoreResult; // @synthesize availableInStoreResult=_availableInStoreResult;
@property(retain, nonatomic) NSNumber *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(copy, nonatomic) NSString *bundleIndentifier; // @synthesize bundleIndentifier=_bundleIndentifier;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000007cc1d
- (void)removeObserver:(id)arg1;	// IMP=0x001000000007cc07
- (void)addObserver:(id)arg1;	// IMP=0x001000000007cbf1
- (void)notifyObserversThatAppAvailabilityChanged:(_Bool)arg1;	// IMP=0x001000000007ca2c
- (void)notifyObserversThatControllerDidBeginInstallationWithSuccess:(_Bool)arg1;	// IMP=0x001000000007c870
- (void)notifyObserversThatControllerDidInitiatePurchase;	// IMP=0x001000000007c6ce
- (void)notifyObserversThatControllerDidCompleteInstallationWithSuccess:(_Bool)arg1;	// IMP=0x001000000007c512
- (void)checkAvailabilityInStore:(CDUnknownBlockType)arg1;	// IMP=0x001000000007c3ed
- (unsigned long long)isAvailableInStore;	// IMP=0x001000000007c2f8
- (id)amsPromise;	// IMP=0x001000000007c0ec
- (void)_performAvailabilityCheck:(CDUnknownBlockType)arg1;	// IMP=0x001000000007bf07
- (void)_setAvailableInStoreResult:(_Bool)arg1;	// IMP=0x001000000007bed2
- (void)startInstalling;	// IMP=0x001000000007b764
- (void)_checkAwaitingInstallsWithUserInfo:(id)arg1;	// IMP=0x001000000007b541
- (id)versionString;	// IMP=0x001000000007b3cf
- (_Bool)installInProgress;	// IMP=0x001000000007b25b
- (_Bool)isInstalled;	// IMP=0x001000000007b0ca
- (void)dealloc;	// IMP=0x001000000007b03c
- (id)initWithBundleID:(id)arg1 andStoreIdentifier:(id)arg2;	// IMP=0x001000000007af26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
