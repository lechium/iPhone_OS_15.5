//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, UIViewController;

@interface PUWelcomeViewControllersManager : NSObject
{
    NSArray *__welcomeViewControllerClasses;	// 8 = 0x8
    NSMutableSet *__remainingWelcomeViewControllerClassesToPresent;	// 16 = 0x10
    UIViewController *__presentingViewController;	// 24 = 0x18
    Class __presentedWelcomeViewControllerClass;	// 32 = 0x20
}

+ (id)defaultManager;	// IMP=0x00000000004915a0
- (void).cxx_destruct;	// IMP=0x00000000004914c4
@property(nonatomic, setter=_setPresentedWelcomeViewControllerClass:) Class _presentedWelcomeViewControllerClass; // @synthesize _presentedWelcomeViewControllerClass=__presentedWelcomeViewControllerClass;
@property(retain, nonatomic, setter=_setPresentingViewController:) UIViewController *_presentingViewController; // @synthesize _presentingViewController=__presentingViewController;
@property(readonly, copy, nonatomic) NSMutableSet *_remainingWelcomeViewControllerClassesToPresent; // @synthesize _remainingWelcomeViewControllerClassesToPresent=__remainingWelcomeViewControllerClassesToPresent;
@property(readonly, copy, nonatomic) NSArray *_welcomeViewControllerClasses; // @synthesize _welcomeViewControllerClasses=__welcomeViewControllerClasses;
- (void)_handleWelcomeViewControllerCompletion;	// IMP=0x0000000000491408
- (void)_update;	// IMP=0x0000000000491132
- (void)_reset;	// IMP=0x00000000004910c2
- (void)resetAllLastPresentationInfos;	// IMP=0x0000000000490f68
- (void)presentWelcomeViewControllersIfNecessaryFromViewController:(id)arg1;	// IMP=0x0000000000490f2d
- (id)_initWithWelcomeViewControllerClasses:(id)arg1;	// IMP=0x0000000000490e86
- (id)init;	// IMP=0x0000000000490e72

@end

