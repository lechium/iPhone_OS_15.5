//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString;

@interface AMDWorkflow : NSManagedObject
{
}

+ (id)performWorkflowCleanupForDomain:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000002c770
+ (id)getCurrentWorkflowForDomain:(long long)arg1 andTreatmentId:(id)arg2 andUseCaseId:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002be40
+ (id)fetchAllWorkflows:(id *)arg1;	// IMP=0x000000000002b600
+ (id)getAllActiveWorkflowsForDomain:(long long)arg1 andUseCaseId:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002b0a0
+ (id)getWorkflowsForModelId:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002af90
+ (id)getAllWorkflowsForDomain:(long long)arg1 withUseCaseId:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002ae10
+ (id)getWorkflowsForDomain:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000002ad40
+ (id)getWorkflowsForDomain:(long long)arg1 andTreatmentId:(id)arg2 andUseCaseId:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002ab50
+ (id)fetchWithPredicates:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a650
+ (id)deleteWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a060
+ (id)deleteAllWorkflows:(id *)arg1;	// IMP=0x000000000002a020
+ (id)deleteWorkflowsForDomain:(long long)arg1 andTreatmentId:(id)arg2 andUseCaseId:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000029f10
+ (id)deleteWorkflowsForDomain:(long long)arg1 withModelId:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000029e30
+ (id)deleteWorkflowsForDomain:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000029d90
+ (id)deleteWorkflowsForModelId:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029cc0
+ (void)addWorkflowsFromInflightTable:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000029430
+ (void)saveWorkflow:(id)arg1 forDomain:(long long)arg2 withCallUUID:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000286c0
+ (id)fetchRequest;	// IMP=0x00000000000a37a0

// Remaining properties
@property(copy, nonatomic) NSString *callUUID; // @dynamic callUUID;
@property(nonatomic) short domain; // @dynamic domain;
@property(nonatomic) long long endTime; // @dynamic endTime;
@property(copy, nonatomic) NSString *modelId; // @dynamic modelId;
@property(nonatomic) long long startTime; // @dynamic startTime;
@property(copy, nonatomic) NSString *treatmentId; // @dynamic treatmentId;
@property(copy, nonatomic) NSString *useCaseId; // @dynamic useCaseId;
@property(retain, nonatomic) NSData *workflow; // @dynamic workflow;

@end

