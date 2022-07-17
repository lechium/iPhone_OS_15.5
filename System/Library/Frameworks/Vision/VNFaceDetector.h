//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Vision/VNDetectorKeyProviding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VNFaceDetector <VNDetectorKeyProviding>
{
}

+ (void)printDebugInfo:(id)arg1 facesDataRaw:(void *)arg2 faceDetectorBGRAImage:(struct __CVBuffer *)arg3 tempImage:(struct vImage_Buffer)arg4;	// IMP=0x0000000000184178
+ (_Bool)shouldDumpDebugIntermediates;	// IMP=0x000000000018414d
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000183fd5
+ (void)fullyPopulateConfigurationOptions:(id)arg1;	// IMP=0x0000000000183e8b
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x0000000000183e0c
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x0000000000183da9
- (void)purgeIntermediates;	// IMP=0x0000000000184d8b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
