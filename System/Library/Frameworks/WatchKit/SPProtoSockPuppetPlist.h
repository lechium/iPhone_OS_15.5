//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WatchKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SPProtoSockPuppetPlist : PBCodable <NSCopying>
{
    NSMutableArray *_objects;	// 8 = 0x8
}

+ (Class)objectType;	// IMP=0x0000000000031b6c
- (void).cxx_destruct;	// IMP=0x0000000000032601
@property(retain, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000324a7
- (unsigned long long)hash;	// IMP=0x000000000003248a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000323f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003222d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000032166
- (void)writeTo:(id)arg1;	// IMP=0x0000000000032036
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000032029
- (id)dictionaryRepresentation;	// IMP=0x0000000000031c2c
- (id)description;	// IMP=0x0000000000031b7d
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000031b4f
- (unsigned long long)objectsCount;	// IMP=0x0000000000031b32
- (void)addObject:(id)arg1;	// IMP=0x0000000000031ac8
- (void)clearObjects;	// IMP=0x0000000000031aab

@end

