//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackIdLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_95bda58d _feedbackComponentTypes;	// 24 = 0x18
    NSMutableArray *_feedbackIds;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackComponentTypes:1;
        unsigned int read_feedbackIds:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x000000000129e6c0
+ (Class)feedbackIdType;	// IMP=0x000000000129d5f4
- (void).cxx_destruct;	// IMP=0x000000000129f582
- (void)clearUnknownFields:(_Bool)arg1;	// IMP=0x000000000129f531
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000129f269
- (unsigned long long)hash;	// IMP=0x000000000129f21a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000129f137
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000129ee2f
- (void)copyTo:(id)arg1;	// IMP=0x000000000129ec9c
- (void)writeTo:(id)arg1;	// IMP=0x000000000129e9ab
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000129e99c
- (void)readAll:(_Bool)arg1;	// IMP=0x000000000129e40d
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000129e3fb
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000129dee2
- (id)jsonRepresentation;	// IMP=0x000000000129ddd0
- (id)dictionaryRepresentation;	// IMP=0x000000000129daa2
- (id)description;	// IMP=0x000000000129d9f3
- (int)StringAsFeedbackComponentTypes:(id)arg1;	// IMP=0x000000000129d904
- (id)feedbackComponentTypesAsString:(int)arg1;	// IMP=0x000000000129d86b
- (void)setFeedbackComponentTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000129d849
- (int)feedbackComponentTypeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000129d773
- (void)addFeedbackComponentType:(int)arg1;	// IMP=0x000000000129d73a
- (void)clearFeedbackComponentTypes;	// IMP=0x000000000129d71e
@property(readonly, nonatomic) int *feedbackComponentTypes;
@property(readonly, nonatomic) unsigned long long feedbackComponentTypesCount;
- (id)feedbackIdAtIndex:(unsigned long long)arg1;	// IMP=0x000000000129d5c3
- (unsigned long long)feedbackIdsCount;	// IMP=0x000000000129d597
- (void)addFeedbackId:(id)arg1;	// IMP=0x000000000129d4e3
- (void)clearFeedbackIds;	// IMP=0x000000000129d4bb
@property(retain, nonatomic) NSMutableArray *feedbackIds;
- (void)dealloc;	// IMP=0x000000000129cd1b
- (id)initWithData:(id)arg1;	// IMP=0x000000000129ccbf
- (id)init;	// IMP=0x000000000129cc63

@end

