//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface ETModelDefinition : NSObject
{
    NSArray *_layerNames;	// 8 = 0x8
    NSArray *_inputs;	// 16 = 0x10
    NSArray *_outputs;	// 24 = 0x18
    NSArray *_trainingInputs;	// 32 = 0x20
    NSArray *_trainingOutputs;	// 40 = 0x28
    NSURL *_modelURL;	// 48 = 0x30
    NSString *_isTrainingGlobalName;	// 56 = 0x38
    NSString *_initializer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000611ddb
@property(readonly) NSString *initializer; // @synthesize initializer=_initializer;
@property(readonly) NSString *isTrainingGlobalName; // @synthesize isTrainingGlobalName=_isTrainingGlobalName;
@property(readonly) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property(readonly) NSArray *trainingOutputs; // @synthesize trainingOutputs=_trainingOutputs;
@property(readonly) NSArray *trainingInputs; // @synthesize trainingInputs=_trainingInputs;
@property(readonly) NSArray *outputs; // @synthesize outputs=_outputs;
@property(readonly) NSArray *inputs; // @synthesize inputs=_inputs;
@property(readonly) NSArray *layerNames; // @synthesize layerNames=_layerNames;
- (id)initWithTrainingNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 trainingInputs:(id)arg4 trainingOutputs:(id)arg5 trainingControlVariableName:(id)arg6 withInitializer:(id)arg7 error:(id *)arg8;	// IMP=0x0000000000611b87
- (id)initWithInferenceNetworkPath:(id)arg1 inferenceInputs:(id)arg2 inferenceOutputs:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000611aac
- (id)initWithInferenceNetworkPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000611a8d

@end

