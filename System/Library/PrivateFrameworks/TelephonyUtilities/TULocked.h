//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TULocked : NSObject
{
    struct os_unfair_recursive_lock_s _lock;	// 8 = 0x8
    id _object;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e57cb
- (struct os_unfair_recursive_lock_s *)unfairLockForTesting;	// IMP=0x00000000000e57c1
- (void)setObject:(id)arg1;	// IMP=0x00000000000e577a
- (id)object;	// IMP=0x00000000000e5741
- (void)performWhileLocked:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e56e2
- (id)debugDescription;	// IMP=0x00000000000e5632
- (id)description;	// IMP=0x00000000000e557f
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000e550c

@end
