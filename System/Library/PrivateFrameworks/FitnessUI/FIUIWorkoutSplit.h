//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FIUIWorkoutSplit : NSObject
{
    double _distanceInMeters;	// 8 = 0x8
    double _duration;	// 16 = 0x10
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double distanceInMeters; // @synthesize distanceInMeters=_distanceInMeters;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003898e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000388f9
- (id)description;	// IMP=0x0000000000038894
- (id)initWithDistance:(double)arg1 duration:(double)arg2;	// IMP=0x000000000003881f

@end
