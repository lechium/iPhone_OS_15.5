//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/PFBlockControlCommon-Protocol.h>

@class NSObject;
@protocol OS_dispatch_group;

@protocol PFBlockControlQueueing <PFBlockControlCommon>
- (_Bool)dequeue;
- (_Bool)groupNotify:(NSObject<OS_dispatch_group> *)arg1;
- (_Bool)enqueueWithDelay:(unsigned long long)arg1;
- (_Bool)enqueue;
@end
