//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMNatalimeterInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
    _Bool fStartedUpdates;	// 24 = 0x18
    CDUnknownBlockType fHandler;	// 32 = 0x20
}

- (unsigned long long)_promptsNeeded;	// IMP=0x00000000001223f4
- (void)_stopAbsoluteNatalimetryDataUpdates;	// IMP=0x00000000001220fa
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001219da
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000121701
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:(id)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000120ff5
- (void)_queryAbsoluteNatalimetryDataSinceRecord:(long long)arg1 withHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000120d29
- (void)_teardown;	// IMP=0x0000000000120ce2
- (void)dealloc;	// IMP=0x0000000000120ca8
- (id)init;	// IMP=0x00000000001208d4

@end

