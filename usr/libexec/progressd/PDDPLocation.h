//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PDDPDate, PDDPEntityMeta;

@interface PDDPLocation : PBCodable
{
    PDDPDate *_dateCreated;	// 8 = 0x8
    PDDPDate *_dateLastModified;	// 16 = 0x10
    PDDPEntityMeta *_entityMeta;	// 24 = 0x18
    NSString *_locationId;	// 32 = 0x20
    NSString *_locationName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000016a278
@property(retain, nonatomic) PDDPEntityMeta *entityMeta; // @synthesize entityMeta=_entityMeta;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(retain, nonatomic) NSString *locationId; // @synthesize locationId=_locationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000016a0b7
- (unsigned long long)hash;	// IMP=0x001000000016a014
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000169eb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000169d9c
- (void)copyTo:(id)arg1;	// IMP=0x0010000000169cd9
- (void)writeTo:(id)arg1;	// IMP=0x0010000000169c25
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000169c18
- (id)dictionaryRepresentation;	// IMP=0x0010000000169818
- (id)description;	// IMP=0x0010000000169769
@property(readonly, nonatomic) _Bool hasEntityMeta;
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasLocationName;
@property(readonly, nonatomic) _Bool hasLocationId;

@end

