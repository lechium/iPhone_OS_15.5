//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBIconObserver-Protocol.h>

@class CPMemoryPool, NSHashTable, NSMutableDictionary, NSString, UIImage;

@interface SBHIconImageCache : NSObject <SBIconObserver, BSDescriptionProviding>
{
    NSMutableDictionary *_images;	// 8 = 0x8
    NSMutableDictionary *_unmaskedImages;	// 16 = 0x10
    NSHashTable *_failedIcons;	// 24 = 0x18
    UIImage *_genericImage;	// 32 = 0x20
    UIImage *_overlayImage;	// 40 = 0x28
    UIImage *_unmaskedOverlayImage;	// 48 = 0x30
    NSHashTable *_observedIcons;	// 56 = 0x38
    NSHashTable *_observers;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    unsigned long long _poolingBypassCount;	// 80 = 0x50
    CPMemoryPool *_iconImagesMemoryPool;	// 88 = 0x58
    struct SBIconImageInfo _iconImageInfo;	// 96 = 0x60
}

+ (id)unmaskedOverlayImageWithInfo:(struct SBIconImageInfo)arg1;	// IMP=0x00000000001bee63
+ (id)overlayImageWithInfo:(struct SBIconImageInfo)arg1;	// IMP=0x00000000001beb08
+ (id)genericImageWithInfo:(struct SBIconImageInfo)arg1;	// IMP=0x00000000001be740
+ (_Bool)supportsMemoryPooling;	// IMP=0x00000000001bce32
+ (id)_backgroundQueue;	// IMP=0x00000000001bcd5a
- (void).cxx_destruct;	// IMP=0x00000000001bfb2c
@property(readonly, nonatomic) CPMemoryPool *iconImagesMemoryPool; // @synthesize iconImagesMemoryPool=_iconImagesMemoryPool;
@property(nonatomic) unsigned long long poolingBypassCount; // @synthesize poolingBypassCount=_poolingBypassCount;
@property(readonly, nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000001bf983
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000001bf933
- (id)succinctDescriptionBuilder;	// IMP=0x00000000001bf917
- (id)succinctDescription;	// IMP=0x00000000001bf8c7
@property(readonly, copy) NSString *description;
- (void)iconImageDidUpdate:(id)arg1;	// IMP=0x00000000001bf717
- (void)endObservingAllIcons;	// IMP=0x00000000001bf5d8
- (void)endObservingIcon:(id)arg1;	// IMP=0x00000000001bf576
- (void)beginObservingIconIfNecessary:(id)arg1;	// IMP=0x00000000001bf4d2
- (id)memoryMappedIconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 withDrawing:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bf424
- (id)memoryMappedIconImageForIconImage:(id)arg1;	// IMP=0x00000000001bf410
- (id)pooledIconImageForMappedIconImage:(id)arg1;	// IMP=0x00000000001bf3f9
- (id)_pooledIconImageForIconImage:(id)arg1 allowingOptOut:(_Bool)arg2;	// IMP=0x00000000001bf2c8
- (id)_iconImageOfSize:(struct CGSize)arg1 scale:(double)arg2 failGracefully:(_Bool)arg3 drawing:(CDUnknownBlockType)arg4;	// IMP=0x00000000001bf126
- (_Bool)_canPoolImage;	// IMP=0x00000000001bf0d6
- (id)_cacheKeyForIcon:(id)arg1;	// IMP=0x00000000001bf0c1
@property(readonly, nonatomic) unsigned long long numberOfUnmaskedCacheMisses;
@property(readonly, nonatomic) unsigned long long numberOfUnmaskedCacheHits;
@property(readonly, nonatomic) unsigned long long numberOfUnmaskedCachedImages;
@property(readonly, nonatomic) unsigned long long numberOfCacheMisses;
@property(readonly, nonatomic) unsigned long long numberOfCacheHits;
@property(readonly, nonatomic) unsigned long long numberOfCachedImages;
@property(readonly, nonatomic) UIImage *unmaskedOverlayImage;
@property(readonly, nonatomic) UIImage *overlayImage;
@property(readonly, nonatomic) UIImage *genericImage;
- (void)notifyObserversOfUpdateForIcon:(id)arg1;	// IMP=0x00000000001be59d
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001be587
- (void)addObserver:(id)arg1;	// IMP=0x00000000001be51d
- (void)purgeAllCachedImages;	// IMP=0x00000000001be49c
- (void)purgeCachedImagesForIcons:(id)arg1;	// IMP=0x00000000001be23e
- (void)cacheUnmaskedImagesForIcons:(id)arg1;	// IMP=0x00000000001be10c
- (void)cacheImagesForIcons:(id)arg1;	// IMP=0x00000000001bdfda
- (void)cacheImagesForIcons:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bdd9f
- (void)cacheImageForIcon:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bd72e
- (id)cachedUnmaskedImageForIcon:(id)arg1;	// IMP=0x00000000001bd6ce
- (id)unmaskedImageForIcon:(id)arg1;	// IMP=0x00000000001bd53f
- (void)cacheImage:(id)arg1 forIcon:(id)arg2;	// IMP=0x00000000001bd48c
- (id)cachedImageForIcon:(id)arg1;	// IMP=0x00000000001bd42c
- (id)realImageForIcon:(id)arg1;	// IMP=0x00000000001bd0ec
- (id)imageForIcon:(id)arg1;	// IMP=0x00000000001bcfe1
- (id)initWithName:(id)arg1 iconImageInfo:(struct SBIconImageInfo)arg2;	// IMP=0x00000000001bce3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

