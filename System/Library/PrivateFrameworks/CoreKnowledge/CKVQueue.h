//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKVQueueNode;

@interface CKVQueue : NSObject
{
    CKVQueueNode *_firstNode;	// 8 = 0x8
    CKVQueueNode *_lastNode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b437e
- (id)dequeue;	// IMP=0x00000000000b42de
- (void)enqueue:(id)arg1;	// IMP=0x00000000000b4230
- (id)init;	// IMP=0x00000000000b41cc

@end
