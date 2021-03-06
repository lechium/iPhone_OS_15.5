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

+ (id)platformStringForServerRequest:(long long)arg1;	// IMP=0x0000000000029138
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029130
+ (id)secureCodedPropertyKeys;	// IMP=0x0000000000028fe5
+ (id)currentPlatformServerString;	// IMP=0x0000000000028b97
+ (long long)currentPlatform;	// IMP=0x0000000000028b8c
+ (long long)gamePlatformFromServerPushString:(id)arg1;	// IMP=0x0000000000028aea
+ (long long)gamePlatformFromServerGameDescriptorString:(id)arg1;	// IMP=0x0000000000028a48
+ (id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4;	// IMP=0x000000000002894c
- (void).cxx_destruct;	// IMP=0x00000000000296a3
@property(nonatomic) long long platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *shortBundleVersion; // @synthesize shortBundleVersion=_shortBundleVersion;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)description;	// IMP=0x000000000002945f
- (id)dictionaryForRequest;	// IMP=0x00000000000292cc
- (id)initWithPushDictionary:(id)arg1;	// IMP=0x0000000000028d3a
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000028ba4

@end

