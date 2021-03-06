//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class MPMoviePlayerController, NSString, UIImage, UIImageView;
@protocol SKUIEmbeddedMediaViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIEmbeddedMediaView : UIControl
{
    id <SKUIEmbeddedMediaViewDelegate> _delegate;	// 8 = 0x8
    long long _mediaType;	// 16 = 0x10
    NSString *_mediaURLString;	// 24 = 0x18
    MPMoviePlayerController *_moviePlayer;	// 32 = 0x20
    UIImageView *_playerDecorationView;	// 40 = 0x28
    UIImageView *_thumbnailReflectionView;	// 48 = 0x30
    UIImageView *_thumbnailView;	// 56 = 0x38
    _Bool _usingInlinePlayback;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003025cb
@property(copy, nonatomic) NSString *mediaURLString; // @synthesize mediaURLString=_mediaURLString;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) __weak id <SKUIEmbeddedMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_thumbnailView;	// IMP=0x00000000003024b9
- (void)_tearDownMoviePlayer;	// IMP=0x00000000003023a8
- (struct CGSize)_sizeToFitImageSize:(struct CGSize)arg1 bounds:(struct CGRect)arg2;	// IMP=0x0000000000302324
- (void)_sendPlaybackStateChanged;	// IMP=0x00000000003022b4
- (id)_newMoviePlayerControllerWithURL:(id)arg1;	// IMP=0x0000000000302193
- (void)_playbackStateChanged:(id)arg1;	// IMP=0x0000000000302181
- (void)_didFinishPlayback:(id)arg1;	// IMP=0x0000000000302118
- (void)_didExitFullscreen:(id)arg1;	// IMP=0x00000000003020d8
- (void)didMoveToWindow;	// IMP=0x000000000030208d
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000030200b
- (void)layoutSubviews;	// IMP=0x0000000000301ad3
@property(retain, nonatomic) UIImage *thumbnailImage;
@property(nonatomic) long long thumbnailContentMode;
@property(nonatomic) _Bool showsThumbnailReflection;
@property(readonly, nonatomic) long long playbackState;
- (void)endPlaybackAnimated:(_Bool)arg1;	// IMP=0x00000000003014ab
- (void)beginPlaybackAnimated:(_Bool)arg1;	// IMP=0x000000000030135f
- (void)beginInlinePlaybackWithURL:(id)arg1;	// IMP=0x0000000000301278
- (void)dealloc;	// IMP=0x0000000000301196

@end

