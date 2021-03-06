//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUConfigurationViewController-Protocol.h>

@class HMHome, NSString, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUAccessoryFirmwareUpdateSetupViewController <HUConfigurationViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    OBTrayButton *_enableAutomaticUpdatesButton;	// 24 = 0x18
    OBLinkTrayButton *_notNowButton;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f0782
@property(retain, nonatomic) OBLinkTrayButton *notNowButton; // @synthesize notNowButton=_notNowButton;
@property(retain, nonatomic) OBTrayButton *enableAutomaticUpdatesButton; // @synthesize enableAutomaticUpdatesButton=_enableAutomaticUpdatesButton;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_doNotEnableAutomaticUpdates:(id)arg1;	// IMP=0x00000000000f059a
- (void)_enableAutomaticUpdates:(id)arg1;	// IMP=0x00000000000f0163
- (void)viewDidLoad;	// IMP=0x00000000000efebb
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;	// IMP=0x00000000000efe06
- (id)initWithHome:(id)arg1;	// IMP=0x00000000000efcb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end

