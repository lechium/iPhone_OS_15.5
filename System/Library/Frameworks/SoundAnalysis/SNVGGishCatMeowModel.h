//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNVGGishCatMeowModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000095fd0
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000095f47
+ (id)URLOfModelInThisBundle;	// IMP=0x0000000000095c1a
- (void).cxx_destruct;	// IMP=0x0000000000096706
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000963e8
- (id)predictionFromInput1:(id)arg1 stateIn:(id)arg2 detectedHistoryIn:(id)arg3 error:(id *)arg4;	// IMP=0x000000000009631c
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000096167
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000960e8
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000095ecf
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000095e57
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000095dd2
- (id)init;	// IMP=0x0000000000095d75
- (id)initWithMLModel:(id)arg1;	// IMP=0x0000000000095ce4

@end
