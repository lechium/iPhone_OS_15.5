//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSimpleRestaurantMenuTextGroup : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_menuItems;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_menuItems:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000be6724
- (unsigned long long)hash;	// IMP=0x0000000000be66cd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000be65eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000be6305
- (void)writeTo:(id)arg1;	// IMP=0x0000000000be6055
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000be6046
- (id)jsonRepresentation;	// IMP=0x0000000000be5e6c
- (id)dictionaryRepresentation;	// IMP=0x0000000000be5bab
- (id)description;	// IMP=0x0000000000be5afc
- (id)initWithData:(id)arg1;	// IMP=0x0000000000be5416
- (id)init;	// IMP=0x0000000000be53ba

@end
