//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionEntryList : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_localizedSectionHeader;	// 24 = 0x18
    NSMutableArray *_suggestionEntries;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _contentType;	// 52 = 0x34
    _Bool _showSectionHeader;	// 56 = 0x38
    struct {
        unsigned int has_contentType:1;
        unsigned int has_showSectionHeader:1;
        unsigned int read_unknownFields:1;
        unsigned int read_localizedSectionHeader:1;
        unsigned int read_suggestionEntries:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000f176ec
- (unsigned long long)hash;	// IMP=0x0000000000f17646
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f17506
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f171ae
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f16eb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f16eaa
- (id)jsonRepresentation;	// IMP=0x0000000000f16d98
- (id)dictionaryRepresentation;	// IMP=0x0000000000f167ef
- (id)description;	// IMP=0x0000000000f16740
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f15be7
- (id)init;	// IMP=0x0000000000f15b8b

@end
