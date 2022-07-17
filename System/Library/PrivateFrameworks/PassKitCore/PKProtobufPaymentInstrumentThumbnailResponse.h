//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable <NSCopying>
{
    NSString *_manifestHash;	// 8 = 0x8
    int _status;	// 16 = 0x10
    NSData *_thumbnailImage;	// 24 = 0x18
    CDStruct_47fe53f2 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000032519a
@property(retain, nonatomic) NSString *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(retain, nonatomic) NSData *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003250cd
- (unsigned long long)hash;	// IMP=0x000000000032505a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000324f65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000324ea4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000324e21
- (void)writeTo:(id)arg1;	// IMP=0x0000000000324da0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000324d93
- (id)dictionaryRepresentation;	// IMP=0x0000000000324a5a
- (id)description;	// IMP=0x00000000003249ab
@property(readonly, nonatomic) _Bool hasManifestHash;
- (int)StringAsStatus:(id)arg1;	// IMP=0x0000000000324904
- (id)statusAsString:(int)arg1;	// IMP=0x000000000032489e
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasThumbnailImage;

@end
