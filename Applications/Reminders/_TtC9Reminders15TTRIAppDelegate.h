//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class MISSING_TYPE;

@interface _TtC9Reminders15TTRIAppDelegate : UIResponder
{
    MISSING_TYPE *store;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_siriVocabularyUpdater;	// 16 = 0x10
    MISSING_TYPE *$__lazy_storage_$_attachmentThumbnailsManager;	// 24 = 0x18
    MISSING_TYPE *$__lazy_storage_$_geoService;	// 32 = 0x20
    MISSING_TYPE *applicationRunProperties;	// 40 = 0x28
    MISSING_TYPE *widgetRefresher;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_applicationVisibilityChangeHandler;	// 56 = 0x38
    MISSING_TYPE *backgroundTaskIdentifierForApplicationVisibilityChangeHandler;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_hashtagAssociation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00400000001ecbc0
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x00100000001ec2a0
- (void)application:(id)arg1 userDidAcceptCloudKitShareWithMetadata:(id)arg2;	// IMP=0x00100000001ec060
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ebfd0
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;	// IMP=0x00100000001ebfb0
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;	// IMP=0x00100000001ebf20
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ebf00
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000001ebe40
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x00100000001ebd70
- (id)init;	// IMP=0x00100000001ebd50

@end

