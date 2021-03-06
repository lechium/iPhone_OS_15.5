//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class HMHome, NSString, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUUpgradeMultiUserDevicesViewController <HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    OBTrayButton *_continueButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000473d1f
@property(retain, nonatomic) OBTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewDidLoad;	// IMP=0x0000000000473a65
- (id)hu_preloadContent;	// IMP=0x0000000000473a4c
- (void)_continueButtonTapped:(id)arg1;	// IMP=0x0000000000473900
- (id)initWithUpgradeRequirements:(unsigned long long)arg1 home:(id)arg2;	// IMP=0x0000000000473778

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end

