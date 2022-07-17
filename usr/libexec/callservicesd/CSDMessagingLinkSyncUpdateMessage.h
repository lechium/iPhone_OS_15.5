//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CSDMessagingLinkSyncUpdateMessage : PBCodable
{
    NSMutableArray *_links;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

+ (Class)linkType;	// IMP=0x00200000000b6a52
- (void).cxx_destruct;	// IMP=0x00200000000b76fc
@property(retain, nonatomic) NSMutableArray *links; // @synthesize links=_links;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000b7554
- (unsigned long long)hash;	// IMP=0x00100000000b7508
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b7443
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b7256
- (void)copyTo:(id)arg1;	// IMP=0x00100000000b7171
- (void)writeTo:(id)arg1;	// IMP=0x00100000000b701c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000b700f
- (id)dictionaryRepresentation;	// IMP=0x00100000000b6b12
- (id)description;	// IMP=0x00100000000b6a63
- (id)linkAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000b6a35
- (unsigned long long)linksCount;	// IMP=0x00100000000b6a18
- (void)addLink:(id)arg1;	// IMP=0x00100000000b69ae
- (void)clearLinks;	// IMP=0x00100000000b6991
@property(nonatomic) _Bool hasVersion;

@end
