//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForAccountsIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSearchForAccountsIntent : PBCodable <_INPBSearchForAccountsIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int accountType:1;
        unsigned int requestedBalanceType:1;
    } _has;	// 8 = 0x8
    int _accountType;	// 12 = 0xc
    int _requestedBalanceType;	// 16 = 0x10
    _INPBDataString *_accountNickname;	// 24 = 0x18
    _INPBIntentMetadata *_intentMetadata;	// 32 = 0x20
    _INPBDataString *_organizationName;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000158770
- (void).cxx_destruct;	// IMP=0x0000000000158377
@property(nonatomic) int requestedBalanceType; // @synthesize requestedBalanceType=_requestedBalanceType;
@property(retain, nonatomic) _INPBDataString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) _INPBDataString *accountNickname; // @synthesize accountNickname=_accountNickname;
- (id)dictionaryRepresentation;	// IMP=0x000000000015802f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000157acf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015797a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001578e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001577e9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000157652
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000157645
- (int)StringAsRequestedBalanceType:(id)arg1;	// IMP=0x00000000001575a8
- (id)requestedBalanceTypeAsString:(int)arg1;	// IMP=0x0000000000157541
@property(nonatomic) _Bool hasRequestedBalanceType;
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsAccountType:(id)arg1;	// IMP=0x0000000000157374
- (id)accountTypeAsString:(int)arg1;	// IMP=0x00000000001572cc
@property(nonatomic) _Bool hasAccountType;
@property(readonly, nonatomic) _Bool hasAccountNickname;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

