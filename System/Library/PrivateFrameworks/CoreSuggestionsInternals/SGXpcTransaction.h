//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source, OS_os_transaction;

@interface SGXpcTransaction : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    struct atomic_flag _done;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 24 = 0x18
}

+ (id)transactionWithName:(const void *)arg1;	// IMP=0x0000000000293143
- (void).cxx_destruct;	// IMP=0x00000000002930ea
- (void)dealloc;	// IMP=0x00000000002930ac
- (_Bool)doneReturningWasDone;	// IMP=0x000000000029305c
- (void)done;	// IMP=0x000000000029304a
- (void)setTimeout:(double)arg1;	// IMP=0x0000000000292dc1
- (id)initWithName:(const void *)arg1;	// IMP=0x0000000000292d68
- (id)init;	// IMP=0x0000000000292ce1

@end

