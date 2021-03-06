//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer, UIProgressView;

@interface HUCameraRecordingPlayerView : UIView
{
    AVPlayer *_player;	// 8 = 0x8
    UIProgressView *_progressView;	// 16 = 0x10
}

+ (Class)layerClass;	// IMP=0x000000000033517a
- (void).cxx_destruct;	// IMP=0x0000000000335613
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (id)initWithPlayer:(id)arg1 displayingProgressView:(_Bool)arg2;	// IMP=0x00000000003352c3
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;

@end

