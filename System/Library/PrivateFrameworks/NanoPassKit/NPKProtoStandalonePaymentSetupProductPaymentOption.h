//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoStandalonePaymentSetupProductPaymentOption : PBCodable <NSCopying>
{
    long long _cardType;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    long long _supportedProtocols;	// 24 = 0x18
    struct {
        unsigned int cardType:1;
        unsigned int priority:1;
        unsigned int supportedProtocols:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) long long supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d9464
- (unsigned long long)hash;	// IMP=0x00000000001d9404
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d9331
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d9295
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d921c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d9189
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d917c
- (id)dictionaryRepresentation;	// IMP=0x00000000001d8d1d
- (id)description;	// IMP=0x00000000001d8c6e
@property(nonatomic) _Bool hasSupportedProtocols;
@property(nonatomic) _Bool hasCardType;
@property(nonatomic) _Bool hasPriority;

@end
