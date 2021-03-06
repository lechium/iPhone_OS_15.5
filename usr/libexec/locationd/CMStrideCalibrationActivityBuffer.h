//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMStrideCalibrationActivityBuffer : NSObject
{
    struct vector<std::pair<double, CLMotionActivity::Type>, std::allocator<std::pair<double, CLMotionActivity::Type>>> fActivityWindow;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x002000000042b0b3
- (void).cxx_destruct;	// IMP=0x001000000042b097
- (void)feedMotionStateData:(const union NotificationData *)arg1;	// IMP=0x001000000042b008
- (_Bool)isRunningStateInWindow;	// IMP=0x001000000042af7a
- (void)ageOutMotionStateArray;	// IMP=0x001000000042ae90

@end

