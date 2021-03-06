//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class AVPlayer, SBFLivePhotoPlayerView;

@protocol SBFLivePhotoPlayerViewDelegate <NSObject>

@optional
- (AVPlayer *)videoPlayerForPlayerView:(SBFLivePhotoPlayerView *)arg1;
- (void)playerViewIsInteractingDidChange:(SBFLivePhotoPlayerView *)arg1;
- (void)playerViewPlaybackStateDidChange:(SBFLivePhotoPlayerView *)arg1;
@end

