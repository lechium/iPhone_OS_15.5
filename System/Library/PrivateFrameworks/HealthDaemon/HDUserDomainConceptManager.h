//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, HDUserDomainConceptProcessingManager, HKObserverSet, NSMutableArray;
@protocol HDUserDomainConceptObserver;

@interface HDUserDomainConceptManager : NSObject
{
    HKObserverSet<HDUserDomainConceptObserver> *_userDomainConceptObservers;	// 8 = 0x8
    struct os_unfair_lock_s _userDomainConceptObserverLock;	// 16 = 0x10
    long long _userDomainConceptObserverOpenTransactionsCount;	// 24 = 0x18
    NSMutableArray *_pendingUserDomainConceptObserverRecords;	// 32 = 0x20
    NSMutableArray *_transactionUserDomainConceptObserverRecords;	// 40 = 0x28
    HDProfile *_profile;	// 48 = 0x30
    HDUserDomainConceptProcessingManager *_processingManager;	// 56 = 0x38
}

+ (id)predicateForListUserDomainConceptWithType:(unsigned long long)arg1;	// IMP=0x000000000061750f
+ (id)predicateForAllPinnedConceptsMappingToRecordsWithUUIDs:(id)arg1 pinnedConceptUUIDs:(id)arg2;	// IMP=0x0000000000617475
+ (_Bool)storeState:(id)arg1 keyValueDomain:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006172f7
+ (id)stateFromKeyValueDomain:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006171fa
+ (id)keyValueDomainWithProfile:(id)arg1;	// IMP=0x00000000006171a1
+ (id)userDomainConceptSubclassEntities;	// IMP=0x0000000000616b8d
+ (id)userDomainConceptEntitiesByIdentifier;	// IMP=0x0000000000616a62
+ (id)countOfUserDomainConceptsMatchingPredicate:(id)arg1 includeDeletedConcepts:(_Bool)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000616929
- (void).cxx_destruct;	// IMP=0x0000000000617821
@property(readonly, nonatomic) HDUserDomainConceptProcessingManager *processingManager; // @synthesize processingManager=_processingManager;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (_Bool)unitTesting_overrideMaximumPropertyType:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000006176b7
- (_Bool)unitTesting_overrideStoredAnchor:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000006175c0
- (id)unitTesting_fetchProcessingStateWithError:(id *)arg1;	// IMP=0x0000000000617521
- (void)notifyObserversForDeletedUDC:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000616917
- (void)notifyObserversForUpdatedUDC:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000616905
- (void)notifyObserversForAddedUDC:(id)arg1 transaction:(id)arg2;	// IMP=0x0000000000616798
- (void)closeObserverTransaction;	// IMP=0x000000000061621a
- (void)openObserverTransaction;	// IMP=0x00000000006161f4
- (_Bool)modifyUserDomainConcepts:(id)arg1 method:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000006161cf
- (_Bool)modifyUserDomainConcepts:(id)arg1 method:(long long)arg2 syncProvenance:(long long)arg3 syncVersion:(CDStruct_c12fb951)arg4 error:(id *)arg5;	// IMP=0x0000000000616097
- (void)removeUserDomainConceptObserver:(id)arg1;	// IMP=0x0000000000616081
- (void)addUserDomainConceptObserver:(id)arg1 queue:(id)arg2;	// IMP=0x000000000061606b
- (id)orderingTermsForSortDescriptors:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000615cd2
- (id)userDomainConceptAnalyticsWithError:(id *)arg1;	// IMP=0x00000000006153f7
- (_Bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 error:(id *)arg2 enumerationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000006153d0
- (_Bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 limit:(long long)arg2 orderingTerms:(id)arg3 error:(id *)arg4 enumerationHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000006153aa
- (_Bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 includeDeletedConcepts:(_Bool)arg2 limit:(long long)arg3 orderingTerms:(id)arg4 error:(id *)arg5 enumerationHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000615203
- (_Bool)enumerateUserDomainConceptsWithPredicate:(id)arg1 includeDeletedConcepts:(_Bool)arg2 limit:(long long)arg3 orderingTerms:(id)arg4 transaction:(id)arg5 error:(id *)arg6 enumerationHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000006150cb
- (_Bool)deleteUserDomainConcepts:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006150b1
- (_Bool)deleteUserDomainConcept:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000614ff4
- (_Bool)updateUserDomainConcept:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000614f37
- (id)initWithProfile:(id)arg1;	// IMP=0x0000000000614e0e
- (id)init;	// IMP=0x0000000000614d94

@end

