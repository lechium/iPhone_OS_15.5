//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUAboutResidentDeviceFooterViewDelegate-Protocol.h>
#import <HomeUI/HUAboutResidentDeviceViewControllerDelegate-Protocol.h>
#import <HomeUI/HUAccessorySettingsItemModuleControllerDelegate-Protocol.h>
#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/UINavigationControllerDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HFPinCodeManager, HFUserItem, HUAboutResidentDeviceFooterView, HUAccessorySettingsItemModuleController, HUEditUserItemManager, HUPendingAccessoriesGridViewController, NSString;

@interface HUEditUserViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate, HUAccessorySettingsItemModuleControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate>
{
    HFPinCodeManager *_pinCodeManager;	// 8 = 0x8
    HFUserItem *_userItem;	// 16 = 0x10
    HUEditUserItemManager *_editUserItemManager;	// 24 = 0x18
    HUPendingAccessoriesGridViewController *_pendingAccessoriesViewController;	// 32 = 0x20
    HUAccessorySettingsItemModuleController *_userSettingsItemModuleController;	// 40 = 0x28
    HUAboutResidentDeviceFooterView *_aboutResidentDeviceFooterView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001c3e0b
@property(retain, nonatomic) HUAboutResidentDeviceFooterView *aboutResidentDeviceFooterView; // @synthesize aboutResidentDeviceFooterView=_aboutResidentDeviceFooterView;
@property(retain, nonatomic) HUAccessorySettingsItemModuleController *userSettingsItemModuleController; // @synthesize userSettingsItemModuleController=_userSettingsItemModuleController;
@property(readonly, nonatomic) HUPendingAccessoriesGridViewController *pendingAccessoriesViewController; // @synthesize pendingAccessoriesViewController=_pendingAccessoriesViewController;
@property(readonly, nonatomic) HUEditUserItemManager *editUserItemManager; // @synthesize editUserItemManager=_editUserItemManager;
@property(readonly, copy, nonatomic) HFUserItem *userItem; // @synthesize userItem=_userItem;
@property(retain, nonatomic) HFPinCodeManager *pinCodeManager; // @synthesize pinCodeManager=_pinCodeManager;
- (void)diffableDataItemManager:(id)arg1 didUpdateItems:(id)arg2 addItems:(id)arg3 removeItems:(id)arg4;	// IMP=0x00000000001c3b8b
- (id)presentPinDetailsViewController;	// IMP=0x00000000001c36e9
- (void)_handleUpdatedItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000001c34a4
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001c340d
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x00000000001c31c8
- (id)_lazyAboutResidentDeviceFooterView;	// IMP=0x00000000001c2e38
- (void)_removeUser;	// IMP=0x00000000001c2529
- (_Bool)moduleController:(id)arg1 shouldDisableItem:(id)arg2;	// IMP=0x00000000001c2362
- (void)moduleController:(id)arg1 settingUpdatedForItem:(id)arg2;	// IMP=0x00000000001c20bb
- (void)moduleController:(id)arg1 preflightCheckToAllowSwitchingForSettingItem:(id)arg2 changingToOn:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c151a
- (id)moduleController:(id)arg1 requestPresentViewController:(id)arg2 animated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001c1451
- (void)moduleController:(id)arg1 presentGroup:(id)arg2;	// IMP=0x00000000001c12e6
- (id)itemModuleControllers;	// IMP=0x00000000001c115c
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;	// IMP=0x00000000001c0ba1
- (void)aboutResidentDeviceViewControllerDidFinish:(id)arg1;	// IMP=0x00000000001c0b88
- (void)learnMoreLinkTapped:(id)arg1;	// IMP=0x00000000001c0adc
- (id)childViewControllersToPreload;	// IMP=0x00000000001c0a51
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001c0a22
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x00000000001c08b6
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x00000000001c06aa
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001bfbfc
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001bfa5f
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000001bf855
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000001bf2a1
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000001bee25
- (id)user;	// IMP=0x00000000001bedd5
- (void)doneButtonTapped:(id)arg1;	// IMP=0x00000000001bedbc
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001bed75
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001becb4
- (void)viewDidLoad;	// IMP=0x00000000001bebae
- (id)initWithItem:(id)arg1 home:(id)arg2;	// IMP=0x00000000001be7bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
