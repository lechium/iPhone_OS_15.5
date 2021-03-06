//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrintAEmbeddingModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008909b
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089012
+ (id)URLOfModelInThisBundle;	// IMP=0x0000000000088ce5
- (void).cxx_destruct;	// IMP=0x00000000000895a2
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008938a
- (id)predictionFromAudioSamples:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000892f8
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000089232
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000891b3
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000088f9a
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000088f22
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000088e9d
- (id)init;	// IMP=0x0000000000088e40
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000088daf

@end

