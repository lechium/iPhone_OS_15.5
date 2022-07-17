//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NRPBNSError;

@interface NRPBAddTermsEventResponse : PBCodable
{
    NRPBNSError *_error;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002374d
@property(retain, nonatomic) NRPBNSError *error; // @synthesize error=_error;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000236ce
- (unsigned long long)hash;	// IMP=0x00100000000236b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000023617
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002359f
- (void)copyTo:(id)arg1;	// IMP=0x0010000000023575
- (void)writeTo:(id)arg1;	// IMP=0x0010000000023551
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000023544
- (id)dictionaryRepresentation;	// IMP=0x00100000000232f9
- (id)description;	// IMP=0x001000000002324a
@property(readonly, nonatomic) _Bool hasError;

@end
