//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBTableWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>
#import <HomeUI/UITableViewDataSource-Protocol.h>
#import <HomeUI/UITableViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUHomeAssistantDevicesUnsupportedLanguageViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource, HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;	// 8 = 0x8
    NSArray *_homeAssistantDevicesHavingLanguageMismatch;	// 16 = 0x10
    NSLayoutConstraint *_heightAnchor;	// 24 = 0x18
    OBTrayButton *_continueButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e0f83
@property(retain, nonatomic) OBTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) NSLayoutConstraint *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(retain, nonatomic) NSArray *homeAssistantDevicesHavingLanguageMismatch; // @synthesize homeAssistantDevicesHavingLanguageMismatch=_homeAssistantDevicesHavingLanguageMismatch;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000e0db3
- (void)viewDidLoad;	// IMP=0x00000000000e0b70
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e08c4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000e087f
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000e086e
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000e0747
- (void)loadView;	// IMP=0x00000000000e04a4
- (id)hu_preloadContent;	// IMP=0x00000000000e048b
- (void)_continue;	// IMP=0x00000000000e0317
- (id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)arg1 home:(id)arg2;	// IMP=0x00000000000e0038

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end
