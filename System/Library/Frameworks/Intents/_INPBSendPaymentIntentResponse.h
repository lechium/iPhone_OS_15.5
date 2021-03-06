//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSendPaymentIntentResponse-Protocol.h>

@class NSString, _INPBPaymentRecord;

@interface _INPBSendPaymentIntentResponse : PBCodable <_INPBSendPaymentIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBPaymentRecord *_paymentRecord;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029ce83
- (void).cxx_destruct;	// IMP=0x000000000029ccbc
@property(retain, nonatomic) _INPBPaymentRecord *paymentRecord; // @synthesize paymentRecord=_paymentRecord;
- (id)dictionaryRepresentation;	// IMP=0x000000000029cc10
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000029ca71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000029c9ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029c95d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029c85e
- (void)writeTo:(id)arg1;	// IMP=0x000000000029c7d7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000029c7ca
@property(readonly, nonatomic) _Bool hasPaymentRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

