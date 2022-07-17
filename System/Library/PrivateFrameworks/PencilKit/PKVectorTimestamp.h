//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PencilKit/CHStrokeProviderVersion-Protocol.h>
#import <PencilKit/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface PKVectorTimestamp : NSObject <NSCopying, CHStrokeProviderVersion>
{
    NSMutableDictionary *_clock;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000251795
- (void).cxx_destruct;	// IMP=0x000000000025179d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002516e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000251676
@property(readonly, copy) NSString *description;
- (id)shortDescription;	// IMP=0x0000000000251353
- (void)mergeWithTimestamp:(id)arg1;	// IMP=0x0000000000251098
- (unsigned long long)compareTo:(id)arg1;	// IMP=0x0000000000250d1c
- (id)sortedUUIDs;	// IMP=0x0000000000250cc1
- (id)allUUIDs;	// IMP=0x0000000000250cab
- (void)incrementClockForUUID:(id)arg1;	// IMP=0x0000000000250c52
- (long long)compareClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;	// IMP=0x0000000000250ba5
- (void)unionClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;	// IMP=0x0000000000250b3c
- (void)setClock:(unsigned long long)arg1 subclock:(unsigned long long)arg2 forUUID:(id)arg3;	// IMP=0x0000000000250aa4
- (void)setClock:(unsigned long long)arg1 forUUID:(id)arg2;	// IMP=0x00000000002509fd
- (unsigned long long)subclockForUUID:(id)arg1;	// IMP=0x00000000002509b5
- (unsigned long long)clockForUUID:(id)arg1;	// IMP=0x000000000025096d
- (id)clockElementForUUID:(id)arg1;	// IMP=0x0000000000250957
@property(readonly) unsigned long long hash;
- (_Bool)isEmpty;	// IMP=0x0000000000250924
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002508c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025088f
- (id)init;	// IMP=0x0000000000250839
- (id)serialize;	// IMP=0x00000000001ce982
- (void)saveToArchive:(void *)arg1;	// IMP=0x00000000001ce8ad
- (id)initWithArchive:(const void *)arg1;	// IMP=0x00000000001ce7df
- (id)initWithData:(id)arg1;	// IMP=0x00000000001ce6f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
