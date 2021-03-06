//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEORPFeedbackLayoutConfigResult : PBCodable <NSCopying>
{
    NSMutableArray *_forms;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000010c3d00
+ (Class)formType;	// IMP=0x00000000010c2f6a
- (void).cxx_destruct;	// IMP=0x00000000010c4887
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010c471b
- (unsigned long long)hash;	// IMP=0x00000000010c46e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010c461d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010c445a
- (void)copyTo:(id)arg1;	// IMP=0x00000000010c4387
- (void)writeTo:(id)arg1;	// IMP=0x00000000010c4257
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010c4248
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010c354c
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010c353a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010c32b7
- (id)jsonRepresentation;	// IMP=0x00000000010c32a8
- (id)dictionaryRepresentation;	// IMP=0x00000000010c302a
- (id)description;	// IMP=0x00000000010c2f7b
- (id)formAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010c2f4d
- (unsigned long long)formsCount;	// IMP=0x00000000010c2f30
- (void)addForm:(id)arg1;	// IMP=0x00000000010c2ec6
- (void)clearForms;	// IMP=0x00000000010c2ea9
@property(retain, nonatomic) NSMutableArray *forms;

@end

