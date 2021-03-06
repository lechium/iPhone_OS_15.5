//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackCommonCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_comments;	// 24 = 0x18
    NSMutableArray *_imageIds;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_comments:1;
        unsigned int read_imageIds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000443224
+ (Class)imageIdType;	// IMP=0x000000000044289f
- (void).cxx_destruct;	// IMP=0x0000000000443f38
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x0000000000443ee7
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000443c67
- (unsigned long long)hash;	// IMP=0x0000000000443c0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000443b1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000443803
- (void)copyTo:(id)arg1;	// IMP=0x00000000004436b9
- (void)writeTo:(id)arg1;	// IMP=0x00000000004433d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004433ca
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000442f71
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000442f5f
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000442c78
- (id)jsonRepresentation;	// IMP=0x0000000000442b66
- (id)dictionaryRepresentation;	// IMP=0x000000000044295f
- (id)description;	// IMP=0x00000000004428b0
- (id)imageIdAtIndex:(unsigned long long)arg1;	// IMP=0x000000000044286e
- (unsigned long long)imageIdsCount;	// IMP=0x0000000000442842
- (void)addImageId:(id)arg1;	// IMP=0x000000000044278e
- (void)clearImageIds;	// IMP=0x0000000000442766
@property(retain, nonatomic) NSMutableArray *imageIds;
@property(retain, nonatomic) NSString *comments;
@property(readonly, nonatomic) _Bool hasComments;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000441fc1
- (id)init;	// IMP=0x0000000000441f65

@end

