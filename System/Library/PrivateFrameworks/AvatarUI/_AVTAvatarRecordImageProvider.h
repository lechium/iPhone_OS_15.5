//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTAvatarConfigurationImageRenderer, AVTAvatarImageRenderer, AVTUIEnvironment;
@protocol AVTImageCache, AVTTaskScheduler, AVTUILogger, OS_dispatch_queue;

@interface _AVTAvatarRecordImageProvider : NSObject
{
    _Bool _allowPreFlight;	// 8 = 0x8
    id <AVTImageCache> _peristentCache;	// 16 = 0x10
    id <AVTImageCache> _volatileCache;	// 24 = 0x18
    id <AVTUILogger> _logger;	// 32 = 0x20
    AVTUIEnvironment *_environment;	// 40 = 0x28
    AVTAvatarConfigurationImageRenderer *_configurationRenderer;	// 48 = 0x30
    AVTAvatarImageRenderer *_avatarRenderer;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_workQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 72 = 0x48
    id <AVTTaskScheduler> _renderingScheduler;	// 80 = 0x50
}

+ (void)makePersistentImageCache:(out id *)arg1 volatileImageCache:(out id *)arg2 withEnvironment:(id)arg3;	// IMP=0x00000000000a2443
- (void).cxx_destruct;	// IMP=0x00000000000a38b9
@property(readonly, nonatomic) _Bool allowPreFlight; // @synthesize allowPreFlight=_allowPreFlight;
@property(readonly, nonatomic) id <AVTTaskScheduler> renderingScheduler; // @synthesize renderingScheduler=_renderingScheduler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) AVTAvatarImageRenderer *avatarRenderer; // @synthesize avatarRenderer=_avatarRenderer;
@property(readonly, nonatomic) AVTAvatarConfigurationImageRenderer *configurationRenderer; // @synthesize configurationRenderer=_configurationRenderer;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTUILogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <AVTImageCache> volatileCache; // @synthesize volatileCache=_volatileCache;
@property(readonly, nonatomic) id <AVTImageCache> peristentCache; // @synthesize peristentCache=_peristentCache;
- (CDUnknownBlockType)_providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(_Bool)arg4;	// IMP=0x00000000000a3085
- (CDUnknownBlockType)_providerForRecord:(id)arg1 scope:(id)arg2;	// IMP=0x00000000000a2bcd
- (CDUnknownBlockType)providerForAvatar:(id)arg1 forRecord:(id)arg2 scope:(id)arg3 usingCache:(_Bool)arg4;	// IMP=0x00000000000a2bbb
- (CDUnknownBlockType)providerForRecord:(id)arg1 scope:(id)arg2;	// IMP=0x00000000000a2b9b
- (id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 configurationRenderer:(id)arg5 avatarRenderer:(id)arg6 taskScheduler:(id)arg7 allowPreFlight:(_Bool)arg8 environment:(id)arg9;	// IMP=0x00000000000a2a09
- (id)initWithPersistentCache:(id)arg1 volatileCache:(id)arg2 allowPreFlight:(_Bool)arg3 taskScheduler:(id)arg4 environment:(id)arg5;	// IMP=0x00000000000a28e3
- (id)initWithEnvironment:(id)arg1 taskScheduler:(id)arg2;	// IMP=0x00000000000a2817
- (id)initWithEnvironment:(id)arg1;	// IMP=0x00000000000a2739

@end

