//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLDataSet, NLModel, NLModelConfiguration, NSDictionary, NSError;
@protocol NLModelTrainerDelegate;

@interface NLModelTrainer : NSObject
{
    NLModelConfiguration *_configuration;	// 8 = 0x8
    NLDataSet *_dataSet;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    NLModel *_model;	// 32 = 0x20
    NSError *_trainingError;	// 40 = 0x28
    id <NLModelTrainerDelegate> _delegate;	// 48 = 0x30
    _Bool _delegateRespondsToLogMessage;	// 56 = 0x38
    _Bool _delegateRespondsToShouldStop;	// 57 = 0x39
}

+ (id)modelTrainerWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000002dd55
- (void).cxx_destruct;	// IMP=0x000000000002e49f
- (_Bool)trainerShouldStop:(id)arg1;	// IMP=0x000000000002e48d
- (_Bool)shouldStop;	// IMP=0x000000000002e46a
- (void)trainer:(id)arg1 logMessage:(id)arg2;	// IMP=0x000000000002e455
- (void)logMessage:(id)arg1;	// IMP=0x000000000002e431
@property(readonly, copy) NSDictionary *testResults;
@property(readonly, copy) NLModel *trainedModel;
- (void)setTrainingError:(id)arg1;	// IMP=0x000000000002e2e0
@property(readonly, copy) NSError *trainingError;
- (void)setModel:(id)arg1;	// IMP=0x000000000002e2c1
- (id)model;	// IMP=0x000000000002e2b3
- (void)trainModel;	// IMP=0x000000000002e0ed
- (Class)modelImplClass;	// IMP=0x000000000002de37
@property(readonly) id <NLModelTrainerDelegate> delegate;
@property(readonly, copy) NSDictionary *options;
@property(readonly) NLDataSet *dataSet;
@property(readonly, copy) NLModelConfiguration *configuration;
- (id)initWithConfiguration:(id)arg1 dataSet:(id)arg2 options:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000002dbe4

@end

