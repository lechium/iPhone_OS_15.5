//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRNSXPCListenerProtocol-Protocol.h>

@class NSString;
@protocol NRNSXPCListenerDelegate, OS_dispatch_queue;

@interface NRMockNSXPCListener : NSObject <NRNSXPCListenerProtocol>
{
    _Bool _suspended;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    id <NRNSXPCListenerDelegate> _delegate;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000066ef
@property(retain, nonatomic) id <NRNSXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000000065e0
- (void)invalidate;	// IMP=0x00000000000064bd
- (void)suspend;	// IMP=0x0000000000006422
- (void)resume;	// IMP=0x000000000000637c
- (id)initWithMachServiceName:(id)arg1;	// IMP=0x000000000000615b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
