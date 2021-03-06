//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIPresentationController, UIView, UIViewController;
@protocol _UIClickPresentationTransition;

@interface _UIClickPresentation : NSObject
{
    UIViewController *_viewController;	// 8 = 0x8
    UIPresentationController *_presentationController;	// 16 = 0x10
    UIView *_customContainerView;	// 24 = 0x18
    UIView *_customViewForTouchContinuation;	// 32 = 0x20
    id <_UIClickPresentationTransition> _appearanceTransition;	// 40 = 0x28
    id <_UIClickPresentationTransition> _disappearanceTransition;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000025cf49
@property(retain, nonatomic) id <_UIClickPresentationTransition> disappearanceTransition; // @synthesize disappearanceTransition=_disappearanceTransition;
@property(retain, nonatomic) id <_UIClickPresentationTransition> appearanceTransition; // @synthesize appearanceTransition=_appearanceTransition;
@property(retain, nonatomic) UIView *customViewForTouchContinuation; // @synthesize customViewForTouchContinuation=_customViewForTouchContinuation;
@property(retain, nonatomic) UIView *customContainerView; // @synthesize customContainerView=_customContainerView;
@property(readonly, nonatomic) UIPresentationController *presentationController; // @synthesize presentationController=_presentationController;
@property(readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (id)initWithPresentedViewController:(id)arg1 presentationController:(id)arg2;	// IMP=0x000000000025ce30
- (_Bool)_presentsSelf;	// IMP=0x0000000000cb91de

@end

