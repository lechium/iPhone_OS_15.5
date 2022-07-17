//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@protocol OS_dispatch_queue;

@interface MTLCommandQueueDescriptor : NSObject <NSCopying>
{
}

+ (id)commandQueueDescriptor;	// IMP=0x00000000000b7577
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b7504
+ (id)alloc;	// IMP=0x00000000000b74fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b756f

// Remaining properties
@property(nonatomic) NSObject<OS_dispatch_queue> *commitQueue; // @dynamic commitQueue;
@property(nonatomic) _Bool commitSynchronously; // @dynamic commitSynchronously;
@property(nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @dynamic completionQueue;
@property(nonatomic) unsigned long long devicePartition; // @dynamic devicePartition;
@property(nonatomic) _Bool disableCrossQueueHazardTracking; // @dynamic disableCrossQueueHazardTracking;
@property(nonatomic) unsigned long long maxCommandBufferCount; // @dynamic maxCommandBufferCount;
@property(nonatomic) unsigned long long qosLevel; // @dynamic qosLevel;

@end
