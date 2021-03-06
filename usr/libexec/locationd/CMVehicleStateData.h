//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject
{
    CMMotionTimeRange *fTimeRange;	// 8 = 0x8
    NSString *fDeviceId;	// 16 = 0x10
    unsigned long long fVehicularState;	// 24 = 0x18
    unsigned long long fVehicularHints;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002ebb28
@property(readonly, nonatomic) unsigned long long vehicularHints;
@property(readonly, nonatomic) unsigned long long vehicularState;
@property(readonly, nonatomic) NSString *deviceId;
@property(readonly, nonatomic) CMMotionTimeRange *timeRange;
- (id)description;	// IMP=0x00100000002ebc99
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002ebc19
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002ebb30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002ebaae
- (void)dealloc;	// IMP=0x00100000002eba64
- (id)initWithTimestamp:(id)arg1 state:(unsigned long long)arg2 hints:(unsigned long long)arg3;	// IMP=0x00100000002eb999
- (id)initWithTimeRange:(id)arg1 deviceId:(id)arg2;	// IMP=0x00100000002eb925

@end

