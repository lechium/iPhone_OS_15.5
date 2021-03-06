//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class NSString;

@interface EMInternalPreferences : NSObject <EFLoggable>
{
}

+ (_Bool)_hasUserDefaultValueForKey:(id)arg1 expectedValue:(id)arg2;	// IMP=0x0000000000028648
+ (void)_setUserDefaultEnabled:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x00000000000285b8
+ (_Bool)_userDefaultEnabledForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x00000000000284dc
+ (id)defaultForPreference:(unsigned long long)arg1;	// IMP=0x00000000000282ed
+ (void)setPreference:(unsigned long long)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000028282
+ (_Bool)_preferenceEnabled:(unsigned long long)arg1;	// IMP=0x00000000000281b8
+ (id)observeChangesForPreference:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027fa3
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000027ed0
+ (void)_registerForDefaultChanges;	// IMP=0x0000000000027dd1
+ (_Bool)preferenceEnabled:(unsigned long long)arg1;	// IMP=0x0000000000027c95
+ (id)log;	// IMP=0x0000000000027bb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

