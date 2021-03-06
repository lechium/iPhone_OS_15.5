//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HDContributorReference, NSNumber, NSString;

@interface HDDataOriginProvenance : NSObject <NSSecureCoding, NSCopying>
{
    long long _syncProvenance;	// 8 = 0x8
    NSString *_productType;	// 16 = 0x10
    NSString *_systemBuild;	// 24 = 0x18
    NSString *_sourceVersion;	// 32 = 0x20
    NSString *_timeZoneName;	// 40 = 0x28
    NSNumber *_sourceID;	// 48 = 0x30
    NSNumber *_deviceID;	// 56 = 0x38
    HDContributorReference *_contributorReference;	// 64 = 0x40
    CDStruct_f6aba300 _operatingSystemVersion;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000027bfc
+ (id)dataProvenanceWithSyncProvenance:(long long)arg1 productType:(id)arg2 systemBuild:(id)arg3 operatingSystemVersion:(CDStruct_2ec95fd7)arg4 sourceVersion:(id)arg5 timeZoneName:(id)arg6 sourceID:(id)arg7 deviceID:(id)arg8 contributorReference:(id)arg9;	// IMP=0x00000000003949ee
- (void).cxx_destruct;	// IMP=0x000000000001b1dc
@property(retain, nonatomic) HDContributorReference *contributorReference; // @synthesize contributorReference=_contributorReference;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSNumber *sourceID; // @synthesize sourceID=_sourceID;
@property(copy, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(nonatomic) CDStruct_2ec95fd7 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(copy, nonatomic) NSString *systemBuild; // @synthesize systemBuild=_systemBuild;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(nonatomic) long long syncProvenance; // @synthesize syncProvenance=_syncProvenance;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e852
- (id)description;	// IMP=0x0000000000394ba8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001971b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027c04
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002ea0d
- (_Bool)isValid;	// IMP=0x0000000000017b45
- (unsigned long long)hash;	// IMP=0x000000000002ba8f

@end

