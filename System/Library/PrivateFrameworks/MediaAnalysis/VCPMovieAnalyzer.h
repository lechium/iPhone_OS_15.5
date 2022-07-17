//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCPAsset;

@interface VCPMovieAnalyzer : NSObject
{
    unsigned long long _requestedAnalyses;	// 8 = 0x8
    NSMutableDictionary *_analysis;	// 16 = 0x10
    NSMutableDictionary *_privateResults;	// 24 = 0x18
    VCPAsset *_asset;	// 32 = 0x20
    _Bool _supportConditionalAnalysis;	// 40 = 0x28
    NSDictionary *_existingAnalysis;	// 48 = 0x30
    _Bool _prepareLivePhotoScenes;	// 56 = 0x38
    _Bool _faceDominated;	// 57 = 0x39
    _Bool _allowStreaming;	// 58 = 0x3a
    float _maxHighlightDuration;	// 60 = 0x3c
    long long _status;	// 64 = 0x40
}

+ (id)analyzerWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;	// IMP=0x00000000001276fb
+ (id)getHumanActionClassiferType;	// IMP=0x00000000001273bd
+ (float)getMaximumHighlightInSec;	// IMP=0x0000000000127374
+ (_Bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;	// IMP=0x00000000001272b0
- (void).cxx_destruct;	// IMP=0x000000000012f408
@property(readonly) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool faceDominated; // @synthesize faceDominated=_faceDominated;
@property(nonatomic) float maxHighlightDuration; // @synthesize maxHighlightDuration=_maxHighlightDuration;
@property(nonatomic) _Bool allowStreaming; // @synthesize allowStreaming=_allowStreaming;
- (int)generateKeyFrameResource:(id)arg1;	// IMP=0x000000000012efd6
- (id)analyzeAsset:(CDUnknownBlockType)arg1 streamed:(_Bool *)arg2;	// IMP=0x000000000012d90a
- (int)analyzeVideoTrack:(id)arg1 start:(CDStruct_1b6d18a9)arg2 forAnalysisTypes:(unsigned long long)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000012d404
- (int)postProcessAutoPlayable:(id)arg1;	// IMP=0x000000000012d101
- (int)analyzeVideoSegment:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2 forAnalysisTypes:(unsigned long long)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000012919b
- (id)createVideoAnalyzer:(id)arg1 withFrameStats:(id)arg2;	// IMP=0x0000000000129027
- (id)createDecoderForTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2 forAnalysisTypes:(unsigned long long)arg3;	// IMP=0x0000000000128da6
- (int)performMetadataAnalysisOnAsset:(id)arg1 withCancelBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000128a7a
- (id)processExistingAnalysisForTimeRange:(CDStruct_e83c9415)arg1 analysisTypes:(unsigned long long *)arg2;	// IMP=0x000000000012837a
- (void)loadPropertiesForAsset:(id)arg1;	// IMP=0x0000000000127e45
- (id)privateResults;	// IMP=0x0000000000127e37
- (id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;	// IMP=0x0000000000127b5b
- (id)initWithPHAsset:(id)arg1 withPausedAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;	// IMP=0x000000000012779e
- (id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;	// IMP=0x00000000001273ca

@end
