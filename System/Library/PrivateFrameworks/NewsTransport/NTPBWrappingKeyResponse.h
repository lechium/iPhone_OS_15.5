//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBWrappingKeyResponse : PBCodable <NSCopying>
{
    NSMutableArray *_wrappingKeyMapEntries;	// 8 = 0x8
}

+ (Class)wrappingKeyMapEntriesType;	// IMP=0x000000000023c5a4
- (void).cxx_destruct;	// IMP=0x000000000023cf72
@property(retain, nonatomic) NSMutableArray *wrappingKeyMapEntries; // @synthesize wrappingKeyMapEntries=_wrappingKeyMapEntries;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000023ce18
- (unsigned long long)hash;	// IMP=0x000000000023cdfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023cd61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023cb9e
- (void)writeTo:(id)arg1;	// IMP=0x000000000023ca6e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000023ca61
- (id)dictionaryRepresentation;	// IMP=0x000000000023c664
- (id)description;	// IMP=0x000000000023c5b5
- (id)wrappingKeyMapEntriesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000023c587
- (unsigned long long)wrappingKeyMapEntriesCount;	// IMP=0x000000000023c56a
- (void)addWrappingKeyMapEntries:(id)arg1;	// IMP=0x000000000023c500
- (void)clearWrappingKeyMapEntries;	// IMP=0x000000000023c4e3

@end

