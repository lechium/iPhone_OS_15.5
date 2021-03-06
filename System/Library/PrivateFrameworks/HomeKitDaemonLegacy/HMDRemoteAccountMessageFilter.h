//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAppleAccountManager, HMFMessageDestination, NSArray;
@protocol HAPKeyStore;

@interface HMDRemoteAccountMessageFilter
{
    HMFMessageDestination *_target;	// 24 = 0x18
    NSArray *_whitelistedMessages;	// 32 = 0x20
    HMDAppleAccountManager *_appleAccountManager;	// 40 = 0x28
    id <HAPKeyStore> _systemKeychainStore;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0000000000583ec4
- (void).cxx_destruct;	// IMP=0x0000000000583e71
@property(retain, nonatomic) id <HAPKeyStore> systemKeychainStore; // @synthesize systemKeychainStore=_systemKeychainStore;
@property(retain, nonatomic) HMDAppleAccountManager *appleAccountManager; // @synthesize appleAccountManager=_appleAccountManager;
@property(readonly, copy) NSArray *whitelistedMessages; // @synthesize whitelistedMessages=_whitelistedMessages;
@property(readonly) HMFMessageDestination *target; // @synthesize target=_target;
- (id)logIdentifier;	// IMP=0x0000000000583d82
- (_Bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id *)arg3;	// IMP=0x0000000000583256
- (id)initWithTarget:(id)arg1 whitelistedMessages:(id)arg2 appleAccountManager:(id)arg3 systemKeychainStore:(id)arg4;	// IMP=0x0000000000583129
- (id)initWithTarget:(id)arg1 whitelistedMessages:(id)arg2;	// IMP=0x0000000000583069
- (id)initWithTarget:(id)arg1;	// IMP=0x0000000000583055
- (id)initWithName:(id)arg1;	// IMP=0x0000000000582f9f

@end

