//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@interface SIRICOMMONInt64Value : PBCodable <NSCopying>
{
    long long _value;	// 8 = 0x8
    CDStruct_01ef6375 _has;	// 16 = 0x10
}

@property(nonatomic) long long value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000095d05
- (unsigned long long)hash;	// IMP=0x0000000000095cdd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000095c4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000095be6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000095bc0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000095b94
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000095b87
- (id)dictionaryRepresentation;	// IMP=0x000000000009590d
- (id)description;	// IMP=0x000000000009585e
@property(nonatomic) _Bool hasValue;

@end
