//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehavior-Protocol.h>
#import <AVKit/AVBehaviorInternal-Protocol.h>
#import <AVKit/AVHomeIPCameraActionButtonHandling-Protocol.h>

@class AVHomeIPCameraBehaviorContext, NSString;

@interface AVHomeIPCameraBehavior : NSObject <AVBehaviorInternal, AVHomeIPCameraActionButtonHandling, AVBehavior>
{
    AVHomeIPCameraBehaviorContext *_behaviorContext;	// 8 = 0x8
}

+ (Class)behaviorContextClass;	// IMP=0x00000000000197fa
- (void).cxx_destruct;	// IMP=0x0000000000019862
@property(nonatomic) __weak AVHomeIPCameraBehaviorContext *behaviorContext; // @synthesize behaviorContext=_behaviorContext;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(_Bool)arg1;	// IMP=0x0000000000019835
- (void)didRemoveFromContext:(id)arg1;	// IMP=0x000000000001982f
- (void)willRemoveFromContext:(id)arg1;	// IMP=0x0000000000019829
- (void)didMoveToContext:(id)arg1;	// IMP=0x0000000000019823
- (void)willMoveToContext:(id)arg1;	// IMP=0x000000000001981d
- (void)playbackControlsDidToggleMuted:(_Bool)arg1;	// IMP=0x0000000000019817
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;	// IMP=0x0000000000019811
- (void)pictureInPictureActionButtonTapped;	// IMP=0x000000000001980b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
