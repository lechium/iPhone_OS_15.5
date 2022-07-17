//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSSecureCoding-Protocol.h>

@interface RTEstimatedLocationOptions : NSObject <NSSecureCoding>
{
    _Bool _enableFallbackModel;	// 8 = 0x8
    double _averageSpeed;	// 16 = 0x10
    double _timeInterval;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002c733
@property(readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;
@property(readonly, nonatomic) _Bool enableFallbackModel; // @synthesize enableFallbackModel=_enableFallbackModel;
@property(readonly, nonatomic) double averageSpeed; // @synthesize averageSpeed=_averageSpeed;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002c7de
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002c73b
- (id)initWithAverageSpeed:(double)arg1 enableFallbackModel:(_Bool)arg2 timeInterval:(double)arg3;	// IMP=0x000000000002c6da
- (id)init;	// IMP=0x000000000002c6bb

@end
