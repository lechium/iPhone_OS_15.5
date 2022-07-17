//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGFingerprintVersionHelper : NSObject
{
}

+ (id)_sceneprintFeatureExtractorInstance;	// IMP=0x0000000000541d94
+ (_Bool)_generateError:(id *)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 underlyingError:(id)arg4;	// IMP=0x0000000000541ca7
+ (id)_featureExtractor:(id)arg1 withTransformers:(id)arg2 parentFeatureExtractorName:(id)arg3;	// IMP=0x0000000000541b34
+ (id)_featureExtractor:(id)arg1 withTransformers:(id)arg2;	// IMP=0x0000000000541b1f
+ (id)_featureExtractors:(id)arg1 withTransformers:(id)arg2 parentFeatureExtractorName:(id)arg3;	// IMP=0x00000000005418ff
+ (id)_featureExtractors:(id)arg1 withTransformers:(id)arg2;	// IMP=0x0000000000541894
+ (id)_personaVectorFeatureExtractorForPersonaVectorType:(long long)arg1 fetchOptionPropertySet:(id)arg2 graph:(id)arg3 transformers:(id)arg4 error:(id *)arg5;	// IMP=0x000000000053fe44
+ (id)_multiModalFeatureExtractorForMutliModalType:(long long)arg1 assetFeatureExtractor:(id)arg2 personaVectorFeatureExtractor:(id)arg3 graph:(id)arg4 transformers:(id)arg5 error:(id *)arg6;	// IMP=0x000000000053c684
+ (id)_assetPrintFeatureExtractorForAssetPrintType:(long long)arg1 transformers:(id)arg2 error:(id *)arg3;	// IMP=0x000000000053c555
+ (void)resetPreCalculatedFeatures;	// IMP=0x000000000053c51f
+ (_Bool)isMemoryNodeFingerprintVersion:(long long)arg1;	// IMP=0x000000000053c50f
+ (_Bool)isMomentNodeFingerprintVersion:(long long)arg1;	// IMP=0x000000000053c4fb
+ (_Bool)isMemoryFingerprintVersion:(long long)arg1;	// IMP=0x000000000053c4da
+ (_Bool)isMomentFingerprintVersion:(long long)arg1;	// IMP=0x000000000053c4bc
+ (_Bool)isAssetFingerprintVersion:(long long)arg1;	// IMP=0x000000000053c47e
+ (id)fetchOptionPropertySetForFingerprintVersion:(long long)arg1;	// IMP=0x000000000053c32c
+ (id)featureExtractorForFingerprintVersion:(long long)arg1 withGraph:(id)arg2 withTransformers:(id)arg3 error:(id *)arg4;	// IMP=0x000000000053bdc5
+ (long long)fingerprintVersionForName:(id)arg1;	// IMP=0x000000000053b794
+ (id)nameForFingerprintVersion:(long long)arg1;	// IMP=0x000000000053b426

@end
