//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKInkRendererHelper : NSObject
{
}

+ (double)_calculateMaxRenderingSize;	// IMP=0x000000000006ed48
+ (id)_createFullSizeRenderer;	// IMP=0x000000000006ecf7
+ (id)_sharedOfflineInkRendererSmallSize;	// IMP=0x000000000006ec97
+ (double)maxRenderingSize;	// IMP=0x000000000006ec68
+ (void)purgeSharedRenderer;	// IMP=0x000000000006ebff
+ (id)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 scale:(double)arg3;	// IMP=0x000000000006e8ce

@end

