//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BSMonotonicReferenceTime : NSObject
{
    double _startTimeStamp;	// 8 = 0x8
}

+ (id)referenceTimeForDate:(id)arg1;	// IMP=0x0000000000064d0a
+ (id)referenceTimeWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x0000000000064c97
+ (id)distantFuture;	// IMP=0x0000000000064bfa
+ (id)distantPast;	// IMP=0x0000000000064b5d
+ (id)now;	// IMP=0x0000000000064ab1
- (id)date;	// IMP=0x0000000000064dc8
- (double)timeIntervalSinceReferenceTime:(id)arg1;	// IMP=0x0000000000064db8
@property(readonly, nonatomic) double timeIntervalSinceNow;
@property(readonly, nonatomic) double timeIntervalToNow;

@end
