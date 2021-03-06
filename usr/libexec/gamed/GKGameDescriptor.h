//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface GKGameDescriptor
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_bundleVersion;	// 16 = 0x10
    NSNumber *_adamID;	// 24 = 0x18
    NSNumber *_externalVersion;	// 32 = 0x20
    NSString *_shortBundleVersion;	// 40 = 0x28
    long long _platform;	// 48 = 0x30
}

+ (id)platformStringForServerRequest:(long long)arg1;	// IMP=0x004000000012b794
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000012b78c
+ (id)secureCodedPropertyKeys;	// IMP=0x001000000012b641
+ (id)currentPlatformServerString;	// IMP=0x001000000012b1f3
+ (long long)currentPlatform;	// IMP=0x001000000012b1e8
+ (long long)gamePlatformFromServerPushString:(id)arg1;	// IMP=0x001000000012b146
+ (long long)gamePlatformFromServerGameDescriptorString:(id)arg1;	// IMP=0x001000000012b0a4
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4;	// IMP=0x001000000012afa8
- (void).cxx_destruct;	// IMP=0x002000000012bcff
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *shortBundleVersion; // @synthesize shortBundleVersion=_shortBundleVersion;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x001000000012babb
- (id)dictionaryForRequest;	// IMP=0x001000000012b928
- (id)initWithPushDictionary:(id)arg1;	// IMP=0x001000000012b396
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000012b200

@end

