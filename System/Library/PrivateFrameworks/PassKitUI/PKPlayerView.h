//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayerLooper, AVPlayerViewController, AVQueuePlayer;

@interface PKPlayerView : UIView
{
    AVQueuePlayer *_player;	// 8 = 0x8
    AVPlayerViewController *_controller;	// 16 = 0x10
    AVPlayerLooper *_playerLooper;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001bf133
- (void)playItemAtURL:(id)arg1;	// IMP=0x00000000001bf09b
- (void)layoutSubviews;	// IMP=0x00000000001beff9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001beeb0

@end
