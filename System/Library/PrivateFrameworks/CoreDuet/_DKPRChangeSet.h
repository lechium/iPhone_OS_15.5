//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _DKPRChangeSet : PBCodable <NSCopying>
{
    NSMutableArray *_deleteEventIDs;	// 8 = 0x8
    NSMutableArray *_events;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000012a03f
- (unsigned long long)hash;	// IMP=0x0000000000129f8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000129ec4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000129c11
- (void)writeTo:(id)arg1;	// IMP=0x0000000000129a00
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001299f3
- (id)dictionaryRepresentation;	// IMP=0x00000000001295a2
- (id)description;	// IMP=0x00000000001294f3

@end

