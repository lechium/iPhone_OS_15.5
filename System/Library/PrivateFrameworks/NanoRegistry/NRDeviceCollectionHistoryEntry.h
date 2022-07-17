//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NRDeviceCollectionDiff, NRDeviceCollectionHistory, NRMutableDeviceCollection, NRPBDeviceCollectionHistoryEntry, NSDate;

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _switchIndex;	// 8 = 0x8
    unsigned long long _index;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    NRDeviceCollectionDiff *_diff;	// 32 = 0x20
    NRDeviceCollectionHistory *_historyManager;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000033ccf
- (void).cxx_destruct;	// IMP=0x000000000003475a
@property(readonly, nonatomic) unsigned int switchIndex;
@property(readonly, nonatomic) NRDeviceCollectionDiff *diff;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) unsigned long long index;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003465c
- (id)description;	// IMP=0x0000000000034573
@property(readonly, nonatomic) NRMutableDeviceCollection *state;
- (unsigned long long)hash;	// IMP=0x00000000000340fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003408d
@property(readonly, nonatomic) NRPBDeviceCollectionHistoryEntry *protobuf;
- (id)initWithProtobuf:(id)arg1;	// IMP=0x0000000000033f09
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033e78
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033cd7
- (id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned int)arg5;	// IMP=0x0000000000033c0f

@end
