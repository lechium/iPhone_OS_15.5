//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/_HKFitnessFriendWorkout.h>

#import <ActivitySharing/ASCloudKitCodable-Protocol.h>

@class ASCodableCloudKitWorkout, NSString;

@interface _HKFitnessFriendWorkout (CloudKitCodingSupport) <ASCloudKitCodable>
+ (id)_fitnessFriendWorkoutWithCodableWorkout:(id)arg1 friendUUID:(id)arg2;	// IMP=0x0000000000005547
+ (id)fitnessFriendWorkoutWithCodableWorkout:(id)arg1 friendUUID:(id)arg2;	// IMP=0x0000000000005535
+ (id)fitnessFriendWorkoutWithCodableWorkout:(id)arg1;	// IMP=0x0000000000005521
+ (id)fitnessFriendWorkoutWithRecord:(id)arg1 friendUUID:(id)arg2;	// IMP=0x000000000000535c
- (id)recordWithZoneID:(id)arg1;	// IMP=0x00000000000050dd
@property(readonly, nonatomic) ASCodableCloudKitWorkout *codableWorkout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

