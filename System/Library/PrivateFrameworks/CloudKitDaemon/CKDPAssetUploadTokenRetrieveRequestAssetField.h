//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequestAssetField : PBCodable <NSCopying>
{
    NSMutableArray *_assets;	// 8 = 0x8
    CKDPRecordFieldIdentifier *_field;	// 16 = 0x10
}

+ (Class)assetsType;	// IMP=0x000000000018555c
- (void).cxx_destruct;	// IMP=0x00000000001861c2
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000185fe7
- (unsigned long long)hash;	// IMP=0x0000000000185f9a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000185ed2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000185cf9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000185c0f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000185ac3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000185ab6
- (id)dictionaryRepresentation;	// IMP=0x000000000018561c
- (id)description;	// IMP=0x000000000018556d
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018553f
- (unsigned long long)assetsCount;	// IMP=0x0000000000185522
- (void)addAssets:(id)arg1;	// IMP=0x00000000001854b8
- (void)clearAssets;	// IMP=0x000000000018549b
@property(readonly, nonatomic) _Bool hasField;

@end

