//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VNHumanHandPoseObservation
{
}

@property(readonly) long long chirality;
- (id)recognizedPointsForJointsGroupName:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010783a
- (id)recognizedPointForJointName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000107818
@property(readonly, copy) NSArray *availableJointsGroupNames;
@property(readonly, copy) NSArray *availableJointNames;

@end
