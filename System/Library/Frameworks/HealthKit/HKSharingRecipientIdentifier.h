//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HKSharingRecipientIdentifier : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _type;	// 8 = 0x8
    NSUUID *_invitationUUID;	// 16 = 0x10
    NSString *_clinicalAccountIdentifier;	// 24 = 0x18
}

+ (id)sharingRecipientIdentifierFromStringRepresentation:(id)arg1;	// IMP=0x00000000000575ec
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000057476
- (void).cxx_destruct;	// IMP=0x0000000000057748
@property(readonly, copy, nonatomic) NSString *clinicalAccountIdentifier; // @synthesize clinicalAccountIdentifier=_clinicalAccountIdentifier;
@property(readonly, copy, nonatomic) NSUUID *invitationUUID; // @synthesize invitationUUID=_invitationUUID;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000057508
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005747e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005746b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000573cb
- (unsigned long long)hash;	// IMP=0x000000000005737c
- (id)description;	// IMP=0x00000000000572e9
- (id)_initWithRecipientIdentifierType:(unsigned long long)arg1 invitationUUID:(id)arg2 clinicalAccountIdentifier:(id)arg3;	// IMP=0x0000000000057229
- (id)initForClinicalAccountIdentifier:(id)arg1;	// IMP=0x000000000005720d
- (id)initForInvitationUUID:(id)arg1;	// IMP=0x00000000000571f3

@end

