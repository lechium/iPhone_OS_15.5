//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class NSString;

@interface HKCodableMenstrualCyclesProjectionKind : PBCodable <NSCopying>
{
    NSString *_kind;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000176aae
@property(retain, nonatomic) NSString *kind; // @synthesize kind=_kind;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000176a65
- (unsigned long long)hash;	// IMP=0x0000000000176a48
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001769ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000176936
- (void)copyTo:(id)arg1;	// IMP=0x000000000017690c
- (void)writeTo:(id)arg1;	// IMP=0x00000000001768e8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001768db
- (id)dictionaryRepresentation;	// IMP=0x000000000017670d
- (id)description;	// IMP=0x000000000017665e
@property(readonly, nonatomic) _Bool hasKind;

@end

