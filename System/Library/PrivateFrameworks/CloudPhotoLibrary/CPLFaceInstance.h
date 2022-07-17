//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface CPLFaceInstance : PBCodable <NSCopying>
{
    double _centerX;	// 8 = 0x8
    double _centerY;	// 16 = 0x10
    double _size;	// 24 = 0x18
    unsigned int _faceState;	// 32 = 0x20
    unsigned int _nameSource;	// 36 = 0x24
    NSString *_personIdentifier;	// 40 = 0x28
    NSMutableArray *_rejectedPersonIdentifiers;	// 48 = 0x30
    struct {
        unsigned int centerX:1;
        unsigned int centerY:1;
        unsigned int size:1;
        unsigned int faceState:1;
        unsigned int nameSource:1;
    } _has;	// 56 = 0x38
}

+ (Class)rejectedPersonIdentifiersType;	// IMP=0x00000000000d71c0
- (void).cxx_destruct;	// IMP=0x00000000000d6d7e
@property(nonatomic) unsigned int nameSource; // @synthesize nameSource=_nameSource;
@property(retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers; // @synthesize rejectedPersonIdentifiers=_rejectedPersonIdentifiers;
@property(nonatomic) unsigned int faceState; // @synthesize faceState=_faceState;
@property(nonatomic) double size; // @synthesize size=_size;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(retain, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d6acb
- (unsigned long long)hash;	// IMP=0x00000000000d6713
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d6559
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d62b4
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d6131
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d5f25
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d5f18
- (id)dictionaryRepresentation;	// IMP=0x00000000000d5ccf
- (id)description;	// IMP=0x00000000000d5c20
@property(nonatomic) _Bool hasNameSource;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d5bb8
- (unsigned long long)rejectedPersonIdentifiersCount;	// IMP=0x00000000000d5b9b
- (void)addRejectedPersonIdentifiers:(id)arg1;	// IMP=0x00000000000d5b31
- (void)clearRejectedPersonIdentifiers;	// IMP=0x00000000000d5b14
@property(nonatomic) _Bool hasFaceState;
@property(nonatomic) _Bool hasSize;
@property(nonatomic) _Bool hasCenterY;
@property(nonatomic) _Bool hasCenterX;
@property(readonly, nonatomic) _Bool hasPersonIdentifier;
- (_Bool)_isFaceStateBitSet:(unsigned int)arg1;	// IMP=0x00000000000726e6
- (void)_setFaceStateBit:(unsigned int)arg1 fromBoolValue:(_Bool)arg2;	// IMP=0x000000000007269b
@property(nonatomic, getter=isManual) _Bool manual;
@property(nonatomic, getter=isKeyFace) _Bool keyFace;
@property(readonly, nonatomic, getter=isNoneState) _Bool noneState;
- (void)clearState;	// IMP=0x000000000007260f
- (id)pointerDescription;	// IMP=0x000000000007259e
- (long long)compare:(id)arg1;	// IMP=0x00000000000722e0

@end
