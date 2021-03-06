//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TIImageCacheClient, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject
{
    TIImageCacheClient *_store;	// 8 = 0x8
    NSSet *_layouts;	// 16 = 0x10
    NSMutableSet *_activeRenderers;	// 24 = 0x18
    _UIActionWhenIdle *_idleAction;	// 32 = 0x20
}

+ (_Bool)enabled;	// IMP=0x00000000009a68f2
+ (id)sharedInstance;	// IMP=0x00000000009a68cd
@property(retain, nonatomic) _UIActionWhenIdle *idleAction; // @synthesize idleAction=_idleAction;
- (void)decrementExpectedRender:(id)arg1;	// IMP=0x00000000009a8b5e
- (void)incrementExpectedRender:(id)arg1;	// IMP=0x00000000009a8af1
- (void)updateCacheForInputModes:(id)arg1;	// IMP=0x00000000009a89a6
- (id)uniqueLayoutsFromInputModes:(id)arg1;	// IMP=0x00000000009a8848
- (void)_didIdleAndShouldWait;	// IMP=0x00000000009a87d3
- (void)_didIdle;	// IMP=0x00000000009a87a2
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;	// IMP=0x00000000009a7421
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000009a7306
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;	// IMP=0x00000000009a6cf6
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;	// IMP=0x00000000009a6c61
- (void)purge;	// IMP=0x00000000009a6c4b
- (void)clearNonPersistentCache;	// IMP=0x00000000009a6c32
- (void)commitTransaction;	// IMP=0x00000000009a6c19
- (void)dealloc;	// IMP=0x00000000009a6b8e
- (id)init;	// IMP=0x00000000009a6991

@end

