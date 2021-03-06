//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/SCNSceneRendererDelegate-Protocol.h>

@class AVTAvatar, AVTView, NSString;
@protocol AVTAvatarRecord, AVTUILogger, OS_dispatch_queue;

@interface AVTViewUpdater : NSObject <SCNSceneRendererDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    double _lastUpdateTimestamp;	// 16 = 0x10
    AVTView *_avtView;	// 24 = 0x18
    id <AVTAvatarRecord> _avatarRecord;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
    id <AVTUILogger> _logger;	// 48 = 0x30
    AVTAvatar *_currentAvatar;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001e6d0
@property(retain, nonatomic) AVTAvatar *currentAvatar; // @synthesize currentAvatar=_currentAvatar;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property(readonly, nonatomic) AVTView *avtView; // @synthesize avtView=_avtView;
- (void)addAvatarPresentedOnScreenCallbackWithQueue:(CDUnknownBlockType)arg1 forTimestamp:(double)arg2;	// IMP=0x000000000001e4a3
- (_Bool)willUpdateViewForRecord:(id)arg1 avatar:(id)arg2;	// IMP=0x000000000001e353
- (void)setAvatarRecord:(id)arg1 avatar:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001e121
- (void)setStickerConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e058
- (void)setAvatarRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e041
- (id)initWithAVTView:(id)arg1 callbackQueue:(id)arg2 logger:(id)arg3;	// IMP=0x000000000001df82
- (id)initWithAVTView:(id)arg1 logger:(id)arg2;	// IMP=0x000000000001df3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

