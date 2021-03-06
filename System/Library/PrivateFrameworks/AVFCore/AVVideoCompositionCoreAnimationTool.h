//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVideoCompositionCoreAnimationToolInternal;

@interface AVVideoCompositionCoreAnimationTool : NSObject
{
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;	// 8 = 0x8
}

+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg1 inLayer:(id)arg2;	// IMP=0x00000000000b8395
+ (id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg1 inLayer:(id)arg2;	// IMP=0x00000000000b833c
+ (id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg1 asTrackID:(int)arg2;	// IMP=0x00000000000b8307
- (id)_postProcessingVideoLayers;	// IMP=0x00000000000b84b4
- (id)_postProcessingRootLayer;	// IMP=0x00000000000b849b
- (_Bool)_hasPostProcessingLayers;	// IMP=0x00000000000b847e
- (int)_auxiliaryTrackID;	// IMP=0x00000000000b8468
- (id)_auxiliaryTrackLayer;	// IMP=0x00000000000b844f
- (_Bool)_hasLayerAsAuxiliaryTrack;	// IMP=0x00000000000b8432
- (void)dealloc;	// IMP=0x00000000000b83cb
- (id)initWithMagicTrackID:(int)arg1 animationLayer:(id)arg2 videoLayers:(id)arg3;	// IMP=0x00000000000b824b

@end

