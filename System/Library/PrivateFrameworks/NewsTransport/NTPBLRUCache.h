//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBLRUCache : PBCodable <NSCopying>
{
    NSMutableArray *_entries;	// 8 = 0x8
}

+ (Class)entriesType;	// IMP=0x0000000000182787
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000182eea
- (unsigned long long)hash;	// IMP=0x0000000000182ecd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000182e69
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000182cc7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000182bc1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000182bb4
- (id)dictionaryRepresentation;	// IMP=0x000000000018280f
- (id)description;	// IMP=0x0000000000182798
- (id)entriesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018276a
- (unsigned long long)entriesCount;	// IMP=0x000000000018274d
- (void)addEntries:(id)arg1;	// IMP=0x0000000000182700
- (void)clearEntries;	// IMP=0x00000000001826e3
- (void)dealloc;	// IMP=0x00000000001826a3

@end

