//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class NSString;
@protocol BPSSubscriber;

@interface _BPSLastInnser : NSObject <BPSSubscriber>
{
    id <BPSSubscriber> _downstream;	// 8 = 0x8
    id _last;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e315
@property(retain, nonatomic) id last; // @synthesize last=_last;
@property(retain, nonatomic) id <BPSSubscriber> downstream; // @synthesize downstream=_downstream;
- (void)cancel;	// IMP=0x000000000001e2a2
- (void)receiveCompletion:(id)arg1;	// IMP=0x000000000001e1df
- (long long)receiveInput:(id)arg1;	// IMP=0x000000000001e1c7
- (void)receiveSubscription:(id)arg1;	// IMP=0x000000000001e155
- (id)initWithDownstream:(id)arg1;	// IMP=0x000000000001e0ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

