//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPFeedbackDoubleField : PBCodable <NSCopying>
{
    double _edited;	// 8 = 0x8
    double _original;	// 16 = 0x10
    CDStruct_ccf110de _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000000de7504
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000de7b73
- (unsigned long long)hash;	// IMP=0x0000000000de793a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000de7841
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000de77bc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000de7742
- (void)writeTo:(id)arg1;	// IMP=0x0000000000de76cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000de76be
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000de722a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000de721d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000de70e1
- (id)jsonRepresentation;	// IMP=0x0000000000de70d7
- (id)dictionaryRepresentation;	// IMP=0x0000000000de6fc3
- (id)description;	// IMP=0x0000000000de6f14
@property(nonatomic) _Bool hasEdited;
@property(nonatomic) double edited;
@property(nonatomic) _Bool hasOriginal;
@property(nonatomic) double original;

@end

