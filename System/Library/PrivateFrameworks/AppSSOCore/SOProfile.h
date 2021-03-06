//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppSSOCore/NSCopying-Protocol.h>
#import <AppSSOCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SOProfile : NSObject <NSCopying, NSSecureCoding>
{
    long long _type;	// 8 = 0x8
    NSArray *_URLPrefix;	// 16 = 0x10
    NSArray *_hosts;	// 24 = 0x18
    NSString *_extensionBundleIdentifier;	// 32 = 0x20
    NSString *_realm;	// 40 = 0x28
    NSArray *_deniedBundleIdentifiers;	// 48 = 0x30
    long long _screenLockedBehavior;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007d42
+ (id)stringWithScreenLockedBehavior:(long long)arg1;	// IMP=0x0000000000007afe
+ (id)stringWithProfileType:(long long)arg1;	// IMP=0x0000000000007a94
- (void).cxx_destruct;	// IMP=0x0000000000008485
@property(nonatomic) long long screenLockedBehavior; // @synthesize screenLockedBehavior=_screenLockedBehavior;
@property(retain, nonatomic) NSArray *deniedBundleIdentifiers; // @synthesize deniedBundleIdentifiers=_deniedBundleIdentifiers;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
@property(retain, nonatomic) NSString *extensionBundleIdentifier; // @synthesize extensionBundleIdentifier=_extensionBundleIdentifier;
@property(retain, nonatomic) NSArray *hosts; // @synthesize hosts=_hosts;
@property(retain, nonatomic) NSArray *URLPrefix; // @synthesize URLPrefix=_URLPrefix;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008316
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008104
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007d4a
- (id)description;	// IMP=0x0000000000007b68

@end

