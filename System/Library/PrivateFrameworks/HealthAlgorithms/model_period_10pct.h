//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface model_period_10pct : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038f5a
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000038ed1
+ (id)URLOfModelInThisBundle;	// IMP=0x0000000000038ba4
- (void).cxx_destruct;	// IMP=0x0000000000039607
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000039319
- (id)predictionFromIn:(id)arg1 lstm_1_h_in:(id)arg2 lstm_1_c_in:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003924d
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000390f1
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000039072
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000038e59
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000038de1
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000038d5c
- (id)init;	// IMP=0x0000000000038cff
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000038c6e

@end

