//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIViewController;

@interface MRUEmbeddingView : UIView
{
    _Bool _active;	// 8 = 0x8
    UIViewController *_embeddedViewController;	// 16 = 0x10
    UIViewController *_parent;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002ad11
@property(nonatomic) __weak UIViewController *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) UIViewController *embeddedViewController; // @synthesize embeddedViewController=_embeddedViewController;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002ac36
- (void)showViewController;	// IMP=0x000000000002aabb
- (void)hideViewController;	// IMP=0x000000000002a9fd
- (void)removeViewController;	// IMP=0x000000000002a8f1
- (void)embedViewController:(id)arg1 parent:(id)arg2;	// IMP=0x000000000002a843
- (void)layoutSubviews;	// IMP=0x000000000002a7a5

@end
