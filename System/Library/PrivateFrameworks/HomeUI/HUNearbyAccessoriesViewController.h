//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUPresentationDelegateHost-Protocol.h>

@class HMAccessory, HUNearbyAccessoriesItemManager, NSArray, NSString, UILabel, _UIContentUnavailableView;
@protocol HUNearbyAccessoriesViewControllerDelegate, HUPresentationDelegate;

@interface HUNearbyAccessoriesViewController <HUPresentationDelegateHost>
{
    _Bool _supportsQuickControls;	// 8 = 0x8
    id <HUNearbyAccessoriesViewControllerDelegate> _nearbyAccessoriesDelegate;	// 16 = 0x10
    id <HUPresentationDelegate> _presentationDelegate;	// 24 = 0x18
    HMAccessory *_currentAccessory;	// 32 = 0x20
    _UIContentUnavailableView *_userInfoHeading;	// 40 = 0x28
    UILabel *_userInfoDescription;	// 48 = 0x30
    NSArray *_userInfoConstraints;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000334c45
@property(nonatomic) _Bool supportsQuickControls; // @synthesize supportsQuickControls=_supportsQuickControls;
@property(retain, nonatomic) NSArray *userInfoConstraints; // @synthesize userInfoConstraints=_userInfoConstraints;
@property(retain, nonatomic) UILabel *userInfoDescription; // @synthesize userInfoDescription=_userInfoDescription;
@property(retain, nonatomic) _UIContentUnavailableView *userInfoHeading; // @synthesize userInfoHeading=_userInfoHeading;
@property(retain, nonatomic) HMAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(nonatomic) __weak id <HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property(nonatomic) __weak id <HUNearbyAccessoriesViewControllerDelegate> nearbyAccessoriesDelegate; // @synthesize nearbyAccessoriesDelegate=_nearbyAccessoriesDelegate;
- (id)layoutOptionsForSection:(long long)arg1;	// IMP=0x00000000003348d3
- (_Bool)presentationCoordinatorShouldProvideCancellationFeedback:(id)arg1;	// IMP=0x00000000003348be
- (_Bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;	// IMP=0x00000000003348ac
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;	// IMP=0x000000000033482e
- (void)configureCell:(id)arg1 forItem:(id)arg2;	// IMP=0x00000000003346f5
- (void)doneButtonPressed:(id)arg1;	// IMP=0x0000000000334643
- (void)updateViewConstraints;	// IMP=0x00000000003342fd
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000334213
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000334119
- (void)_updateUserInfo;	// IMP=0x0000000000333de6
- (void)displayEditor;	// IMP=0x0000000000333bf6
- (void)viewDidLoad;	// IMP=0x0000000000333886
- (id)initWithSourceItem:(id)arg1 supportsQuickControls:(_Bool)arg2;	// IMP=0x00000000003337b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUNearbyAccessoriesItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end

