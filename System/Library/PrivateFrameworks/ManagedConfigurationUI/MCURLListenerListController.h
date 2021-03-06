//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSListController.h>

@interface MCURLListenerListController : PSListController
{
}

+ (void)setShowingProfileInstallation:(_Bool)arg1;	// IMP=0x0000000000019abe
+ (_Bool)showingProfileInstallation;	// IMP=0x0000000000019ab2
+ (void)setOriginalURLSender:(id)arg1;	// IMP=0x0000000000019a89
+ (void)setCurrentInstallationController:(id)arg1;	// IMP=0x0000000000019a75
+ (id)originalURLSender;	// IMP=0x0000000000019a64
+ (id)currentInstallationController;	// IMP=0x0000000000019a53
- (void)handleURL:(id)arg1;	// IMP=0x000000000001a2f1
- (void)_pushProfileDetailsForProfileWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019ef2
- (void)_presentNextController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019dbe
- (void)_showSheetToInstallConfigurationProfileWithData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019c16
- (void)_showSheetToInstallConfigurationProfileFromInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019b81
- (void)_showSheetToInstallConfigurationProfileFromPurgatoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019ae7

@end

