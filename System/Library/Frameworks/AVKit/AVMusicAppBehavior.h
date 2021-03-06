//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehavior-Protocol.h>
#import <AVKit/AVBehaviorInternal-Protocol.h>

@class AVMusicAppBehaviorContext, NSString;

@interface AVMusicAppBehavior : NSObject <AVBehaviorInternal, AVBehavior>
{
    AVMusicAppBehaviorContext *_behaviorContext;	// 8 = 0x8
}

+ (Class)behaviorContextClass;	// IMP=0x0000000000029afc
- (void).cxx_destruct;	// IMP=0x0000000000029b6a
@property(nonatomic) __weak AVMusicAppBehaviorContext *behaviorContext; // @synthesize behaviorContext=_behaviorContext;
- (void)skipToPreviousItem;	// IMP=0x0000000000029b3d
- (void)skipToNextItem;	// IMP=0x0000000000029b37
- (void)contextWillHandleUserAction:(long long)arg1;	// IMP=0x0000000000029b31
- (void)didRemoveFromContext:(id)arg1;	// IMP=0x0000000000029b2b
- (void)willRemoveFromContext:(id)arg1;	// IMP=0x0000000000029b25
- (void)didMoveToContext:(id)arg1;	// IMP=0x0000000000029b1f
- (void)willMoveToContext:(id)arg1;	// IMP=0x0000000000029b19
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;	// IMP=0x0000000000029b13
- (void)pictureInPictureActionButtonTapped;	// IMP=0x0000000000029b0d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

