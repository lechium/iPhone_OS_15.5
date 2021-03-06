//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardWallpaper/BSDescriptionProviding-Protocol.h>

@class NSString, SBWWallpaperEffectViewBase;

@interface SBWallpaperStyleInfo : NSObject <BSDescriptionProviding>
{
    struct {
        _Bool valid;
        CDStruct_059c2b36 styleTransitionState;
    } _priorityInfo[12];	// 8 = 0x8
    SBWWallpaperEffectViewBase *_wallpaperEffectView;	// 392 = 0x188
    CDStruct_059c2b36 _styleTransitionState;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x0000000000025836
@property(nonatomic) CDStruct_059c2b36 styleTransitionState; // @synthesize styleTransitionState=_styleTransitionState;
@property(retain, nonatomic) SBWWallpaperEffectViewBase *wallpaperEffectView; // @synthesize wallpaperEffectView=_wallpaperEffectView;
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000257bf
- (id)succinctDescription;	// IMP=0x000000000002576f
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000002552d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000254dd
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long highestValidPriority;
- (void)enumerateValidPrioritiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002539f
- (void)removePriorityInfoForPriority:(long long)arg1;	// IMP=0x000000000002534a
- (void)setPriorityInfo:(struct)arg1 forPriority:(long long)arg2;	// IMP=0x00000000000252e5
- (struct)priorityInfoForPriority:(long long)arg1;	// IMP=0x0000000000025281
- (id)init;	// IMP=0x0000000000025238

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

