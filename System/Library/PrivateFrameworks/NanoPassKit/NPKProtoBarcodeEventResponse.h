//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoBarcodeEventResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    NSData *_responseData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010a901
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010a854
- (unsigned long long)hash;	// IMP=0x000000000010a807
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010a73f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010a6a1
- (void)copyTo:(id)arg1;	// IMP=0x000000000010a63e
- (void)writeTo:(id)arg1;	// IMP=0x000000000010a5e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010a5d4
- (id)dictionaryRepresentation;	// IMP=0x000000000010a3bd
- (id)description;	// IMP=0x000000000010a30e
@property(readonly, nonatomic) _Bool hasErrorData;
@property(readonly, nonatomic) _Bool hasResponseData;

@end
