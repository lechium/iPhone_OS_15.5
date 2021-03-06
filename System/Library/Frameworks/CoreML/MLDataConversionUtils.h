//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MLDataConversionUtils : NSObject
{
}

+ (unsigned long long)sizeFromShape:(id)arg1;	// IMP=0x00000000000f4247
+ (unsigned long long)mlComputeDataTypeSize:(long long)arg1;	// IMP=0x00000000000f423c
+ (id)batchProviderFromMLComputeDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f4234
+ (id)featureProviderFomMLComputeDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f41c7
+ (id)mlComputeDataProviderFromBatchProvider:(id)arg1 batchSize:(unsigned long long)arg2 forPrediction:(_Bool)arg3 neuralNetworkEngine:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000f4117
+ (id)batchProviderFromEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f2f46
+ (id)featureProviderFromEspressoDataProvider:(id)arg1 neuralNetworkEngine:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f2ed9
+ (id)espressoDataProviderFromBatchProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f2e36
+ (id)espressoDataProviderFromFeatureProvider:(id)arg1 forPrediction:(_Bool)arg2 neuralNetworkEngine:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000f2d93
+ (_Bool)populateShapeAndStrideFor:(id)arg1 inputShape:(id)arg2 outputShape:(id *)arg3 outputStrides:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000000f1f94
+ (_Bool)populateEspressoShapeAndStridesFromInputShape:(id)arg1 ndRepresentation:(_Bool)arg2 espressoShape:(id *)arg3 espressoStrides:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000000f15ee
+ (id)stridesForShape:(id)arg1;	// IMP=0x00000000000f1453

@end

