//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMIVideoFrameSamplerDelegate-Protocol.h>
#import <HomeAI/HMIVideoPackageAnalyzerDelegate-Protocol.h>

@class HMIBackgroundEstimator, HMICameraVideoFrameAnalyzerSignificantActivity, HMIHTMLReport, HMIVideoFrame, HMIVideoFrameIntervalSampler, NSNumber, NSString;
@protocol HMIVideoPackageAnalyzerDelegate;

@interface HMIVideoPackageAnalyzer <HMIVideoPackageAnalyzerDelegate, HMIVideoFrameSamplerDelegate, HMFLogging>
{
    int _numberOfDetectedPackagesInSession;	// 24 = 0x18
    id <HMIVideoPackageAnalyzerDelegate> _delegate;	// 32 = 0x20
    HMIVideoFrameIntervalSampler *_sampler;	// 40 = 0x28
    long long _packageClassifierMode;	// 48 = 0x30
    HMICameraVideoFrameAnalyzerSignificantActivity *_packageDetector;	// 56 = 0x38
    HMIBackgroundEstimator *_backgroundEstimator;	// 64 = 0x40
    HMIHTMLReport *_report;	// 72 = 0x48
    NSNumber *_highConfidence;	// 80 = 0x50
    NSNumber *_mediumConfidence;	// 88 = 0x58
    HMIVideoFrame *_referenceFrame;	// 96 = 0x60
    CDStruct_1b6d18a9 _lastDetectionAnalysisTimeStamp;	// 104 = 0x68
    CDStruct_1b6d18a9 _detectionAnalysisInterval;	// 128 = 0x80
}

+ (id)eventConfidenceThresholdMedium;	// IMP=0x0000000000094597
+ (id)eventConfidenceThresholdHigh;	// IMP=0x000000000009450c
+ (id)logCategory;	// IMP=0x0000000000092a3b
- (void).cxx_destruct;	// IMP=0x00000000000947a6
@property(readonly) CDStruct_1b6d18a9 detectionAnalysisInterval; // @synthesize detectionAnalysisInterval=_detectionAnalysisInterval;
@property CDStruct_1b6d18a9 lastDetectionAnalysisTimeStamp; // @synthesize lastDetectionAnalysisTimeStamp=_lastDetectionAnalysisTimeStamp;
@property(retain) HMIVideoFrame *referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property int numberOfDetectedPackagesInSession; // @synthesize numberOfDetectedPackagesInSession=_numberOfDetectedPackagesInSession;
@property(readonly) NSNumber *mediumConfidence; // @synthesize mediumConfidence=_mediumConfidence;
@property(readonly) NSNumber *highConfidence; // @synthesize highConfidence=_highConfidence;
@property(readonly) HMIHTMLReport *report; // @synthesize report=_report;
@property(readonly) HMIBackgroundEstimator *backgroundEstimator; // @synthesize backgroundEstimator=_backgroundEstimator;
@property(readonly) HMICameraVideoFrameAnalyzerSignificantActivity *packageDetector; // @synthesize packageDetector=_packageDetector;
@property(readonly) long long packageClassifierMode; // @synthesize packageClassifierMode=_packageClassifierMode;
@property(readonly) HMIVideoFrameIntervalSampler *sampler; // @synthesize sampler=_sampler;
@property __weak id <HMIVideoPackageAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMotionDetection:(id)arg1 inFrame:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x0000000000094494
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000000094448
- (id)eventsFromRegionOfInterest:(struct CGRect)arg1 frame:(id)arg2;	// IMP=0x000000000009420e
- (struct CGRect)regionOfInterestFromEvents:(id)arg1 frameSize:(struct CGSize)arg2;	// IMP=0x0000000000093f88
- (void)frameSampler:(id)arg1 didSampleFrame:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x0000000000093015
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000092a45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
