//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchAds/NSLocking-Protocol.h>

@interface ADUnfairLock : NSObject <NSLocking>
{
    struct os_unfair_lock_s _unfairLock;	// 8 = 0x8
    unsigned int _unfairLockOptions;	// 12 = 0xc
}

@property(nonatomic) unsigned int unfairLockOptions; // @synthesize unfairLockOptions=_unfairLockOptions;
@property(nonatomic) struct os_unfair_lock_s unfairLock; // @synthesize unfairLock=_unfairLock;
- (void)unlock;	// IMP=0x000000000000473d
- (void)lock;	// IMP=0x000000000000472c
- (id)initWithOptions:(long long)arg1;	// IMP=0x00000000000046e3

@end
