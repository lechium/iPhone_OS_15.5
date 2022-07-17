//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoardFoundation/ISBasePlayerDelegate-Protocol.h>
#import <SpringBoardFoundation/ISChangeObserver-Protocol.h>

@class ISBasePlayerUIView, NSMutableSet, NSString, UIGestureRecognizer;
@protocol SBFLivePhotoPlayerViewDelegate;

@interface SBFLivePhotoPlayerView : UIView <ISChangeObserver, ISBasePlayerDelegate>
{
    NSMutableSet *_forcePlaybackReasons;	// 8 = 0x8
    _Bool _interacting;	// 16 = 0x10
    id <SBFLivePhotoPlayerViewDelegate> _delegate;	// 24 = 0x18
    ISBasePlayerUIView *__playerUIView;	// 32 = 0x20
}

+ (id)playerViewWithRewindPlaybackStyle:(_Bool)arg1;	// IMP=0x0000000000022ec2
- (void).cxx_destruct;	// IMP=0x00000000000238bb
@property(readonly, nonatomic) ISBasePlayerUIView *_playerUIView; // @synthesize _playerUIView=__playerUIView;
@property(nonatomic, getter=isInteracting, setter=_setInteracting:) _Bool interacting; // @synthesize interacting=_interacting;
@property(nonatomic) __weak id <SBFLivePhotoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)videoPlayerForPlayer:(id)arg1;	// IMP=0x00000000000237f8
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000023600
- (void)_handlePlaybackGesture:(id)arg1;	// IMP=0x00000000000235c3
- (void)_subclass_updatePlayerItemForUse:(id)arg1;	// IMP=0x0000000000023546
- (void)_subclass_updateForForcingPlayback:(_Bool)arg1;	// IMP=0x0000000000023540
- (void)_common_configurePlayerView:(id)arg1;	// IMP=0x0000000000023470
- (void)_common_configurePlayer:(id)arg1;	// IMP=0x0000000000023405
@property(readonly, nonatomic) _Bool _isForcingPlayback;
- (void)setContentMode:(long long)arg1;	// IMP=0x000000000002336a
@property(readonly, nonatomic) long long playbackState;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizer;
- (void)stopPlaybackWithReason:(id)arg1;	// IMP=0x0000000000023321
- (void)startPlaybackWithReason:(id)arg1;	// IMP=0x0000000000023286
- (void)prepareWithPhoto:(struct CGImage *)arg1 videoAsset:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;	// IMP=0x0000000000022eeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
