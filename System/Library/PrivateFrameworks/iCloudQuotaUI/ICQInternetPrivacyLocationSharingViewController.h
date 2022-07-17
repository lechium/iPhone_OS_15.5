//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

#import <iCloudQuotaUI/AAUISpecifierProviderDelegate-Protocol.h>

@class ICQInternetPrivacyLocationSharingSpecifierProvider, ICQInternetPrivacyViewModel, NSString;

@interface ICQInternetPrivacyLocationSharingViewController : PSListController <AAUISpecifierProviderDelegate>
{
    ICQInternetPrivacyViewModel *_viewModel;	// 192 = 0xc0
    ICQInternetPrivacyLocationSharingSpecifierProvider *_specifierProvider;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000005daaa
@property(retain, nonatomic) ICQInternetPrivacyLocationSharingSpecifierProvider *specifierProvider; // @synthesize specifierProvider=_specifierProvider;
@property(retain, nonatomic) ICQInternetPrivacyViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)specifierProvider:(id)arg1 willBeginLoadingSpecifier:(id)arg2;	// IMP=0x000000000005da5a
- (void)specifierProvider:(id)arg1 showViewController:(id)arg2;	// IMP=0x000000000005da54
- (void)specifierProvider:(id)arg1 didFinishLoadingSpecifier:(id)arg2;	// IMP=0x000000000005da4e
- (void)reloadSpecifiersForProvider:(id)arg1 oldSpecifiers:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000005d97b
- (id)specifiers;	// IMP=0x000000000005d800
- (void)_setupNavigationBar;	// IMP=0x000000000005d788
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000005d747
- (id)init;	// IMP=0x000000000005d6d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
