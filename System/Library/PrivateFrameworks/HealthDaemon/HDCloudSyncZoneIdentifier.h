//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class CKRecordZoneID, NSString;

@interface HDCloudSyncZoneIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_containerIdentifier;	// 8 = 0x8
    CKRecordZoneID *_zoneIdentifier;	// 16 = 0x10
    long long _scope;	// 24 = 0x18
    long long _type;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000038dc40
+ (id)identifierForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3;	// IMP=0x000000000038d928
- (void).cxx_destruct;	// IMP=0x000000000038e2fd
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long scope; // @synthesize scope=_scope;
@property(readonly, copy, nonatomic) CKRecordZoneID *zoneIdentifier; // @synthesize zoneIdentifier=_zoneIdentifier;
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)description;	// IMP=0x000000000038e19c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000038e191
- (_Bool)isEquivalentIgnoringOwnerToZone:(id)arg1;	// IMP=0x000000000038e0f9
- (_Bool)isEquivalentIgnoringOwnerToZone:(id)arg1 container:(id)arg2;	// IMP=0x000000000038e01e
- (_Bool)isEquivalentToZone:(id)arg1 container:(id)arg2;	// IMP=0x000000000038dee3
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000038de21
- (unsigned long long)hash;	// IMP=0x000000000038ddb1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000038dd2a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000038dc48
- (id)initForZone:(id)arg1 container:(id)arg2 scope:(long long)arg3;	// IMP=0x000000000038d9bf
- (id)initForZone:(id)arg1 container:(id)arg2;	// IMP=0x000000000038d9a7

@end

