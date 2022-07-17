//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, UNSApplicationLauncher, UNSLocalizationService, UNSNotificationCategoryRepository;
@protocol OS_dispatch_queue;

@interface UNSApplicationService : NSObject
{
    NSMutableSet *_foregroundBundleIdentifiers;	// 8 = 0x8
    UNSApplicationLauncher *_applicationLauncher;	// 16 = 0x10
    UNSNotificationCategoryRepository *_categoryRepository;	// 24 = 0x18
    UNSLocalizationService *_localizationService;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000556c1
- (void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005552c
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x00000000000554d2
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000553c8
- (_Bool)isApplicationForeground:(id)arg1;	// IMP=0x00000000000552c6
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x000000000005520f
- (id)initWithApplicationLauncher:(id)arg1 categoryRepository:(id)arg2 localizationService:(id)arg3;	// IMP=0x0000000000055100

@end
