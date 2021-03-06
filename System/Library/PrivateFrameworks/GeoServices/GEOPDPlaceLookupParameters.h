//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _muids;	// 24 = 0x18
    NSMutableArray *_identifiers;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _resultProviderId;	// 68 = 0x44
    _Bool _enablePartialClientization;	// 72 = 0x48
    struct {
        unsigned int has_resultProviderId:1;
        unsigned int has_enablePartialClientization:1;
        unsigned int read_unknownFields:1;
        unsigned int read_muids:1;
        unsigned int read_identifiers:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (Class)identifierType;	// IMP=0x000000000058a6e5
- (void).cxx_destruct;	// IMP=0x000000000058a6f6
- (id)identifierAtIndex:(unsigned long long)arg1;	// IMP=0x000000000058a6b4
- (unsigned long long)identifiersCount;	// IMP=0x000000000058a688
- (void)addIdentifier:(id)arg1;	// IMP=0x000000000058a646
- (void)clearIdentifiers;	// IMP=0x000000000058a61e
@property(retain, nonatomic) NSMutableArray *identifiers;
- (unsigned long long)hash;	// IMP=0x000000000058a463
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000058a33a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000589fe9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000589ce3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000589cd4
- (id)jsonRepresentation;	// IMP=0x00000000005898e1
- (id)dictionaryRepresentation;	// IMP=0x0000000000589423
- (id)description;	// IMP=0x0000000000589374
- (void)dealloc;	// IMP=0x0000000000588633
- (id)initWithData:(id)arg1;	// IMP=0x00000000005885d7
- (id)init;	// IMP=0x000000000058857b
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;	// IMP=0x000000000125b588

@end

