//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AppleMediaServicesUI/UIScrollViewDelegate-Protocol.h>

@class NSObject, NSString, OBPrivacyLinkController, OBWelcomeController, UIImage, UITraitCollection;
@protocol OS_dispatch_queue;

@interface AMSUIOnboardingViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _viewHasAppeared;	// 8 = 0x8
    UIImage *_rightImage;	// 16 = 0x10
    NSString *_titleText;	// 24 = 0x18
    NSString *_descriptionText;	// 32 = 0x20
    NSString *_primaryButtonText;	// 40 = 0x28
    OBPrivacyLinkController *_privacyLinkController;	// 48 = 0x30
    CDUnknownBlockType _primaryButtonCallback;	// 56 = 0x38
    OBWelcomeController *_welcomeController;	// 64 = 0x40
    UIImage *_image;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_metricsQueue;	// 80 = 0x50
}

+ (id)privacyLinkIdentifiersFromController:(id)arg1;	// IMP=0x0000000000042ecf
- (void).cxx_destruct;	// IMP=0x0000000000043202
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) OBWelcomeController *welcomeController; // @synthesize welcomeController=_welcomeController;
@property(copy, nonatomic) CDUnknownBlockType primaryButtonCallback; // @synthesize primaryButtonCallback=_primaryButtonCallback;
@property(retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property(retain, nonatomic) NSString *primaryButtonText; // @synthesize primaryButtonText=_primaryButtonText;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) UIImage *rightImage; // @synthesize rightImage=_rightImage;
@property(readonly, nonatomic) _Bool isPresentedInFormSheet;
- (void)didTapPrimaryButton:(id)arg1;	// IMP=0x0000000000042dae
- (id)keyCommands;	// IMP=0x0000000000042cae
@property(readonly, nonatomic) UIImage *headerImage;
- (void)updateOverrideTraits;	// IMP=0x0000000000042af9
- (id)childTraitCollectionForViewController:(id)arg1;	// IMP=0x00000000000429f8
@property(readonly, nonatomic) UITraitCollection *cappedTraitCollection;
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000042713
- (struct CGSize)preferredContentSize;	// IMP=0x00000000000426b9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000004265e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000425aa
- (void)viewDidLoad;	// IMP=0x00000000000422f5
- (void)commonInitWithPrimaryButtonText:(id)arg1 privacyLinkController:(id)arg2;	// IMP=0x00000000000422c3
- (void)commonSetupWithPrimaryButtonText:(id)arg1 privacyLinkBundleIdentifiers:(id)arg2;	// IMP=0x00000000000420a9
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkBundleIdentifier:(id)arg4;	// IMP=0x000000000004207c
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 features:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;	// IMP=0x0000000000041c9e
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkBundleIdentifier:(id)arg5;	// IMP=0x0000000000041aeb
- (id)initWithTitleText:(id)arg1 features:(id)arg2 primaryButtonText:(id)arg3 privacyLinkController:(id)arg4;	// IMP=0x000000000004174f
- (id)initWithHeaderImage:(id)arg1 titleText:(id)arg2 descriptionText:(id)arg3 primaryButtonText:(id)arg4 privacyLinkController:(id)arg5;	// IMP=0x0000000000041515

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

