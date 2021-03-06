//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;

@interface SBFCARenderer : NSObject
{
    NSXPCConnection *_rendererServiceConnection;	// 8 = 0x8
}

+ (_Bool)shouldUseXPCServiceForRendering;	// IMP=0x0000000000058849
+ (id)sharedInstance;	// IMP=0x0000000000057d72
- (void).cxx_destruct;	// IMP=0x0000000000058894
- (void)warmup;	// IMP=0x000000000005871d
- (id)applyMaterialRecipe:(id)arg1 recipeName:(id)arg2 containingBundle:(id)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5;	// IMP=0x00000000000584b7
- (id)treatWallpaperImage:(id)arg1 needsLuminanceTreatment:(_Bool)arg2 needsDimmingTreatment:(_Bool)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5;	// IMP=0x00000000000580c9
- (id)_remoteObjectProxy;	// IMP=0x0000000000057fe4
- (void)_createConnection;	// IMP=0x0000000000057dc7

@end

