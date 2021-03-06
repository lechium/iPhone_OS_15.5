//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@class NSCountedSet, NSString, _CDSharedMemoryKeyValueStore;
@protocol OS_dispatch_queue;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting>
{
    _CDSharedMemoryKeyValueStore *_store;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSCountedSet *_keyPathRegistrationCount;	// 24 = 0x18
    NSCountedSet *_legacyKeyPathRegistrationCount;	// 32 = 0x20
    NSString *_localDeviceID;	// 40 = 0x28
}

+ (id)sharedMemoryKeyFromRegistration:(id)arg1;	// IMP=0x0000000000001f42
+ (id)sharedMemoryKeyFromKeyPath:(id)arg1;	// IMP=0x0000000000001e5d
+ (id)persistenceWithSharedMemoryKeyValueStore:(id)arg1;	// IMP=0x0000000000001e14
- (void).cxx_destruct;	// IMP=0x00000000000035d7
@property(retain, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(retain, nonatomic) NSCountedSet *legacyKeyPathRegistrationCount; // @synthesize legacyKeyPathRegistrationCount=_legacyKeyPathRegistrationCount;
@property(retain, nonatomic) NSCountedSet *keyPathRegistrationCount; // @synthesize keyPathRegistrationCount=_keyPathRegistrationCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) _CDSharedMemoryKeyValueStore *store; // @synthesize store=_store;
- (void)deleteDataCreatedBefore:(id)arg1;	// IMP=0x000000000000354a
- (void)deleteAllData;	// IMP=0x00000000000034d0
- (id)loadRegistrations;	// IMP=0x0000000000003236
- (id)loadValues;	// IMP=0x0000000000002e68
- (id)allKeysForContextStore;	// IMP=0x0000000000002c1d
- (void)deleteRegistration:(id)arg1;	// IMP=0x0000000000002928
- (void)saveRegistration:(id)arg1;	// IMP=0x00000000000025e7
- (void)deleteKeyPaths:(id)arg1;	// IMP=0x00000000000022e7
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000001fb8
- (id)initWithSharedMemoryKeyValueStore:(id)arg1;	// IMP=0x0000000000001ccf

@end

