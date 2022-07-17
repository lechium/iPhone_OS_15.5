//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPStateChange : PBCodable
{
    PDDPDate *_dateCreated;	// 8 = 0x8
    PDDPDate *_dateLastModified;	// 16 = 0x10
    NSString *_objectId;	// 24 = 0x18
    NSMutableArray *_stateChangePayloads;	// 32 = 0x20
    NSString *_targetClassId;	// 40 = 0x28
    NSString *_targetEntityName;	// 48 = 0x30
    NSString *_targetObjectId;	// 56 = 0x38
    NSString *_targetOwnerPersonId;	// 64 = 0x40
}

+ (Class)stateChangePayloadsType;	// IMP=0x0020000000183fd8
- (void).cxx_destruct;	// IMP=0x00200000001853ff
@property(retain, nonatomic) NSMutableArray *stateChangePayloads; // @synthesize stateChangePayloads=_stateChangePayloads;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *targetOwnerPersonId; // @synthesize targetOwnerPersonId=_targetOwnerPersonId;
@property(retain, nonatomic) NSString *targetClassId; // @synthesize targetClassId=_targetClassId;
@property(retain, nonatomic) NSString *targetEntityName; // @synthesize targetEntityName=_targetEntityName;
@property(retain, nonatomic) NSString *targetObjectId; // @synthesize targetObjectId=_targetObjectId;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000185072
- (unsigned long long)hash;	// IMP=0x0010000000184f81
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000184d85
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000184ac1
- (void)copyTo:(id)arg1;	// IMP=0x0010000000184917
- (void)writeTo:(id)arg1;	// IMP=0x001000000018471d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000184710
- (id)dictionaryRepresentation;	// IMP=0x0010000000184098
- (id)description;	// IMP=0x0010000000183fe9
- (id)stateChangePayloadsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000183fbb
- (unsigned long long)stateChangePayloadsCount;	// IMP=0x0010000000183f9e
- (void)addStateChangePayloads:(id)arg1;	// IMP=0x0010000000183f34
- (void)clearStateChangePayloads;	// IMP=0x0010000000183f17
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasTargetOwnerPersonId;
@property(readonly, nonatomic) _Bool hasTargetClassId;
@property(readonly, nonatomic) _Bool hasTargetEntityName;
@property(readonly, nonatomic) _Bool hasTargetObjectId;
@property(readonly, nonatomic) _Bool hasObjectId;

@end
