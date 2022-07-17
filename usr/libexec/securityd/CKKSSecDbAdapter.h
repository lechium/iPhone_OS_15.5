//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKKSSecDbAdapter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000b5fa5
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)insideSQLTransaction;	// IMP=0x00100000000b5f71
- (void)dispatchSyncWithReadOnlySQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b5e27
- (void)dispatchSyncWithSQLTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b5cda
- (_Bool)dispatchSyncWithConnection:(struct __OpaqueSecDbConnection *)arg1 readWriteTxion:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b5b8f
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000b5b24

@end
