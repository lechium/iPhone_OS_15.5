//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPInterAssetAnalyzer : NSObject
{
}

+ (struct CGSize)thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x00000000000c7175
+ (_Bool)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2;	// IMP=0x00000000000c70a5
- (int)computeDistance:(float *)arg1 fromArray:(id)arg2 toArray:(id)arg3;	// IMP=0x00000000000c7f79
- (int)computeDistance:(float *)arg1 withDescriptorClass:(id)arg2 fromAsset:(id)arg3 toAsset:(id)arg4;	// IMP=0x00000000000c7d93
- (int)generateDistanceDescriptor:(id *)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3 withResources:(id)arg4 lastFrame:(_Bool)arg5;	// IMP=0x00000000000c7b90
- (struct __CVBuffer *)_getThumbnailForAsset:(id)arg1 withResouces:(id)arg2 andPixelFormat:(int)arg3;	// IMP=0x00000000000c76fa
- (int)_generateLastFrameDistanceDescriptor:(id *)arg1 withDescriptorClass:(Class)arg2 forAsset:(id)arg3;	// IMP=0x00000000000c72f1
- (id)init;	// IMP=0x00000000000c7057

@end

