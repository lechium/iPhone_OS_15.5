//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCompactNavigationContainerController;

@interface PKCompactNavigationContainedNavigationWrapperViewController
{
    PKCompactNavigationContainerController *_parentViewController;	// 8 = 0x8
    _Bool _useParentSafeAreaInsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000032ef82
@property(nonatomic) _Bool useParentSafeAreaInsets; // @synthesize useParentSafeAreaInsets=_useParentSafeAreaInsets;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x000000000032edcb
- (id)initWithWrappedViewController:(id)arg1 parentViewController:(id)arg2;	// IMP=0x000000000032ed55
- (id)initWithWrappedViewController:(id)arg1 type:(long long)arg2;	// IMP=0x000000000032ed47

@end
