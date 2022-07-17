//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSSecureCoding-Protocol.h>

@class NSData, NSMutableArray;

@interface KTDevice : NSObject <NSSecureCoding>
{
    NSData *_deviceID;	// 8 = 0x8
    NSData *_deviceIDHash;	// 16 = 0x10
    NSMutableArray *_clientDatas;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000049f8f
- (void).cxx_destruct;	// IMP=0x000000000004afc4
@property(retain) NSMutableArray *clientDatas; // @synthesize clientDatas=_clientDatas;
@property(retain) NSData *deviceIDHash; // @synthesize deviceIDHash=_deviceIDHash;
@property(retain) NSData *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly) NSData *deviceIDVRFOutput;
- (void)updateWithMutation:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ac64
- (void)markClientDatasForAppVersion:(unsigned long long)arg1 mutationMs:(unsigned long long)arg2;	// IMP=0x000000000004aa30
- (void)addClientDatasObject:(id)arg1;	// IMP=0x000000000004aa1a
- (void)removeClientDatasObject:(id)arg1;	// IMP=0x000000000004aa04
- (id)clientRecordsForHash:(id)arg1;	// IMP=0x000000000004a7cd
- (id)clientRecordForAppVersion:(unsigned long long)arg1 clientDataHash:(id)arg2;	// IMP=0x000000000004a5dc
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004a2ea
- (id)initWithMutation:(id)arg1;	// IMP=0x000000000004a205
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004a07a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000049f97
- (id)description;	// IMP=0x0000000000049f7d
- (id)debugDescription;	// IMP=0x0000000000049ad2

@end
