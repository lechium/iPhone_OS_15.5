//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel;

__attribute__((visibility("hidden")))
@interface SNSoundPrint100kDogBarkModel : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000008e801
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008e778
+ (id)URLOfModelInThisBundle;	// IMP=0x000000000008e44b
- (void).cxx_destruct;	// IMP=0x000000000008ed08
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008eaf0
- (id)predictionFromSoundprint_Placeholder:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008ea5e
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008e998
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008e919
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000008e700
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008e688
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008e603
- (id)init;	// IMP=0x000000000008e5a6
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000000008e515

@end

