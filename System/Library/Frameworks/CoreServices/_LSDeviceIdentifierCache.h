//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSDeviceIdentifierCache : NSObject
{
    NSDictionary *_identifiers;	// 8 = 0x8
    NSUUID *_advertiserIdentifier;	// 16 = 0x10
    NSUUID *_vendorIdentifierSeed;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    int _saveFlag;	// 40 = 0x28
    NSDictionary *_perUserEntropy;	// 48 = 0x30
}

+ (id)sharedCache;	// IMP=0x000000000009e099
- (void).cxx_destruct;	// IMP=0x000000000009f4d3
- (void)save;	// IMP=0x000000000009ef15
- (void)clearAllIdentifiersOfType:(long long)arg1;	// IMP=0x000000000009ec83
- (void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000009ea34
- (void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000009e1fe
@property(readonly) NSObject<OS_dispatch_queue> *queue;
- (id)init;	// IMP=0x000000000009e12f
- (id)deviceIdentifierVendorSeed;	// IMP=0x00000000000a066a
- (id)identifiersOfTypeNotDispatched:(long long)arg1;	// IMP=0x00000000000a055c
- (id)allIdentifiersNotDispatched;	// IMP=0x000000000009fd71
- (id)extractUUIDForKey:(id)arg1;	// IMP=0x000000000009fc9b
- (id)applyPerUserEntropyNotDispatched:(id)arg1 type:(long long)arg2;	// IMP=0x000000000009f999
- (void)generatePerUserEntropyIfNeededNotDispatched;	// IMP=0x000000000009f5a1
- (id)generateSomePerUserEntropyNotDispatched;	// IMP=0x000000000009f524
- (_Bool)deviceUnlockedSinceBoot;	// IMP=0x000000000009f51c

@end
