//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInputViewAnimationController-Protocol.h>

@class NSString, UIInputViewSetPlacement;
@protocol UIViewControllerAnimatedTransitioning_Keyboard, UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationControllerViewController : NSObject <UIInputViewAnimationController>
{
    id <UIViewControllerContextTransitioning> _context;	// 8 = 0x8
    id <UIViewControllerAnimatedTransitioning_Keyboard> _animator;	// 16 = 0x10
    UIInputViewSetPlacement *_endPlacement;	// 24 = 0x18
}

+ (id)controllerWithContext:(id)arg1;	// IMP=0x000000000055c66b
- (void)completeAnimationWithHost:(id)arg1 context:(id)arg2;	// IMP=0x000000000055c748
- (void)performAnimationWithHost:(id)arg1 context:(id)arg2;	// IMP=0x000000000055c6fe
- (id)prepareAnimationWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;	// IMP=0x000000000055c69a
- (void)dealloc;	// IMP=0x000000000055c61a
- (id)initWithContext:(id)arg1;	// IMP=0x000000000055c5a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

