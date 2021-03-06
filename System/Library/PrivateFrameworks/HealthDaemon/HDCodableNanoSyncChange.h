//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDNanoSyncDescription-Protocol.h>
#import <HealthDaemon/HDSyncChange-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableEntityIdentifier, HDCodableSyncVersionRange, NSMutableArray, NSNumber, NSString;

@interface HDCodableNanoSyncChange : PBCodable <HDSyncChange, HDNanoSyncDescription, NSCopying>
{
    long long _endAnchor;	// 8 = 0x8
    long long _sequence;	// 16 = 0x10
    long long _startAnchor;	// 24 = 0x18
    HDCodableEntityIdentifier *_entityIdentifier;	// 32 = 0x20
    NSMutableArray *_objectDatas;	// 40 = 0x28
    int _objectType;	// 48 = 0x30
    NSMutableArray *_requiredAnchors;	// 56 = 0x38
    HDCodableSyncVersionRange *_version;	// 64 = 0x40
    _Bool _complete;	// 72 = 0x48
    _Bool _speculative;	// 73 = 0x49
    struct {
        unsigned int endAnchor:1;
        unsigned int sequence:1;
        unsigned int startAnchor:1;
        unsigned int objectType:1;
        unsigned int complete:1;
        unsigned int speculative:1;
    } _has;	// 76 = 0x4c
}

+ (Class)requiredAnchorsType;	// IMP=0x0000000000208b2a
+ (Class)objectDataType;	// IMP=0x0000000000208ac0
+ (id)changeWithNanoSyncEntityClass:(Class)arg1 version:(CDStruct_c12fb951)arg2;	// IMP=0x00000000003768c9
- (void).cxx_destruct;	// IMP=0x0000000000049ad4
@property(retain, nonatomic) HDCodableSyncVersionRange *version; // @synthesize version=_version;
@property(retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) long long sequence; // @synthesize sequence=_sequence;
@property(nonatomic) _Bool speculative; // @synthesize speculative=_speculative;
@property(retain, nonatomic) NSMutableArray *requiredAnchors; // @synthesize requiredAnchors=_requiredAnchors;
@property(retain, nonatomic) NSMutableArray *objectDatas; // @synthesize objectDatas=_objectDatas;
@property(nonatomic) long long endAnchor; // @synthesize endAnchor=_endAnchor;
@property(nonatomic) long long startAnchor; // @synthesize startAnchor=_startAnchor;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000209ecf
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000209b11
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002096e6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000209493
- (void)writeTo:(id)arg1;	// IMP=0x00000000000492a9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000209484
- (id)dictionaryRepresentation;	// IMP=0x0000000000208c98
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) _Bool hasEntityIdentifier;
@property(nonatomic) _Bool hasComplete;
@property(nonatomic) _Bool hasSequence;
@property(nonatomic) _Bool hasSpeculative;
- (id)requiredAnchorsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000208b0d
- (unsigned long long)requiredAnchorsCount;	// IMP=0x0000000000208af0
- (void)addRequiredAnchors:(id)arg1;	// IMP=0x000000000004f88e
- (void)clearRequiredAnchors;	// IMP=0x0000000000208ad1
- (id)objectDataAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000208aa3
- (unsigned long long)objectDatasCount;	// IMP=0x0000000000208a86
- (void)addObjectData:(id)arg1;	// IMP=0x000000000004802c
- (void)clearObjectDatas;	// IMP=0x0000000000047dab
@property(nonatomic) _Bool hasEndAnchor;
@property(nonatomic) _Bool hasStartAnchor;
- (int)StringAsObjectType:(id)arg1;	// IMP=0x0000000000208468
- (id)objectTypeAsString:(int)arg1;	// IMP=0x000000000020817d
@property(nonatomic) _Bool hasObjectType;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
- (id)nanoSyncDescription;	// IMP=0x000000000004c153
- (id)decodedObjectsForProfile:(id)arg1 error:(id *)arg2;	// IMP=0x000000000037705a
- (id)requiredAnchorMapWithProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000376c80
- (void)setVersionRange:(CDStruct_c12fb951)arg1;	// IMP=0x0000000000376bee
- (void)setSequenceNumber:(long long)arg1 done:(_Bool)arg2;	// IMP=0x00000000000480d1
@property(readonly, nonatomic) _Bool done;
@property(readonly, nonatomic) NSNumber *sequenceNumber;
- (void)setObjects:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 requiredAnchorMap:(id)arg3;	// IMP=0x0000000000047b47
- (id)speculativeCopy;	// IMP=0x0000000000376b69
- (Class)syncEntityClassForProfile:(id)arg1;	// IMP=0x0000000000376a4c
- (id)syncEntityIdentifier;	// IMP=0x00000000003769c1
@property(readonly, nonatomic) CDStruct_c12fb951 versionRange;
@property(readonly, nonatomic) struct HDSyncAnchorRange syncAnchorRange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) long long encodedByteCount;
@property(readonly) Class superclass;

@end

