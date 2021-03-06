//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesShared/CRCoding-Protocol.h>
#import <NotesShared/CRDataType-Protocol.h>
#import <NotesShared/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CRVectorTimestamp : NSObject <CRDataType, NSCopying, CRCoding>
{
    NSMutableDictionary *_clock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000192740
@property(readonly, copy) NSString *description;
- (id)shortDescription;	// IMP=0x000000000019219a
- (id)tombstone;	// IMP=0x0000000000192156
- (void)realizeLocalChangesIn:(id)arg1;	// IMP=0x0000000000192150
- (void)setDocument:(id)arg1;	// IMP=0x000000000019214a
- (void)walkGraph:(CDUnknownBlockType)arg1;	// IMP=0x0000000000192144
- (id)deltaSince:(id)arg1 in:(id)arg2;	// IMP=0x00000000001920bd
- (void)mergeWith:(id)arg1;	// IMP=0x0000000000191d5e
- (void)minusVectorTimestamp:(id)arg1;	// IMP=0x0000000000191a60
- (unsigned long long)compare:(id)arg1;	// IMP=0x000000000019165c
- (id)sortedUUIDs;	// IMP=0x00000000001915ed
- (id)allUUIDs;	// IMP=0x00000000001915d7
- (void)removeUUID:(id)arg1;	// IMP=0x00000000001915c0
- (void)maxClock:(unsigned long long)arg1 forUUID:(id)arg2;	// IMP=0x00000000001914ec
- (void)incrementClockForUUID:(id)arg1;	// IMP=0x0000000000191489
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;	// IMP=0x00000000001913d5
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;	// IMP=0x000000000019131a
- (unsigned long long)subclockForUUID:(id)arg1;	// IMP=0x00000000001912be
- (unsigned long long)clockForUUID:(id)arg1;	// IMP=0x0000000000191262
- (id)clockElementForUUID:(id)arg1;	// IMP=0x000000000019123c
- (id)timestampForReplica:(id)arg1;	// IMP=0x00000000001911ba
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000191129
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001910e1
- (void)encodeIntoProtobufTimestamp:(void *)arg1 coder:(id)arg2;	// IMP=0x0000000000190dde
- (id)initWithProtobufTimestamp:(const void *)arg1 decoder:(id)arg2;	// IMP=0x0000000000190c3c
- (void)encodeWithCRCoder:(id)arg1;	// IMP=0x0000000000190b91
- (id)initWithCRCoder:(id)arg1;	// IMP=0x0000000000190afc
- (id)init;	// IMP=0x0000000000190a88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

