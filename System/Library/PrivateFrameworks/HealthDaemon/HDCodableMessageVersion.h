//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDCodableMessageVersion : PBCodable <NSCopying>
{
    int _compatibilityVersion;	// 8 = 0x8
    int _entityVersion;	// 12 = 0xc
    struct {
        unsigned int compatibilityVersion:1;
        unsigned int entityVersion:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) int compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(nonatomic) int entityVersion; // @synthesize entityVersion=_entityVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000477438
- (unsigned long long)hash;	// IMP=0x00000000004773f2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047733f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004772c2
- (void)copyTo:(id)arg1;	// IMP=0x0000000000477268
- (void)writeTo:(id)arg1;	// IMP=0x00000000004771f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004771ea
- (id)dictionaryRepresentation;	// IMP=0x0000000000476e72
- (id)description;	// IMP=0x0000000000476dc3
@property(nonatomic) _Bool hasCompatibilityVersion;
@property(nonatomic) _Bool hasEntityVersion;

@end
