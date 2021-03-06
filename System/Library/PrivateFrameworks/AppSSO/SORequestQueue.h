//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface SORequestQueue : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSMutableArray *_queue;	// 16 = 0x10
    id _processingItem;	// 24 = 0x18
    CDUnknownBlockType _processItemBlock;	// 32 = 0x20
}

+ (void)removeQueueWithIdentifier:(id)arg1;	// IMP=0x000000000000cd5a
+ (id)debugDescription;	// IMP=0x000000000000c67f
+ (id)requestQueueWithIdentifier:(id)arg1;	// IMP=0x000000000000c554
- (void).cxx_destruct;	// IMP=0x000000000000cfd9
@property(copy, nonatomic) CDUnknownBlockType processItemBlock; // @synthesize processItemBlock=_processItemBlock;
- (id)description;	// IMP=0x000000000000cf5c
- (void)_itemCompleted;	// IMP=0x000000000000ceb5
- (void)_processItem:(id)arg1;	// IMP=0x000000000000cdda
- (unsigned long long)queueCount;	// IMP=0x000000000000cd02
- (void)removeAllRequestsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ca72
- (void)processNextRequest;	// IMP=0x000000000000c911
- (void)enqueueRequest:(id)arg1;	// IMP=0x000000000000c7a3
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000000c6ed

@end

