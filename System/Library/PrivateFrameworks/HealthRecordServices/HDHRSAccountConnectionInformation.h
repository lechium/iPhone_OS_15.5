//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordServices/NSCopying-Protocol.h>
#import <HealthRecordServices/NSSecureCoding-Protocol.h>

@class HDHRSServerAuthorizationInformation, HKClinicalGateway, NSUUID;

@interface HDHRSAccountConnectionInformation : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_accountIdentifier;	// 8 = 0x8
    HKClinicalGateway *_gateway;	// 16 = 0x10
    HDHRSServerAuthorizationInformation *_authorization;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000102a0
- (void).cxx_destruct;	// IMP=0x0000000000010441
@property(readonly, copy, nonatomic) HDHRSServerAuthorizationInformation *authorization; // @synthesize authorization=_authorization;
@property(readonly, copy, nonatomic) HKClinicalGateway *gateway; // @synthesize gateway=_gateway;
@property(readonly, copy, nonatomic) NSUUID *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001032b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000102a8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000010295
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000ff7d
- (unsigned long long)hash;	// IMP=0x000000000000ff23
- (id)initWithAccountIdentifier:(id)arg1 gateway:(id)arg2 authorization:(id)arg3;	// IMP=0x000000000000fe3d
- (id)init;	// IMP=0x000000000000fdc3

@end
