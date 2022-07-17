//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/HUAccessorySettingsDetailsViewControllerProtocol-Protocol.h>
#import <HomeUI/HUHomeKitAccessorySettingDetailsViewControllerProtocol-Protocol.h>

@class HUAccessorySettingsSiriRecognitionLanguageItemManager, NAFuture, NSString;

@interface HUAccessorySettingsSiriRecognitionLanguageViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUHomeKitAccessorySettingDetailsViewControllerProtocol>
{
    NAFuture *_changeLanguageFuture;	// 8 = 0x8
    long long _selectedLanguageIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000131025
@property(nonatomic) long long selectedLanguageIndex; // @synthesize selectedLanguageIndex=_selectedLanguageIndex;
@property(retain, nonatomic) NAFuture *changeLanguageFuture; // @synthesize changeLanguageFuture=_changeLanguageFuture;
- (id)_siriLanguageOptionForMediaProfile:(id)arg1;	// IMP=0x0000000000130e75
- (id)_allMediaAccessories;	// IMP=0x0000000000130d16
- (void)_turnOffVoiceIDAndChangeSiriLanguageForAllMediaAccessories:(id)arg1;	// IMP=0x000000000012fbdf
- (void)_clearSpinner;	// IMP=0x000000000012fbc3
- (_Bool)_isAnyMediaAccessoryOnSupportedVoiceRecognitionLanguage;	// IMP=0x000000000012f821
- (void)_changeSiriLanguageOnlyForThisMediaAccessory:(id)arg1 turnOffVoiceID:(_Bool)arg2;	// IMP=0x000000000012f530
- (void)_turnOffVoiceIDForTargetLanguageOption:(id)arg1;	// IMP=0x000000000012f135
- (void)_attemptToFixVoiceRecognitionOnboardingFailures:(id)arg1;	// IMP=0x000000000012ed16
- (void)_presentAlertConfirmingLanguageChangeForThisORAllMediaAccessories:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000012e677
- (void)_presentAlertConfirmingLanguageChangeForAllHomeMembers:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000012e373
- (void)_presentAlertConfirmingLanguageChangeAndTurnOffVoiceRecognition:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000012de80
- (_Bool)_shouldPresentAlertRequestingToTurnOffVoiceRecognition:(id)arg1;	// IMP=0x000000000012dbb0
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000012d5f9
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000012d3da
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x000000000012d3c9
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;	// IMP=0x000000000012d2d1
- (id)initWithAccessoryGroupItem:(id)arg1;	// IMP=0x000000000012d22a
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;	// IMP=0x000000000012d175

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUAccessorySettingsSiriRecognitionLanguageItemManager *itemManager; // @dynamic itemManager;
@property(readonly) Class superclass;

@end
