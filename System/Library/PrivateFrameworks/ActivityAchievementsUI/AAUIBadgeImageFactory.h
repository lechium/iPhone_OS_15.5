//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAUIAchievementResourceProvider, AAUIBadgeView, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AAUIBadgeImageFactory : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    AAUIAchievementResourceProvider *_resourceProvider;	// 16 = 0x10
    AAUIBadgeView *_earnedBadgeView;	// 24 = 0x18
    AAUIBadgeView *_unearnedBadgeView;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_imageCreationQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000579c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *imageCreationQueue; // @synthesize imageCreationQueue=_imageCreationQueue;
@property(retain, nonatomic) AAUIBadgeView *unearnedBadgeView; // @synthesize unearnedBadgeView=_unearnedBadgeView;
@property(retain, nonatomic) AAUIBadgeView *earnedBadgeView; // @synthesize earnedBadgeView=_earnedBadgeView;
@property(retain, nonatomic) AAUIAchievementResourceProvider *resourceProvider; // @synthesize resourceProvider=_resourceProvider;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (id)generateImageForConfiguration:(id)arg1 size:(struct CGSize)arg2 unearned:(_Bool)arg3;	// IMP=0x000000000000536f
- (void)clearAllCachedImages;	// IMP=0x0000000000005332
- (_Bool)hasCachedThumbnailImageForAchievement:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000052ab
- (id)thumbnailImageForAchievement:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000004e0f
- (id)init;	// IMP=0x0000000000004d12

@end

