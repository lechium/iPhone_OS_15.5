//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDCodableFHIRIdentifier : PBCodable <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_resourceType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008527d
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000851d0
- (unsigned long long)hash;	// IMP=0x0000000000085183
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000850bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008501d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000084fba
- (void)writeTo:(id)arg1;	// IMP=0x0000000000084f5d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000084f50
- (id)dictionaryRepresentation;	// IMP=0x0000000000084d3b
- (id)description;	// IMP=0x0000000000084c8c
@property(readonly, nonatomic) _Bool hasIdentifier;
@property(readonly, nonatomic) _Bool hasResourceType;

@end

