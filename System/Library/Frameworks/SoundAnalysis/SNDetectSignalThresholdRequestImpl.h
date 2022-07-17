//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SNDetectSignalThresholdRequestImpl : NSObject <SNAnalyzing>
{
    shared_ptr_f6ac7592 _graph;	// 8 = 0x8
    unsigned int _blockSize;	// 24 = 0x18
    double _sampleRate;	// 32 = 0x20
    double _magnitudeThreshold;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000000013fa6
- (void).cxx_destruct;	// IMP=0x0000000000013f98
@property(nonatomic) double magnitudeThreshold; // @synthesize magnitudeThreshold=_magnitudeThreshold;
@property(nonatomic) unsigned int blockSize; // @synthesize blockSize=_blockSize;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)sharedProcessorConfiguration;	// IMP=0x0000000000013f52
@property(readonly, nonatomic) void *resultsBox;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013b69
- (id)resultsFromBox:(void *)arg1 renderedWithFrameCount:(int)arg2;	// IMP=0x00000000000138c5
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (id)initWithSampleRate:(double)arg1 blockSize:(unsigned int)arg2 magnitudeThreshold:(double)arg3;	// IMP=0x000000000001384a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
