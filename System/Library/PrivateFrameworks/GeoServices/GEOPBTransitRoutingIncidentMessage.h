//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitRoutingIncidentMessage : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _transitIncidentIndexs;	// 24 = 0x18
    NSString *_routingMessage;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    unsigned int _routingIncidentMessageIndex;	// 68 = 0x44
    struct {
        unsigned int has_routingIncidentMessageIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_transitIncidentIndexs:1;
        unsigned int read_routingMessage:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000d6dfdb
- (unsigned long long)hash;	// IMP=0x0000000000d6de53
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d6dd59
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d6db8a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d6d9a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d6d998
- (id)jsonRepresentation;	// IMP=0x0000000000d6cf9a
- (id)dictionaryRepresentation;	// IMP=0x0000000000d6cd1f
- (id)description;	// IMP=0x0000000000d6cc70
- (void)dealloc;	// IMP=0x0000000000d6c098
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d6c03c
- (id)init;	// IMP=0x0000000000d6bfe0

@end
