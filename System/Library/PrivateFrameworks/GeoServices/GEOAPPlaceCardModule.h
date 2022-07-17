//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOAPPlaceCardModule : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _contents;	// 16 = 0x10
    NSString *_metadata;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _type;	// 60 = 0x3c
    CDStruct_08ef82c2 _flags;	// 64 = 0x40
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000007e4ee1
+ (id)moduleFromModuleType:(int)arg1;	// IMP=0x0000000000a06f13
- (void).cxx_destruct;	// IMP=0x00000000007e59df
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000007e58fc
- (unsigned long long)hash;	// IMP=0x00000000007e587a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007e5761
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007e559f
- (void)copyTo:(id)arg1;	// IMP=0x00000000007e5445
- (void)writeTo:(id)arg1;	// IMP=0x00000000007e524a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000007e523b
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000007e4c2e
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000007e4c21
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000007e426a
- (id)jsonRepresentation;	// IMP=0x00000000007e4260
- (id)dictionaryRepresentation;	// IMP=0x00000000007e3d76
- (id)description;	// IMP=0x00000000007e3cc7
@property(retain, nonatomic) NSString *metadata;
@property(readonly, nonatomic) _Bool hasMetadata;
- (int)StringAsContents:(id)arg1;	// IMP=0x00000000007e3a50
- (id)contentsAsString:(int)arg1;	// IMP=0x00000000007e399d
- (void)setContents:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000007e397b
- (int)contentAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007e38a5
- (void)addContent:(int)arg1;	// IMP=0x00000000007e386c
- (void)clearContents;	// IMP=0x00000000007e3850
@property(readonly, nonatomic) int *contents;
@property(readonly, nonatomic) unsigned long long contentsCount;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000007e2be8
- (id)typeAsString:(int)arg1;	// IMP=0x00000000007e2953
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
- (void)dealloc;	// IMP=0x00000000007e28ac
- (id)initWithData:(id)arg1;	// IMP=0x00000000007e2850
- (id)init;	// IMP=0x00000000007e27f4

@end
