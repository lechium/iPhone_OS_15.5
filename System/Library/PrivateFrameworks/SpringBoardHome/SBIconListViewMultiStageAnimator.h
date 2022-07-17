//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBIconListLayoutAnimating-Protocol.h>

@class NSString;

@interface SBIconListViewMultiStageAnimator : NSObject <SBIconListLayoutAnimating>
{
    struct CGPoint _iconInitialCenter;	// 8 = 0x8
}

- (void)iconListView:(id)arg1 wantsAnimatedRemovalForIconViews:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ab761
- (void)iconListView:(id)arg1 wantsAnimatedLayoutForIconView:(id)arg2 withParameters:(struct SBIconListLayoutAnimationParameters)arg3 alongsideAnimationBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ab29b
- (id)init;	// IMP=0x00000000000ab25c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
