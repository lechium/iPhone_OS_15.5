//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NLModelConfiguration, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplL
{
    const void *_maxEntModel;	// 8 = 0x8
    NLModelConfiguration *_configuration;	// 16 = 0x10
    NSDictionary *_labelMap;	// 24 = 0x18
    NSDictionary *_vocabularyMap;	// 32 = 0x20
    NSDictionary *_documentFrequencyMap;	// 40 = 0x28
    unsigned long long _numberOfTrainingInstances;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000011196
- (id)predictedLabelHypothesesForTokens:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000011082
- (id)predictedLabelHypothesesForString:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x0000000000010f71
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x0000000000010e65
- (id)predictedLabelForString:(id)arg1;	// IMP=0x0000000000010d79
- (unsigned long long)numberOfTrainingInstances;	// IMP=0x0000000000010d68
- (id)documentFrequencyMap;	// IMP=0x0000000000010d53
- (id)vocabularyMap;	// IMP=0x0000000000010d3e
- (id)labelMap;	// IMP=0x0000000000010d29
- (id)configuration;	// IMP=0x0000000000010d14
- (id)modelData;	// IMP=0x0000000000010ce5
- (void)dealloc;	// IMP=0x0000000000010c9f
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000010aa3
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x00000000000108c5
- (id)initWithOwnedModelObject:(const void *)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 numberOfTrainingInstances:(unsigned long long)arg6;	// IMP=0x0000000000010738

@end
