//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;

@interface MLFeatureFlags : NSObject
{
    NSUserDefaults *_userDefaults;	// 8 = 0x8
    NSMutableDictionary *_flags;	// 16 = 0x10
    NSMutableDictionary *_overrideOriginalValues;	// 24 = 0x18
}

+ (id)sharedFeatureFlags;	// IMP=0x000000000012965f
- (void).cxx_destruct;	// IMP=0x000000000012962c
@property(readonly, nonatomic) NSMutableDictionary *overrideOriginalValues; // @synthesize overrideOriginalValues=_overrideOriginalValues;
@property(readonly, nonatomic) NSMutableDictionary *flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (_Bool)removeOverrideForFeature:(id)arg1;	// IMP=0x0000000000129522
- (_Bool)setOverride:(_Bool)arg1 forFeature:(id)arg2;	// IMP=0x000000000012937d
- (id)controlKeyForFeature:(id)arg1;	// IMP=0x00000000001292bc
- (_Bool)isFeatureEnabled:(id)arg1;	// IMP=0x0000000000129154
- (void)addFeature:(id)arg1 withControlName:(id)arg2 defaultValue:(_Bool)arg3;	// IMP=0x0000000000128fed
- (id)init;	// IMP=0x0000000000128f3c
- (_Bool)isMPSGraphFP16Enabled;	// IMP=0x0000000000128f23
- (_Bool)isMPSGraphEnabled;	// IMP=0x0000000000128f0a
- (void)defineFeatures;	// IMP=0x0000000000128eb7

@end
