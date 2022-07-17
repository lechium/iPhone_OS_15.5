//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTUIEnvironment, AVTUIStickerPlaceholderProviderFactory, AVTUIStickerRenderer, NSArray;
@protocol AVTAvatarRecord, AVTTaskScheduler;

@interface AVTStickerSheetModel : NSObject
{
    id <AVTAvatarRecord> _avatarRecord;	// 8 = 0x8
    id <AVTTaskScheduler> _taskScheduler;	// 16 = 0x10
    AVTUIStickerRenderer *_stickerRenderer;	// 24 = 0x18
    AVTUIEnvironment *_environment;	// 32 = 0x20
    AVTUIStickerPlaceholderProviderFactory *_placeholderProviderFactory;	// 40 = 0x28
    NSArray *_stickerItems;	// 48 = 0x30
}

+ (id)sheetModelForAvatarRecord:(id)arg1 withConfigurations:(id)arg2 cache:(id)arg3 taskScheduler:(id)arg4 renderingQueue:(id)arg5 encodingQueue:(id)arg6 stickerGeneratorPool:(id)arg7 imageProvider:(id)arg8 environment:(id)arg9;	// IMP=0x000000000008b09f
- (void).cxx_destruct;	// IMP=0x000000000008b76a
@property(readonly, copy, nonatomic) NSArray *stickerItems; // @synthesize stickerItems=_stickerItems;
@property(readonly, nonatomic) AVTUIStickerPlaceholderProviderFactory *placeholderProviderFactory; // @synthesize placeholderProviderFactory=_placeholderProviderFactory;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) AVTUIStickerRenderer *stickerRenderer; // @synthesize stickerRenderer=_stickerRenderer;
@property(readonly, nonatomic) id <AVTTaskScheduler> taskScheduler; // @synthesize taskScheduler=_taskScheduler;
@property(readonly, nonatomic) id <AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
- (id)initWithAvatarRecord:(id)arg1 stickerItems:(id)arg2 stickerRenderer:(id)arg3 taskScheduler:(id)arg4 placeholderProviderFactory:(id)arg5 environment:(id)arg6;	// IMP=0x000000000008b60b

@end
