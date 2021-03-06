//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <TVMLKit/_TVModalPresenterFocusing-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSString, TVModalPresentationConfiguration, UIAlertController, UIView, UIViewController;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface TVModalPresentationNavigationController : UINavigationController <_TVModalPresenterFocusing>
{
    NSHashTable *_presentedViewControllers;	// 8 = 0x8
    UIViewController *_rootViewController;	// 16 = 0x10
    NSArray *_previousViewControllers;	// 24 = 0x18
    NSMapTable *_pushCompletionBlocks;	// 32 = 0x20
    NSMapTable *_popCompletionBlocks;	// 40 = 0x28
    UIAlertController *_containingAlertController;	// 48 = 0x30
    TVModalPresentationConfiguration *_configuration;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000fc62e
@property(retain, nonatomic) TVModalPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak UIAlertController *containingAlertController; // @synthesize containingAlertController=_containingAlertController;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;	// IMP=0x00000000000fc568
- (void)_dismissForLastViewController:(_Bool)arg1;	// IMP=0x00000000000fc40e
- (id)popViewControllerAnimated:(_Bool)arg1;	// IMP=0x00000000000fc321
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000fc20d
- (id)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000fc14b
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000fc0c0
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000fbe8f
- (void)_updateConfiguration;	// IMP=0x00000000000fbd2a
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000fbac6
@property(readonly, nonatomic) NSHashTable *presentedViewControllers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

