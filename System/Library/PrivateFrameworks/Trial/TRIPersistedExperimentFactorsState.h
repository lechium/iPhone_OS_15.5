//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIPersistedExperimentFactorsState : TRIPBMessage
{
}

+ (id)descriptor;	// IMP=0x000000000001fc0f

// Remaining properties
@property(nonatomic) int deploymentId; // @dynamic deploymentId;
@property(copy, nonatomic) NSString *experimentId; // @dynamic experimentId;
@property(nonatomic) _Bool hasDeploymentId; // @dynamic hasDeploymentId;
@property(nonatomic) _Bool hasExperimentId; // @dynamic hasExperimentId;
@property(nonatomic) _Bool hasTreatmentId; // @dynamic hasTreatmentId;
@property(copy, nonatomic) NSString *treatmentId; // @dynamic treatmentId;

@end

