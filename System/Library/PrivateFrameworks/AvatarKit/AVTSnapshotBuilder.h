//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarKit/SCNSceneRendererDelegate-Protocol.h>
#import <AvatarKit/_SCNSceneRendererDelegateSPI-Protocol.h>

@class AVTAvatar, AVTRenderer, MTLRenderPassDescriptor, NSString, SCNRenderer;
@protocol MTLCommandQueue;

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI>
{
    AVTAvatar *_avatar;	// 8 = 0x8
    AVTAvatar *_snapshotedAvatar;	// 16 = 0x10
    AVTRenderer *_renderer;	// 24 = 0x18
    id <MTLCommandQueue> _commandQueue;	// 32 = 0x20
    MTLRenderPassDescriptor *_renderPassDescriptor;	// 40 = 0x28
    struct CGContext *_bitmapContext;	// 48 = 0x30
    CDStruct_96d86c23 _backgroundGPUWorkHelper;	// 56 = 0x38
}

+ (struct CGImage *)copyRescaledCGImage:(struct CGImage *)arg1 by:(float)arg2;	// IMP=0x000000000004a8ce
+ (id)sharedInstance;	// IMP=0x0000000000049e58
- (void).cxx_destruct;	// IMP=0x000000000004b85c
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000000004b84e
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x000000000004b840
- (void)_applicationWillResignActive:(id)arg1;	// IMP=0x000000000004b832
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x000000000004b824
- (id)animatedImageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;	// IMP=0x000000000004b23a
- (id)_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3 useACopy:(_Bool)arg4;	// IMP=0x000000000004aa9d
- (id)_imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;	// IMP=0x000000000004aa83
- (id)imageWithSize:(struct CGSize)arg1 scale:(double)arg2 options:(id)arg3;	// IMP=0x000000000004aa69
- (void)setupAvatarWithOptions:(id)arg1 useACopy:(_Bool)arg2;	// IMP=0x000000000004a1b8
- (void)_applyOptions:(id)arg1;	// IMP=0x000000000004a12f
- (void)dealloc;	// IMP=0x000000000004a0d3
- (id)init;	// IMP=0x0000000000049f26
@property(retain, nonatomic) AVTAvatar *avatar;
@property(readonly, nonatomic) SCNRenderer *renderer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
