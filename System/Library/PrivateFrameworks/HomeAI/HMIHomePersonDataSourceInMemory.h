//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIHomePersonManagerDataSource-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface HMIHomePersonDataSourceInMemory : HMFObject <HMIHomePersonManagerDataSource>
{
    NSMutableDictionary *_personToFaceCrops;	// 8 = 0x8
    NSMutableSet *_unassociatedFaceCrops;	// 16 = 0x10
    NSSet *_removedPersonFaceCrops;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000005fcfd
+ (id)shortDescription;	// IMP=0x000000000005fcf0
- (void).cxx_destruct;	// IMP=0x000000000005fd5f
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSSet *removedPersonFaceCrops; // @synthesize removedPersonFaceCrops=_removedPersonFaceCrops;
@property(readonly) NSMutableSet *unassociatedFaceCrops; // @synthesize unassociatedFaceCrops=_unassociatedFaceCrops;
@property(readonly) NSMutableDictionary *personToFaceCrops; // @synthesize personToFaceCrops=_personToFaceCrops;
- (void)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 forSource:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005f05d
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005efa3
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005eee9
- (void)removePersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005eb7e
- (void)removeFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005e60c
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005e514
- (void)fetchAllUnassociatedFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005e423
- (void)addPersons:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005e17c
- (void)addPersonFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005e086
- (void)addFaceCrops:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005df90
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005ded6
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005dc0e
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005db22
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d84a
- (void)fetchAllPersonsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d6fa
- (void)fetchAllPersonFaceCropsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d537
- (void)fetchAllFaceprintsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d44b
- (id)existingFaceCropUUIDs;	// IMP=0x000000000005d3df
- (id)existingPersonFaceCropUUIDs;	// IMP=0x000000000005d273
- (id)existingPersonUUIDs;	// IMP=0x000000000005d1ac
- (id)init;	// IMP=0x000000000005d05c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

