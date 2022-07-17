//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOLogMsgEventUserActionModuleInfo : PBCodable <NSCopying>
{
    NSString *_moduleMetadata;	// 8 = 0x8
    int _type;	// 16 = 0x10
    CDStruct_3af5a977 _flags;	// 20 = 0x14
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000141b47c
- (void).cxx_destruct;	// IMP=0x000000000141b7d4
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000141b75f
- (unsigned long long)hash;	// IMP=0x000000000141b6fc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000141b601
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000141b571
- (void)copyTo:(id)arg1;	// IMP=0x000000000141b4fc
- (void)writeTo:(id)arg1;	// IMP=0x000000000141b498
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000141b489
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000141b41c
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000141b40a
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000141acc7
- (id)jsonRepresentation;	// IMP=0x000000000141acb8
- (id)dictionaryRepresentation;	// IMP=0x000000000141a928
- (id)description;	// IMP=0x000000000141a879
@property(retain, nonatomic) NSString *moduleMetadata;
@property(readonly, nonatomic) _Bool hasModuleMetadata;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000141a304
- (id)typeAsString:(int)arg1;	// IMP=0x000000000141a06d
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;

@end
