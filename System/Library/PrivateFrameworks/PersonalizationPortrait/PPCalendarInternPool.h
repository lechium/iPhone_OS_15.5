//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASLock;

@interface PPCalendarInternPool : NSObject
{
    _PASLock *_poolLock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000cd2d
- (id)internedCalendarWithEKCalendar:(id)arg1;	// IMP=0x000000000000cc15
- (void)clearPool;	// IMP=0x000000000000cbf8
- (id)init;	// IMP=0x000000000000cb6b

@end

