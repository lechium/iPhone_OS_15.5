//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICUnfairLock : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
}

- (void)lockWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006e8f
- (void)unlock;	// IMP=0x0000000000006e81
- (void)lock;	// IMP=0x0000000000006e73
- (id)init;	// IMP=0x0000000000006e38

@end

