//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EAEmailAddressSet, NSLock, NSSet, NSString;
@protocol EMVIPManager, OS_dispatch_queue;

@interface VIPManager : NSObject
{
    NSLock *_abPersonByVIPIdentifierLock;	// 8 = 0x8
    struct __CFDictionary *_abPersonByVIPIdentifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <EMVIPManager> _backingManager;	// 32 = 0x20
}

+ (id)defaultInstance;	// IMP=0x00200000000d863f
+ (void)setBackingManager:(id)arg1;	// IMP=0x00100000000d859b
+ (struct os_unfair_lock_s *)defaultInstanceLock;	// IMP=0x00100000000d858e
- (void).cxx_destruct;	// IMP=0x00200000000da235
@property(readonly, nonatomic) id <EMVIPManager> backingManager; // @synthesize backingManager=_backingManager;
- (id)allVIPEmailAddressesCriterion;	// IMP=0x00100000000da1b8
- (id)vipCriteria;	// IMP=0x00100000000d9ef7
- (id)criterionForEmailAddresses:(id)arg1;	// IMP=0x00100000000d9bf8
- (const void *)existingPersonForVIP:(id)arg1 usingAddressBook:(void *)arg2;	// IMP=0x00100000000d99f7
- (id)vipForEmailAddresses:(id)arg1 andDisplayNames:(id)arg2;	// IMP=0x00100000000d9504
- (id)sortedVIPs;	// IMP=0x00100000000d938e
- (void)deleteVIPWithIdentifier:(id)arg1;	// IMP=0x00100000000d927a
- (void)saveVIP:(id)arg1;	// IMP=0x00100000000d9166
- (void)_vipsDidChange:(id)arg1;	// IMP=0x00100000000d8ca9
- (void)getAllVIPsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d8c21
- (void)removeVIPsWithEmailAddresses:(id)arg1;	// IMP=0x00100000000d8b99
- (void)removeVIPsWithIdentifiers:(id)arg1;	// IMP=0x00100000000d8b11
- (void)saveVIPs:(id)arg1;	// IMP=0x00100000000d8a89
- (_Bool)isVIPAddress:(id)arg1;	// IMP=0x00100000000d89fd
- (id)vipWithIdentifier:(id)arg1;	// IMP=0x00100000000d8965
@property(readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property(readonly, copy, nonatomic) NSSet *allVIPs;
@property(readonly, nonatomic) _Bool hasVIPs;
- (id)initWithBackingManager:(id)arg1;	// IMP=0x00100000000d870b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
