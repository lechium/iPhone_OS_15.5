//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, NSUUID;

@interface CXJoinCallActivity : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;	// 8 = 0x8
    NSUUID *_UUID;	// 16 = 0x10
    NSData *_applicationContext;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    NSString *_activityIdentifier;	// 40 = 0x28
    NSData *_metadata;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000049585
- (void).cxx_destruct;	// IMP=0x0000000000049ab9
@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSData *applicationContext; // @synthesize applicationContext=_applicationContext;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000497b7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004958d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004942b
- (unsigned long long)hash;	// IMP=0x00000000000492d5
- (_Bool)isEqualToJoinCallActivity:(id)arg1;	// IMP=0x000000000004903a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048fdd
- (id)description;	// IMP=0x0000000000048ea6
- (id)initWithBundleIdentifier:(id)arg1 metadata:(id)arg2 applicationContext:(id)arg3 activityIdentifier:(id)arg4;	// IMP=0x0000000000048d83

@end
