//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ISLiveWallpaperPlayer, NSTimer, UIGestureRecognizer;

@interface ISLiveWallpaperUIView
{
    _Bool _touching;	// 8 = 0x8
    UIGestureRecognizer *_playbackGestureRecognizer;	// 16 = 0x10
    double _force;	// 24 = 0x18
    NSTimer *_updateTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000014e9e
@property(retain, nonatomic) NSTimer *updateTimer; // @synthesize updateTimer=_updateTimer;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) _Bool touching; // @synthesize touching=_touching;
@property(readonly, nonatomic) UIGestureRecognizer *playbackGestureRecognizer; // @synthesize playbackGestureRecognizer=_playbackGestureRecognizer;
- (void)dealloc;	// IMP=0x0000000000014dfd
- (void)_updatePlayer;	// IMP=0x0000000000014d33
- (void)_handlePlaybackRecognizer:(id)arg1;	// IMP=0x0000000000014cf6
- (void)_handleUpdateTimer;	// IMP=0x0000000000014c7f
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000014ad2
- (void)_ISLiveWallpaperUIViewCommonInitialization;	// IMP=0x00000000000149b3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000014956
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001490a

// Remaining properties
@property(retain, nonatomic) ISLiveWallpaperPlayer *player; // @dynamic player;

@end
