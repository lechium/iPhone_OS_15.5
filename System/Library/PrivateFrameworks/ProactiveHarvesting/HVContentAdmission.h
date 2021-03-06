//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HVContentAdmissionKVOObserver, NSUserDefaults, _PASLock;

@interface HVContentAdmission : NSObject
{
    _PASLock *_lock;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
    HVContentAdmissionKVOObserver *_kvoObserver;	// 24 = 0x18
    HVContentAdmissionKVOObserver *_pastEventsObserver;	// 32 = 0x20
}

+ (void)migrateForTests;	// IMP=0x000000000000a1fd
+ (void)clearTestSettings;	// IMP=0x000000000000a187
+ (_Bool)suggestionsShouldShowPastEvents;	// IMP=0x000000000000a0ac
+ (_Bool)isSupportedSearchableItemBundleIdentifier:(id)arg1;	// IMP=0x000000000000a0a4
+ (_Bool)shouldAdmitContentFromBundleIdentifier:(id)arg1;	// IMP=0x0000000000009e5a
+ (void)disableBundleIdentifier:(id)arg1;	// IMP=0x0000000000009e00
+ (void)updateConfigurableBundleIdentifierDenyList:(id)arg1;	// IMP=0x0000000000009da4
+ (void)registerConfigurationAsset:(id)arg1;	// IMP=0x0000000000009bc1
+ (void)addContentAdmissionObserver:(id)arg1;	// IMP=0x0000000000009afa
+ (void)initialize;	// IMP=0x0000000000009ab2
- (void).cxx_destruct;	// IMP=0x0000000000008623
- (id)init;	// IMP=0x00000000000082a5

@end

