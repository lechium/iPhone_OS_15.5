//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@class NSCountedSet, _DKCoreDataStorage;
@protocol OS_dispatch_queue;

@interface _CDCoreDataContextPersisting : NSObject <_CDContextPersisting>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _DKCoreDataStorage *_storage;	// 16 = 0x10
    NSCountedSet *_keyPathRegistrationCount;	// 24 = 0x18
}

+ (id)persistenceWithStorage:(id)arg1;	// IMP=0x00000000000067ef
+ (id)persistenceWithDirectory:(id)arg1;	// IMP=0x00000000000066c2
- (void).cxx_destruct;	// IMP=0x00000000000088fd
@property(readonly, nonatomic) NSCountedSet *keyPathRegistrationCount; // @synthesize keyPathRegistrationCount=_keyPathRegistrationCount;
@property(readonly, nonatomic) _DKCoreDataStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)loadRegistrations;	// IMP=0x00000000000084a4
- (id)loadValues;	// IMP=0x0000000000008185
- (void)deleteDataCreatedBefore:(id)arg1;	// IMP=0x0000000000008074
- (void)deleteAllData;	// IMP=0x0000000000007fd6
- (void)deleteRegistration:(id)arg1;	// IMP=0x0000000000007d53
- (void)saveRegistration:(id)arg1;	// IMP=0x0000000000007a81
- (void)_deleteKeyPaths:(id)arg1;	// IMP=0x0000000000007707
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000007516
- (id)uniqunessPredicateForRegistration:(id)arg1;	// IMP=0x00000000000074a7
- (id)uniquenessPredicateForKeyPath:(id)arg1;	// IMP=0x0000000000007175
- (_Bool)fromEntityWithName:(id)arg1 fetchAllObjectsMatchingPredicate:(id)arg2 handlingMOs:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006efe
- (_Bool)fromEntityWithName:(id)arg1 deleteObjectsMatching:(id)arg2;	// IMP=0x0000000000006c24
- (_Bool)_withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insert:(_Bool)arg3 update:(CDUnknownBlockType)arg4;	// IMP=0x000000000000688b
- (_Bool)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 update:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006873
- (_Bool)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insertOrUpdate:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006858
- (id)getMOC;	// IMP=0x0000000000006838
- (id)initWithStorage:(id)arg1;	// IMP=0x00000000000065ea

@end
