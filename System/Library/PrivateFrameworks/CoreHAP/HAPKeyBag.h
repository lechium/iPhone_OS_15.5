//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HMFLogging-Protocol.h>

@class NSArray, NSString;
@protocol HAPKeyStore;

@interface HAPKeyBag : NSObject <HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_accessoryIdentifier;	// 16 = 0x10
    NSArray *_availableKeysToTry;	// 24 = 0x18
    id <HAPKeyStore> _keyStore;	// 32 = 0x20
    long long _currentIndexInBag;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0000000000002d95
- (void).cxx_destruct;	// IMP=0x0000000000002d64
@property(nonatomic) long long currentIndexInBag; // @synthesize currentIndexInBag=_currentIndexInBag;
@property(readonly, nonatomic) __weak id <HAPKeyStore> keyStore; // @synthesize keyStore=_keyStore;
@property(retain, nonatomic) NSArray *availableKeysToTry; // @synthesize availableKeysToTry=_availableKeysToTry;
@property(copy, nonatomic) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
@property(readonly) unsigned long long totalIdentities;
@property(readonly, getter=isEmpty) _Bool empty;
- (id)currentIdentity;	// IMP=0x0000000000002a41
- (id)nextIdentity;	// IMP=0x0000000000002851
- (_Bool)isValidIndex:(long long)arg1;	// IMP=0x00000000000027f6
- (long long)getCurrentIndexInBag;	// IMP=0x0000000000002796
- (id)_populateBagWithPairingIdentitiesForAccessory:(id)arg1 fromStore:(id)arg2;	// IMP=0x0000000000002583
- (void)refreshKeys;	// IMP=0x000000000000232c
- (id)initWithAccessoryIdentifier:(id)arg1 keyStore:(id)arg2 controllerKeyList:(id)arg3;	// IMP=0x000000000000215d
- (id)initWithAccessoryIdentifier:(id)arg1 keyStore:(id)arg2;	// IMP=0x00000000000020b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

