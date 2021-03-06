//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SUOverlayTransition, UIViewController;

@interface SUOverlayAction : NSObject
{
    long long _animationCount;	// 8 = 0x8
    UIViewController *_otherViewController;	// 16 = 0x10
    SUOverlayTransition *_transition;	// 24 = 0x18
    int _type;	// 32 = 0x20
    UIViewController *_viewController;	// 40 = 0x28
}

@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) SUOverlayTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) UIViewController *otherViewController; // @synthesize otherViewController=_otherViewController;
@property(nonatomic) long long animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) int actionType; // @synthesize actionType=_type;
- (void)dealloc;	// IMP=0x000000000009adb3

@end

