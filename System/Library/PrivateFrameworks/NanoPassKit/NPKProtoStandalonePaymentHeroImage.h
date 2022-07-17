//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoStandalonePaymentHeroImage : PBCodable <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSData *_imageData;	// 16 = 0x10
    NSString *_imageHash;	// 24 = 0x18
    NSString *_imageURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000081605
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *imageHash; // @synthesize imageHash=_imageHash;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000814ce
- (unsigned long long)hash;	// IMP=0x000000000008144a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008131e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000081234
- (void)copyTo:(id)arg1;	// IMP=0x0000000000081196
- (void)writeTo:(id)arg1;	// IMP=0x00000000000810fa
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000810ed
- (id)dictionaryRepresentation;	// IMP=0x0000000000080e39
- (id)description;	// IMP=0x0000000000080d8a
@property(readonly, nonatomic) _Bool hasImageURL;
@property(readonly, nonatomic) _Bool hasImageData;
@property(readonly, nonatomic) _Bool hasImageHash;

@end
