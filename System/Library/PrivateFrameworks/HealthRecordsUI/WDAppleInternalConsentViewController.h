//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTitledBuddyViewController.h>

@class UIBarButtonItem, UIViewController;

__attribute__((visibility("hidden")))
@interface WDAppleInternalConsentViewController : HKTitledBuddyViewController
{
    UIBarButtonItem *_navigationCancelButton;	// 8 = 0x8
    UIViewController *_actionViewController;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000005e5fa
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) UIViewController *actionViewController; // @synthesize actionViewController=_actionViewController;
- (void)declineButtonTapped:(id)arg1;	// IMP=0x000000000005e598
- (void)acceptButtonTapped:(id)arg1;	// IMP=0x000000000005e523
- (void)cancelButtonTapped:(id)arg1;	// IMP=0x000000000005e50b
- (void)buttonAtIndexTapped:(long long)arg1;	// IMP=0x000000000005e4de
- (id)bottomAnchoredButtons;	// IMP=0x000000000005e455
- (void)updateBodyTextAttributesWithMutableString:(id)arg1;	// IMP=0x000000000005e235
- (long long)bodyTextAlignment;	// IMP=0x000000000005e22a
- (id)bodyString;	// IMP=0x000000000005e219
- (id)titleString;	// IMP=0x000000000005e208
- (_Bool)shouldCustomizeNavigationBar;	// IMP=0x000000000005e200
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000005e1d1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005e118
- (void)viewDidLoad;	// IMP=0x000000000005dffb
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000005dff0
- (id)initWithPresentingViewController:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005df23

@end
