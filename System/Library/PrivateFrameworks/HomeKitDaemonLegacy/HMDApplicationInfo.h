//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSArray, NSData, NSHashTable, NSString, NSURL;
@protocol HMFLocking;

@interface HMDApplicationInfo : HMFObject <HMFLogging>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    _Bool _independent;	// 16 = 0x10
    id <HMFLocking> _lock;	// 24 = 0x18
    NSHashTable *_processes;	// 32 = 0x20
    HMDApplicationInfo *_companionApplicationInfo;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000056bc86
+ (id)applicationInfoForBundleIdentifier:(id)arg1;	// IMP=0x000000000056bad5
+ (id)applicationInfoForBundleURL:(id)arg1;	// IMP=0x000000000056b985
+ (id)privateVendorIdentifier;	// IMP=0x000000000056b967
- (void).cxx_destruct;	// IMP=0x000000000056b85c
@property(readonly) HMDApplicationInfo *companionApplicationInfo; // @synthesize companionApplicationInfo=_companionApplicationInfo;
@property(readonly, getter=isIndependent) _Bool independent; // @synthesize independent=_independent;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)logIdentifier;	// IMP=0x000000000056b80c
- (void)removeProcess:(id)arg1;	// IMP=0x000000000056b731
- (void)addProcess:(id)arg1;	// IMP=0x000000000056b656
@property(readonly, copy) NSArray *processes;
- (id)clientIdentifierSalt:(id *)arg1;	// IMP=0x000000000056b3e1
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess;
@property(readonly, getter=isInstalled) _Bool installed;
@property(readonly) HMDApplicationInfo *hostApplicationInfo;
@property(readonly, copy) NSData *vendorIdentifier;
@property(readonly) NSURL *bundleURL;
- (id)attributeDescriptions;	// IMP=0x000000000056b133
- (id)shortDescription;	// IMP=0x000000000056b0c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056aff3
@property(readonly) unsigned long long hash;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000056ae99
- (id)init;	// IMP=0x000000000056adf1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
