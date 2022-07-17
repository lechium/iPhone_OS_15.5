//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSCopying-Protocol.h>
#import <AppleAccount/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface AAInheritanceInvitation : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_beneficiaryID;	// 8 = 0x8
    NSString *_beneficiaryHandle;	// 16 = 0x10
    NSString *_beneficiaryFirstName;	// 24 = 0x18
    NSString *_beneficiaryLastName;	// 32 = 0x20
    NSString *_beneficiaryDisplayName;	// 40 = 0x28
    long long _status;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029b59
- (void).cxx_destruct;	// IMP=0x0000000000029d89
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *beneficiaryDisplayName; // @synthesize beneficiaryDisplayName=_beneficiaryDisplayName;
@property(readonly, copy, nonatomic) NSString *beneficiaryLastName; // @synthesize beneficiaryLastName=_beneficiaryLastName;
@property(readonly, copy, nonatomic) NSString *beneficiaryFirstName; // @synthesize beneficiaryFirstName=_beneficiaryFirstName;
@property(readonly, copy, nonatomic) NSString *beneficiaryHandle; // @synthesize beneficiaryHandle=_beneficiaryHandle;
@property(readonly, nonatomic) NSUUID *beneficiaryID; // @synthesize beneficiaryID=_beneficiaryID;
- (id)description;	// IMP=0x0000000000029ca8
- (id)_statusDescription;	// IMP=0x0000000000029c34
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000029b61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029a88
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000298e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000297fd
- (id)initWithBeneficiaryID:(id)arg1 beneficiaryHandle:(id)arg2 beneficiaryFirstName:(id)arg3 beneficiaryLastName:(id)arg4 beneficiaryDisplayName:(id)arg5 status:(long long)arg6;	// IMP=0x00000000000296f1
- (id)initWithBeneficiaryID:(id)arg1 beneficiaryHandle:(id)arg2;	// IMP=0x00000000000296d0

@end
