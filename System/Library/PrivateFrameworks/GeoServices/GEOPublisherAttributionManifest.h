//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface GEOPublisherAttributionManifest : PBCodable <NSCopying>
{
    NSMutableDictionary *_publisherAttributionSources;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000ce79a5
+ (Class)publisherAttributionSourcesType;	// IMP=0x0000000000ce6fad
- (void).cxx_destruct;	// IMP=0x0000000000ce8297
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000ce81ff
- (unsigned long long)hash;	// IMP=0x0000000000ce81c4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ce8101
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ce7f84
- (void)copyTo:(id)arg1;	// IMP=0x0000000000ce7e1a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ce7ce3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ce7cd4
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000ce754b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000ce753e
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000ce7263
- (id)jsonRepresentation;	// IMP=0x0000000000ce71c7
- (id)dictionaryRepresentation;	// IMP=0x0000000000ce706d
- (id)description;	// IMP=0x0000000000ce6fbe
- (unsigned long long)publisherAttributionSourcesCount;	// IMP=0x0000000000ce6f90
- (void)enumeratePublisherAttributionSourcesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ce6f73
- (id)publisherAttributionSourcesForKey:(id)arg1;	// IMP=0x0000000000ce6f56
- (void)setPublisherAttributionSourcesValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000ce6ecf
- (void)clearPublisherAttributionSources;	// IMP=0x0000000000ce6eb2
@property(retain, nonatomic) NSMutableDictionary *publisherAttributionSources;

@end
