//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC5TeaUI12Bootstrapper : NSObject
{
    MISSING_TYPE *mainViewControllerFactory;	// 8 = 0x8
    MISSING_TYPE *onboardingViewControllerFactory;	// 48 = 0x30
    MISSING_TYPE *onboardingViewDismissalAnimator;	// 88 = 0x58
    MISSING_TYPE *deferredPromise;	// 0 = 0x0
    MISSING_TYPE *deferringGroup;	// 0 = 0x0
    MISSING_TYPE *shouldCollapseSidebar;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000001b23d0
- (id)init;	// IMP=0x00000000001b2370
- (void)afterBootstrapOnQueue:(id)arg1 runBootstrapCallbackBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b21b0
- (void)startBootstrappingWithWindow:(id)arg1 shouldOnboard:(_Bool)arg2 shouldCollapseSidebar:(_Bool)arg3;	// IMP=0x00000000001b1b20
- (void)startBootstrappingWithWindow:(id)arg1 shouldOnboard:(_Bool)arg2;	// IMP=0x00000000001b1ab0

@end
