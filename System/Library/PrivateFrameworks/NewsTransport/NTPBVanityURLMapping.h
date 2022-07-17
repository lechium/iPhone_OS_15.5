//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NTPBVanityURLMapping : PBCodable <NSCopying>
{
    NSMutableArray *_paths;	// 8 = 0x8
}

+ (Class)pathsType;	// IMP=0x00000000000e07f7
- (void).cxx_destruct;	// IMP=0x00000000000e11c5
@property(retain, nonatomic) NSMutableArray *paths; // @synthesize paths=_paths;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000e106b
- (unsigned long long)hash;	// IMP=0x00000000000e104e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e0fb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e0df1
- (void)writeTo:(id)arg1;	// IMP=0x00000000000e0cc1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000e0cb4
- (id)dictionaryRepresentation;	// IMP=0x00000000000e08b7
- (id)description;	// IMP=0x00000000000e0808
- (id)pathsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e07da
- (unsigned long long)pathsCount;	// IMP=0x00000000000e07bd
- (void)addPaths:(id)arg1;	// IMP=0x00000000000e0753
- (void)clearPaths;	// IMP=0x00000000000e0736

@end
