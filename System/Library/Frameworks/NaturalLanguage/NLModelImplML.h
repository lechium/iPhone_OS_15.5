//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MLModel, NLModelConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface NLModelImplML
{
    MLModel *_mlModel;	// 8 = 0x8
    NLModelConfiguration *_configuration;	// 16 = 0x10
    NSString *_inputName;	// 24 = 0x18
    NSString *_outputName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000004656
- (id)predictedLabelsForTokens:(id)arg1;	// IMP=0x000000000000454a
- (id)predictedLabelForString:(id)arg1;	// IMP=0x0000000000004333
- (id)configuration;	// IMP=0x000000000000431e
- (id)modelData;	// IMP=0x0000000000004316
- (id)initWithMLModel:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000040e6
- (id)initWithModelTrainer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000040d8
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7 error:(id *)arg8;	// IMP=0x00000000000040ca

@end
