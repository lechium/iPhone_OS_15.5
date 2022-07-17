//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWarsawMerchantIdentifier : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_merchantDomain;	// 24 = 0x18
    NSString *_merchantId;	// 32 = 0x20
    NSString *_merchantName;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_merchantDomain:1;
        unsigned int read_merchantId:1;
        unsigned int read_merchantName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000613f3f
- (unsigned long long)hash;	// IMP=0x0000000000613ec8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000613db2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000613bd3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000613a0c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006139fd
- (id)jsonRepresentation;	// IMP=0x0000000000613705
- (id)dictionaryRepresentation;	// IMP=0x00000000006132af
- (id)description;	// IMP=0x0000000000613200
- (id)initWithData:(id)arg1;	// IMP=0x0000000000612ab8
- (id)init;	// IMP=0x0000000000612a5c

@end
