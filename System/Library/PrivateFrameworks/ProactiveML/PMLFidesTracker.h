//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLEvaluationTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLogRegTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLMultiLabelEvaluationTrackerProtocol-Protocol.h>

@class NSString;

@interface PMLFidesTracker : NSObject <PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol>
{
    NSString *_planId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000036794
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x000000000003665c
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x000000000003664f
- (id)trackPrecisionAtK:(id)arg1 minibatchStats:(id)arg2;	// IMP=0x00000000000363a6
- (id)trackPrecisionAtK:(id)arg1;	// IMP=0x0000000000036314
- (id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;	// IMP=0x00000000000360b5
- (id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5;	// IMP=0x0000000000035db6
- (id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4;	// IMP=0x0000000000035ae3
- (id)initWithPlanId:(id)arg1;	// IMP=0x00000000000359fd
- (id)init;	// IMP=0x00000000000359f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

