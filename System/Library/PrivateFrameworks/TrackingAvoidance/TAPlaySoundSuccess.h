//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/TAEventProtocol-Protocol.h>

@class NSData, NSDate, NSString, NSUUID;

@interface TAPlaySoundSuccess : NSObject <TAEventProtocol>
{
    NSUUID *_uuid;	// 8 = 0x8
    NSData *_address;	// 16 = 0x10
    unsigned long long _successType;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000032d44
- (void).cxx_destruct;	// IMP=0x0000000000032fe6
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) unsigned long long successType; // @synthesize successType=_successType;
@property(readonly, nonatomic) NSData *address; // @synthesize address=_address;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)getDate;	// IMP=0x0000000000032fb0
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x0000000000032f04
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000032e6b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000032d4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000032d09
@property(readonly, copy) NSString *description;
- (id)descriptionDictionary;	// IMP=0x0000000000032a03
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000326c4
- (id)initWithUUID:(id)arg1 address:(id)arg2 successType:(unsigned long long)arg3 date:(id)arg4;	// IMP=0x00000000000325d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
