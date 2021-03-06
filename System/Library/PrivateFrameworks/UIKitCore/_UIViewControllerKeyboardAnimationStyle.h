//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIViewControllerKeyboardAnimationStyleInfo, _UIViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface _UIViewControllerKeyboardAnimationStyle
{
    _Bool _disableAlongsideView;	// 33 = 0x21
    _Bool _allowCustomTransition;	// 34 = 0x22
    _UIViewControllerTransitionContext *_context;	// 40 = 0x28
    _UIViewControllerKeyboardAnimationStyleInfo *_info;	// 48 = 0x30
}

+ (id)animationStyleWithContext:(id)arg1 useCustomTransition:(_Bool)arg2;	// IMP=0x000000000055bc57
@property(nonatomic) _Bool allowCustomTransition; // @synthesize allowCustomTransition=_allowCustomTransition;
@property(readonly, nonatomic) _UIViewControllerKeyboardAnimationStyleInfo *info; // @synthesize info=_info;
@property(nonatomic) _Bool disableAlongsideView; // @synthesize disableAlongsideView=_disableAlongsideView;
@property(retain, nonatomic) _UIViewControllerTransitionContext *context; // @synthesize context=_context;
- (id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2;	// IMP=0x000000000055c46a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000055c3ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000055c36f
- (_Bool)canDismissWithScrollView;	// IMP=0x000000000055c367
- (void)_launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;	// IMP=0x000000000055c033
- (void)launchAnimation:(CDUnknownBlockType)arg1 afterStarted:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3 forHost:(id)arg4 fromCurrentPosition:(_Bool)arg5;	// IMP=0x000000000055be6c
- (void)dealloc;	// IMP=0x000000000055be14
- (id)initWithContext:(id)arg1;	// IMP=0x000000000055bab5
- (_Bool)isAnimationCompleted;	// IMP=0x000000000055ba8a

@end

