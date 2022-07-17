//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGishDingBellModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000083255
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000831cc
+ (id)URLOfModelInThisBundle;	// IMP=0x0000000000082e9f
- (void).cxx_destruct;	// IMP=0x000000000008398b
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008366d
- (id)predictionFromInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000835a1
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000833ec
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008336d
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000083154
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000830dc
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000083057
- (id)init;	// IMP=0x0000000000082ffa
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000082f69

@end
