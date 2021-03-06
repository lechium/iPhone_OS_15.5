//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIMetricsProviding-Protocol.h>

@class TRIExperimentDeployment, _PASLock;

@interface TRIExperimentTaskSupport : NSObject <TRIMetricsProviding>
{
    _PASLock *_lock;	// 8 = 0x8
    TRIExperimentDeployment *_experimentDeployment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000262f9
@property(readonly, nonatomic) TRIExperimentDeployment *experimentDeployment; // @synthesize experimentDeployment=_experimentDeployment;
- (id)trialSystemTelemetry;	// IMP=0x0000000000026044
- (id)dimensions;	// IMP=0x0000000000025f4d
- (id)metrics;	// IMP=0x0000000000025e0d
- (void)mergeTelemetry:(id)arg1;	// IMP=0x0000000000025d34
- (void)addDimension:(id)arg1;	// IMP=0x0000000000025c2a
- (void)addMetric:(id)arg1;	// IMP=0x0000000000025b20
- (void)setIdentifyTelemetryAsV1Rollout:(_Bool)arg1;	// IMP=0x0000000000025ac2
- (id)tags;	// IMP=0x00000000000259fe
- (id)initWithExperimentDeployment:(id)arg1;	// IMP=0x000000000002590d

@end

