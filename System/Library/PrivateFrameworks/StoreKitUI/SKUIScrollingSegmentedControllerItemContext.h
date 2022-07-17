//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollView, UIViewController;
@protocol SKUIScrollingSegmentedControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingSegmentedControllerItemContext : NSObject
{
    struct UIEdgeInsets _appliedContentInsetsAdjustment;	// 8 = 0x8
    struct UIEdgeInsets _desiredContentInsetsAdjustment;	// 40 = 0x28
    UIScrollView *_insetAdjustedContentScrollView;	// 72 = 0x48
    id <SKUIScrollingSegmentedControllerItemContextDelegate> _delegate;	// 80 = 0x50
    UIViewController *_viewController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000032ba61
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak id <SKUIScrollingSegmentedControllerItemContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;	// IMP=0x000000000032b822
- (void)updateAppliedContentInsetsAdjustment;	// IMP=0x000000000032b6e2
- (void)applyNewContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000032b682
- (id)initWithViewController:(id)arg1;	// IMP=0x000000000032b605
- (id)init;	// IMP=0x000000000032b5f1

@end
