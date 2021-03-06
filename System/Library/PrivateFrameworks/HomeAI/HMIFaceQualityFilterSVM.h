//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class MLModel, NSString;

@interface HMIFaceQualityFilterSVM : HMFObject <HMFLogging>
{
    MLModel *_mlModel;	// 8 = 0x8
    MLModel *_scalerModel;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x000000000001c1f8
+ (id)defaultAestheticQualityDataScalerPath;	// IMP=0x000000000001c1df
+ (id)defaultAestheticQualityModelPath;	// IMP=0x000000000001c1c6
+ (id)defaultRecognizabilityDataScalerPath;	// IMP=0x000000000001c1ad
+ (id)defaultRecognizabilityModelPath;	// IMP=0x000000000001c194
+ (id)modelPathForResource:(id)arg1;	// IMP=0x000000000001c100
+ (id)svmOutputName;	// IMP=0x000000000001b9c3
+ (id)svmInputName;	// IMP=0x000000000001b9b6
+ (id)dataScalerOutputName;	// IMP=0x000000000001b9a9
+ (id)dataScalerInputName;	// IMP=0x000000000001b99c
- (void).cxx_destruct;	// IMP=0x000000000001c22e
@property(readonly) MLModel *scalerModel; // @synthesize scalerModel=_scalerModel;
@property(readonly) MLModel *mlModel; // @synthesize mlModel=_mlModel;
- (_Bool)predict:(id)arg1 output:(double *)arg2 error:(id *)arg3;	// IMP=0x000000000001bc09
- (id)initWithModelPath:(id)arg1 dataScalerPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001b9d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

