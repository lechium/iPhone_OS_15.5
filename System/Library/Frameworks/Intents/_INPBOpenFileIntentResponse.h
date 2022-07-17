//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBOpenFileIntentResponse-Protocol.h>

@class NSArray, NSString, _INPBInteger, _INPBString;

@interface _INPBOpenFileIntentResponse : PBCodable <_INPBOpenFileIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_f2ecb737 _has;	// 8 = 0x8
    _Bool _success;	// 12 = 0xc
    NSArray *_entities;	// 16 = 0x10
    _INPBInteger *_numResults;	// 24 = 0x18
    _INPBString *_query;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f00f9
+ (Class)entitiesType;	// IMP=0x00000000000f00e8
- (void).cxx_destruct;	// IMP=0x00000000000efd67
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) _INPBString *query; // @synthesize query=_query;
@property(retain, nonatomic) _INPBInteger *numResults; // @synthesize numResults=_numResults;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (id)dictionaryRepresentation;	// IMP=0x00000000000ef9be
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ef502
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ef3e7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ef355
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ef256
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ef02c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ef01f
@property(nonatomic) _Bool hasSuccess;
@property(readonly, nonatomic) _Bool hasQuery;
@property(readonly, nonatomic) _Bool hasNumResults;
- (id)entitiesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000eef6b
@property(readonly, nonatomic) unsigned long long entitiesCount;
- (void)addEntities:(id)arg1;	// IMP=0x00000000000eeed4
- (void)clearEntities;	// IMP=0x00000000000eeeb7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
