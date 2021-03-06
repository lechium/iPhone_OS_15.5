//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKClassKitRosterRequirements-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol CRKCancelable, CRKClassKitFacade;

@interface CRKConcreteClassKitRosterRequirements : NSObject <CRKClassKitRosterRequirements>
{
    _Bool _forInstructor;	// 8 = 0x8
    NSObject<CRKClassKitFacade> *_classKitFacade;	// 16 = 0x10
    id <CRKCancelable> _membershipDidChangeSubscription;	// 24 = 0x18
    id <CRKCancelable> _userDidChangeSubscription;	// 32 = 0x20
    NSArray *_dataObservers;	// 40 = 0x28
    NSMutableDictionary *_generalObserversByToken;	// 48 = 0x30
    NSMutableDictionary *_personObserversByToken;	// 56 = 0x38
}

+ (id)instructorRosterRequirementsWithClassKitFacade:(id)arg1;	// IMP=0x000000000004ac37
+ (id)studentRosterRequirementsWithClassKitFacade:(id)arg1;	// IMP=0x000000000004abec
- (void).cxx_destruct;	// IMP=0x000000000004cb88
@property(readonly, nonatomic) NSMutableDictionary *personObserversByToken; // @synthesize personObserversByToken=_personObserversByToken;
@property(readonly, nonatomic) NSMutableDictionary *generalObserversByToken; // @synthesize generalObserversByToken=_generalObserversByToken;
@property(readonly, copy, nonatomic) NSArray *dataObservers; // @synthesize dataObservers=_dataObservers;
@property(retain, nonatomic) id <CRKCancelable> userDidChangeSubscription; // @synthesize userDidChangeSubscription=_userDidChangeSubscription;
@property(retain, nonatomic) id <CRKCancelable> membershipDidChangeSubscription; // @synthesize membershipDidChangeSubscription=_membershipDidChangeSubscription;
@property(readonly, nonatomic, getter=isForInstructor) _Bool forInstructor; // @synthesize forInstructor=_forInstructor;
@property(readonly, nonatomic) NSObject<CRKClassKitFacade> *classKitFacade; // @synthesize classKitFacade=_classKitFacade;
- (void)locationsWithObjectIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ca9b
- (void)locationsWithManagePermissionsForUserWithObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ca15
- (void)removeClass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c98f
- (void)saveClass:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c909
- (id)makeClassWithLocationID:(id)arg1 name:(id)arg2;	// IMP=0x000000000004c872
- (id)makeQueryForPersonsWithIdentifiers:(id)arg1;	// IMP=0x000000000004c7ef
- (id)makeInstructorQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(_Bool)arg3 pageSize:(long long)arg4;	// IMP=0x000000000004c743
- (id)makeStudentQueryForSearchString:(id)arg1 locationIDs:(id)arg2 sortingGivenNameFirst:(_Bool)arg3 pageSize:(long long)arg4;	// IMP=0x000000000004c697
- (void)removeTrustedPerson:(id)arg1 fromClass:(id)arg2;	// IMP=0x000000000004c5eb
- (void)addTrustedPerson:(id)arg1 toClass:(id)arg2;	// IMP=0x000000000004c53f
- (void)removePerson:(id)arg1 fromClass:(id)arg2;	// IMP=0x000000000004c493
- (void)addPerson:(id)arg1 toClass:(id)arg2;	// IMP=0x000000000004c3e7
- (void)executeQuery:(id)arg1;	// IMP=0x000000000004c375
- (void)trustedPersonsInClassWithObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c2c9
- (void)personsInClassWithObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c21d
- (void)classesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c193
- (void)currentUserWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c121
- (id)objectIDsOfTrustedPersonsInClass:(id)arg1;	// IMP=0x000000000004c086
- (id)objectIDsOfPersonsInClass:(id)arg1;	// IMP=0x000000000004bfeb
- (void)removeObserver:(id)arg1;	// IMP=0x000000000004bf96
- (id)addObserverForPersonIDs:(id)arg1 observerBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004be89
- (id)addGeneralObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000000004bddd
- (void)callGeneralObserversWithReason:(id)arg1;	// IMP=0x000000000004bb76
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000004bab3
- (void)stopObservingAccountState;	// IMP=0x000000000004ba59
- (void)startObservingAccountState;	// IMP=0x000000000004b9fc
@property(readonly, nonatomic) long long accountState;
- (void)deregisterDataObservers;	// IMP=0x000000000004b823
- (void)registerDataObservers;	// IMP=0x000000000004b68e
- (CDUnknownBlockType)makeDataChangedBlockWithObserverDescription:(id)arg1;	// IMP=0x000000000004b4e3
- (void)addNullableObserver:(id)arg1 toArray:(id)arg2;	// IMP=0x000000000004b4c7
- (id)makeDataObservers;	// IMP=0x000000000004b2a5
- (void)unregisterForMembershipChangeDarwinNotification;	// IMP=0x000000000004b24b
- (void)registerForMembershipChangeDarwinNotification;	// IMP=0x000000000004b0d1
- (void)registerForCurrentUserChangeNotification;	// IMP=0x000000000004af6e
- (id)makeToken;	// IMP=0x000000000004af55
- (void)removePersonObserver:(id)arg1;	// IMP=0x000000000004ae8f
- (void)removeGeneralObserver:(id)arg1;	// IMP=0x000000000004ae1b
- (_Bool)isForStudent;	// IMP=0x000000000004ae06
- (_Bool)ownsError:(id)arg1;	// IMP=0x000000000004ad8f
- (id)initWithClassKitFacade:(id)arg1 isForInstructor:(_Bool)arg2;	// IMP=0x000000000004ac85
- (void)dealloc;	// IMP=0x000000000004ab8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

