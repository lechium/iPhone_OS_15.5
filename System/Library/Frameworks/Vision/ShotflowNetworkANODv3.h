//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANODv3
{
}

+ (_Bool)inputBGR;	// IMP=0x000000000023139a
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x0000000000231385
+ (float)inputScale;	// IMP=0x0000000000231377
+ (_Bool)hasPose;	// IMP=0x000000000023136f
+ (const void *)importantClasses;	// IMP=0x0000000000231343
+ (unsigned long long)mumberPosClasses;	// IMP=0x0000000000231338
+ (id)inputLayerName;	// IMP=0x000000000023132b
+ (id)modelName;	// IMP=0x000000000023131e
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x0000000000230eb2
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x0000000000230d10
- (void)initializeBuffers;	// IMP=0x00000000002302ed
- (id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5;	// IMP=0x0000000000230221

@end

