//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceMemos/RCWaveformDataSourceObserver-Protocol.h>

@class NSObject, NSString, RCComposition, _RCTimeRangeFileInputWaveformDataSource;
@protocol OS_dispatch_queue;

@interface RCCompositionWaveformDataSource <RCWaveformDataSourceObserver>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    float _progressOfFinishedFragments;	// 16 = 0x10
    float _progressWeightPerFragment;	// 20 = 0x14
    _Bool _preferLoadingFragmentWaveforms;	// 24 = 0x18
    _Bool _saveGeneratedWaveform;	// 25 = 0x19
    _Bool _highlightLastDecomposedFragment;	// 26 = 0x1a
    RCComposition *_composition;	// 32 = 0x20
    _RCTimeRangeFileInputWaveformDataSource *_activeFragmentDataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000004f54e
@property(retain) _RCTimeRangeFileInputWaveformDataSource *activeFragmentDataSource; // @synthesize activeFragmentDataSource=_activeFragmentDataSource;
@property(nonatomic) _Bool highlightLastDecomposedFragment; // @synthesize highlightLastDecomposedFragment=_highlightLastDecomposedFragment;
@property(nonatomic) _Bool saveGeneratedWaveform; // @synthesize saveGeneratedWaveform=_saveGeneratedWaveform;
@property(readonly, nonatomic) _Bool preferLoadingFragmentWaveforms; // @synthesize preferLoadingFragmentWaveforms=_preferLoadingFragmentWaveforms;
@property(readonly, nonatomic) RCComposition *composition; // @synthesize composition=_composition;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;	// IMP=0x000000000004f2d8
- (void)waveformDataSourceDidFinishLoading:(id)arg1;	// IMP=0x000000000004f2d2
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;	// IMP=0x000000000004f2c0
- (_Bool)shouldMergeLiveWaveform;	// IMP=0x000000000004f2b8
- (CDStruct_73a5d3ca)timeRangeToHighlight;	// IMP=0x000000000004f1f6
- (id)saveableWaveform;	// IMP=0x000000000004f19c
- (double)duration;	// IMP=0x000000000004f17f
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg1;	// IMP=0x000000000004f0b9
- (_Bool)_synchronouslyAppendSegmentsFromDataSource:(id)arg1;	// IMP=0x000000000004f03e
- (id)_dataSourceForAVContentURL:(id)arg1 isDecomposedFragment:(_Bool)arg2 sourceTimeRange:(CDStruct_73a5d3ca)arg3 destinationTime:(double)arg4;	// IMP=0x000000000004ef2c
- (float)loadingProgress;	// IMP=0x000000000004eeee
- (void)startLoading;	// IMP=0x000000000004e45c
- (void)dealloc;	// IMP=0x000000000004e3b3
- (void)cancelLoading;	// IMP=0x000000000004e346
- (id)initWithComposition:(id)arg1;	// IMP=0x000000000004e24c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

