//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VNCoreMLModel;
@protocol AIAudiogramIngestionEngineDelegate, OS_dispatch_queue;

@interface AIAudiogramIngestionEngine : NSObject
{
    _Bool _isRetrievingLatestModel;	// 8 = 0x8
    _Bool _isRetrievingLatestModelSilently;	// 9 = 0x9
    float _modelLabelConfidenceThreshold;	// 12 = 0xc
    id <AIAudiogramIngestionEngineDelegate> _delegate;	// 16 = 0x10
    VNCoreMLModel *_model;	// 24 = 0x18
    NSString *_modelLabelLeftEarSymbol;	// 32 = 0x20
    NSString *_modelLabelRightEarSymbol;	// 40 = 0x28
    NSString *_modelLabelGraph;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_analysisQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000d578
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue; // @synthesize analysisQueue=_analysisQueue;
@property(nonatomic) float modelLabelConfidenceThreshold; // @synthesize modelLabelConfidenceThreshold=_modelLabelConfidenceThreshold;
@property(retain, nonatomic) NSString *modelLabelGraph; // @synthesize modelLabelGraph=_modelLabelGraph;
@property(retain, nonatomic) NSString *modelLabelRightEarSymbol; // @synthesize modelLabelRightEarSymbol=_modelLabelRightEarSymbol;
@property(retain, nonatomic) NSString *modelLabelLeftEarSymbol; // @synthesize modelLabelLeftEarSymbol=_modelLabelLeftEarSymbol;
@property(nonatomic) _Bool isRetrievingLatestModelSilently; // @synthesize isRetrievingLatestModelSilently=_isRetrievingLatestModelSilently;
@property(nonatomic) _Bool isRetrievingLatestModel; // @synthesize isRetrievingLatestModel=_isRetrievingLatestModel;
@property(retain, nonatomic) VNCoreMLModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <AIAudiogramIngestionEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned int)_propertyOrientationFromOrientation:(long long)arg1;	// IMP=0x000000000000d433
- (double)_zScoreFromNumber:(double)arg1 mean:(double)arg2 stddev:(double)arg3;	// IMP=0x000000000000d411
- (double)_meanFromNumbers:(id)arg1;	// IMP=0x000000000000d30c
- (double)_stddevFromNumbers:(id)arg1;	// IMP=0x000000000000d207
- (_Bool)_isValidObject:(id)arg1 toObject:(id)arg2 withValueDifference:(double)arg3 stepDistance:(double)arg4 forAxis:(unsigned long long)arg5;	// IMP=0x000000000000cda3
- (id)_validPointsFromMap:(id)arg1 forValues:(id)arg2;	// IMP=0x000000000000c7bd
- (id)_validMapForPointPairs:(id)arg1 stepDistance:(double)arg2 forValueDifference:(double)arg3 forAxis:(unsigned long long)arg4;	// IMP=0x000000000000c635
- (id)_valueDifferencesForValues:(id)arg1 stepDistance:(double)arg2 forAxis:(unsigned long long)arg3;	// IMP=0x000000000000c260
- (id)_sortAndRemoveInvalidAxisValues:(id)arg1 forAxis:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000000b3a2
- (void)_setAudiogramAxisError:(unsigned long long)arg1 onError:(id *)arg2;	// IMP=0x000000000000b1ef
- (id)_combineAudiograms:(id)arg1;	// IMP=0x000000000000a863
- (id)_audiogramFromSymbols:(id)arg1 onAudiogramMap:(id)arg2;	// IMP=0x0000000000009523
- (id)_audiogramFromSymbols:(id)arg1 recognizedText:(id)arg2;	// IMP=0x0000000000009497
- (id)audiogramFromImages:(id)arg1;	// IMP=0x0000000000008887
- (id)audiogramFromImage:(id)arg1;	// IMP=0x00000000000087cb
- (void)audiogramFromImages:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008665
- (id)_removeDuplicateSetsFromTextSets:(id)arg1;	// IMP=0x00000000000083a4
- (id)_groupNumbersByAxisFromRecognizedText:(id)arg1;	// IMP=0x000000000000748d
- (id)_formatNumbersFromRecognizedText:(id)arg1;	// IMP=0x0000000000006e07
- (id)_audiogramMapFromRecognizedText:(id)arg1;	// IMP=0x0000000000006b0f
- (struct CGRect)_shrinkRect:(struct CGRect)arg1 width:(double)arg2 height:(double)arg3 insideBounds:(struct CGSize)arg4;	// IMP=0x0000000000006974
- (id)_cropResultsFromImage:(id)arg1 observations:(id)arg2;	// IMP=0x0000000000005b3f
- (id)_rectsOfGraphFromImage:(id)arg1 objectData:(id)arg2;	// IMP=0x00000000000055db
- (id)_rectsOfSymbolsFromImage:(id)arg1 objectData:(id)arg2;	// IMP=0x0000000000003ea8
- (id)_cropEdgesFromImage:(id)arg1 graphRect:(struct CGRect)arg2 symbolsRect:(struct CGRect)arg3;	// IMP=0x00000000000035b8
- (id)_observationsFromCIImage:(id)arg1;	// IMP=0x000000000000339a
- (id)_textFromAudiogramImage:(id)arg1 regionOfInterest:(struct CGRect)arg2;	// IMP=0x0000000000002eb9
- (void)useCustomModelFromURL:(id)arg1 modelProperties:(id)arg2;	// IMP=0x0000000000002ea7
- (void)_loadModelFromAssetPath:(id)arg1 assetProperties:(id)arg2;	// IMP=0x0000000000002857
- (void)_stopRetrievingLatestModel;	// IMP=0x00000000000027e9
- (void)_retrieveModel;	// IMP=0x00000000000022cc
- (void)startRetrievingLatestModelSilently;	// IMP=0x0000000000002299
- (void)startRetrievingLatestModel;	// IMP=0x0000000000002269
- (_Bool)isAvailable;	// IMP=0x0000000000002236
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000000021e4
- (id)init;	// IMP=0x000000000000214b

@end

