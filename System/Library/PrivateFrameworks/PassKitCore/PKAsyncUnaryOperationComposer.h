//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableArray *_operations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000445fd2
- (id)evaluateWithInput:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000445f49
- (id)evaluatorWithInput:(id)arg1;	// IMP=0x0000000000445e93
- (void)addOperation:(CDUnknownBlockType)arg1;	// IMP=0x0000000000445e19
- (id)init;	// IMP=0x0000000000445dbc

@end
