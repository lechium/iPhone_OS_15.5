//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary;

@interface UIAutonomousSingleAppModeConfiguration : NSObject <NSCopying>
{
    NSMutableDictionary *_propertiesAsDictionary;	// 8 = 0x8
    unsigned long long _style;	// 16 = 0x10
    NSDictionary *_managedConfigurationSettings;	// 24 = 0x18
}

+ (id)defaultConfigurationForStyle:(unsigned long long)arg1;	// IMP=0x0000000000019c87
+ (id)defaultConfiguration;	// IMP=0x0000000000019c70
- (void).cxx_destruct;	// IMP=0x0000000000019f9b
@property(retain, nonatomic) NSDictionary *managedConfigurationSettings; // @synthesize managedConfigurationSettings=_managedConfigurationSettings;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (_Bool)__gaxTrampoline_defaultBoolValueForFeatureKey:(id)arg1;	// IMP=0x0000000000019f3d
- (void)_setBoolValue:(_Bool)arg1 forFeatureKey:(id)arg2;	// IMP=0x0000000000019e93
- (_Bool)_boolValueForFeatureKey:(id)arg1;	// IMP=0x0000000000019df9
@property(readonly, nonatomic) NSDictionary *propertiesAsDictionary;
@property(nonatomic) _Bool automaticallyRelaunchesAfterAppCrash;
@property(nonatomic) _Bool allowsAutoLock;
@property(nonatomic) _Bool allowsLockButton;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000019cb8

@end

