//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BiomeStreams/NSCopying-Protocol.h>

@class NSString;

@interface BMPBMailContentEventFilteringSubset : PBCodable <NSCopying>
{
    NSString *_domainId;	// 8 = 0x8
    NSString *_uniqueId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b0ae
@property(retain, nonatomic) NSString *domainId; // @synthesize domainId=_domainId;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002b001
- (unsigned long long)hash;	// IMP=0x000000000002afb4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002aeec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002ae4e
- (void)copyTo:(id)arg1;	// IMP=0x000000000002adeb
- (void)writeTo:(id)arg1;	// IMP=0x000000000002ad8e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000002ad81
- (id)dictionaryRepresentation;	// IMP=0x000000000002ab6a
- (id)description;	// IMP=0x000000000002aabb
@property(readonly, nonatomic) _Bool hasDomainId;
@property(readonly, nonatomic) _Bool hasUniqueId;

@end

