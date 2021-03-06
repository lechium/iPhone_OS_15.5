//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@class AFSettingsConnection;

@interface AFUICloudStorageViewController : PSListController
{
    AFSettingsConnection *_settings;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000000a583
- (void)_disableAndDeleteCloudSync;	// IMP=0x000000000000a511
- (void)confirmDisable;	// IMP=0x000000000000a33f
- (void)confirmDisableForMultiUserVoiceIdentification;	// IMP=0x000000000000a1bf
- (void)handleDisableAndDeleteButtonPress;	// IMP=0x000000000000a048
- (id)specifiers;	// IMP=0x0000000000009d4a
- (void)didReceiveMemoryWarning;	// IMP=0x0000000000009d1b
- (void)viewDidLoad;	// IMP=0x0000000000009cc9

@end

