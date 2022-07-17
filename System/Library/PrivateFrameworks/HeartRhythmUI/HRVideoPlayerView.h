//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayerLooper, AVQueuePlayer, NSArray, UIImage, UIImageView;
@protocol NSObject;

@interface HRVideoPlayerView : UIView
{
    _Bool _looping;	// 8 = 0x8
    _Bool _shouldBePlaying;	// 9 = 0x9
    NSArray *_items;	// 16 = 0x10
    UIImage *_thumbnail;	// 24 = 0x18
    UIImageView *_thumbnailImageView;	// 32 = 0x20
    AVQueuePlayer *_queuePlayer;	// 40 = 0x28
    AVPlayerLooper *_playerLooper;	// 48 = 0x30
    id <NSObject> _applicationActiveNotificationStub;	// 56 = 0x38
    id <NSObject> _applicationInactiveNotificationStub;	// 64 = 0x40
}

+ (Class)layerClass;	// IMP=0x000000000003d6f7
+ (id)playerViewWithURL:(id)arg1 looping:(_Bool)arg2;	// IMP=0x000000000003d1aa
- (void).cxx_destruct;	// IMP=0x000000000003e5ef
@property(retain, nonatomic) id <NSObject> applicationInactiveNotificationStub; // @synthesize applicationInactiveNotificationStub=_applicationInactiveNotificationStub;
@property(retain, nonatomic) id <NSObject> applicationActiveNotificationStub; // @synthesize applicationActiveNotificationStub=_applicationActiveNotificationStub;
@property(nonatomic) _Bool shouldBePlaying; // @synthesize shouldBePlaying=_shouldBePlaying;
@property(nonatomic) _Bool looping; // @synthesize looping=_looping;
@property(retain, nonatomic) AVPlayerLooper *playerLooper; // @synthesize playerLooper=_playerLooper;
@property(retain, nonatomic) AVQueuePlayer *queuePlayer; // @synthesize queuePlayer=_queuePlayer;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)_didReceivePlayerNotification:(id)arg1;	// IMP=0x000000000003e056
- (void)_setUpNotifications;	// IMP=0x000000000003dbb7
- (void)_setUpUI;	// IMP=0x000000000003d7ca
- (void)setPlayer:(id)arg1;	// IMP=0x000000000003d758
- (id)player;	// IMP=0x000000000003d708
- (void)pause;	// IMP=0x000000000003d5e7
- (void)play;	// IMP=0x000000000003d4d4
@property(nonatomic) _Bool preventsDisplaySleepDuringVideoPlayback;
- (void)dealloc;	// IMP=0x000000000003d352
- (id)initWithItems:(id)arg1 thumbnail:(id)arg2 looping:(_Bool)arg3;	// IMP=0x000000000003d0bf

@end
