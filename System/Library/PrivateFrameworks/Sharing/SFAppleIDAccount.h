//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, SFAppleIDContactInfo, SFAppleIDIdentity, SFAppleIDValidationRecord;

@interface SFAppleIDAccount : NSObject <NSSecureCoding>
{
    NSString *_altDSID;	// 8 = 0x8
    NSString *_appleID;	// 16 = 0x10
    NSString *_certificateToken;	// 24 = 0x18
    NSDate *_certificateTokenCreationDate;	// 32 = 0x20
    SFAppleIDContactInfo *_contactInfo;	// 40 = 0x28
    NSDate *_creationDate;	// 48 = 0x30
    SFAppleIDIdentity *_identity;	// 56 = 0x38
    NSData *_privateKeyPersistentReference;	// 64 = 0x40
    SFAppleIDValidationRecord *_validationRecord;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ecd9
- (void).cxx_destruct;	// IMP=0x0000000000020187
@property(retain, nonatomic) SFAppleIDValidationRecord *validationRecord; // @synthesize validationRecord=_validationRecord;
@property(retain, nonatomic) NSData *privateKeyPersistentReference; // @synthesize privateKeyPersistentReference=_privateKeyPersistentReference;
@property(retain, nonatomic) SFAppleIDIdentity *identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) SFAppleIDContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) NSDate *certificateTokenCreationDate; // @synthesize certificateTokenCreationDate=_certificateTokenCreationDate;
@property(retain, nonatomic) NSString *certificateToken; // @synthesize certificateToken=_certificateToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (id)description;	// IMP=0x000000000001fec9
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000001fabc
- (id)initWithAppleID:(id)arg1;	// IMP=0x000000000001fa27
- (_Bool)isEqualToAccount:(id)arg1;	// IMP=0x000000000001f2b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f24f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f188
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f045
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001ece1

@end
