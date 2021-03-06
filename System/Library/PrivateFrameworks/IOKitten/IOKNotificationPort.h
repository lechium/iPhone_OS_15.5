//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IOKNotificationPort : NSObject
{
    struct IONotificationPort *_port;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000317f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) struct IONotificationPort *port; // @synthesize port=_port;
- (void)dealloc;	// IMP=0x000000000000312c
@property(readonly, nonatomic) unsigned int machPort;
- (id)initOnDispatchQueue:(id)arg1;	// IMP=0x00000000000030f4
- (id)initWithMasterPort:(unsigned int)arg1 onDispatchQueue:(id)arg2;	// IMP=0x0000000000003058
- (id)init;	// IMP=0x0000000000002fcc

@end

