//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDevice, NSUUID;

@interface HKSeriesBuilderConfiguration
{
    HKDevice *_device;	// 8 = 0x8
    NSUUID *_workoutBuilderID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000137380
- (void).cxx_destruct;	// IMP=0x0000000000137538
@property(readonly, copy, nonatomic) NSUUID *workoutBuilderID; // @synthesize workoutBuilderID=_workoutBuilderID;
@property(readonly, copy, nonatomic) HKDevice *device; // @synthesize device=_device;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000137477
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000137388
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000137335
- (id)initWithDevice:(id)arg1 workoutBuilderID:(id)arg2;	// IMP=0x000000000013726e

@end

