//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IDSStatusQueryQueue : NSObject
{
    NSMutableArray *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000537860
- (void)enqueueQueryBlock:(CDUnknownBlockType)arg1 cleanup:(CDUnknownBlockType)arg2;	// IMP=0x0010000000536d60
- (void)_callStateChanged;	// IMP=0x0010000000536820
- (void)dealloc;	// IMP=0x00100000005367a0
- (id)init;	// IMP=0x00100000005366c0

@end
