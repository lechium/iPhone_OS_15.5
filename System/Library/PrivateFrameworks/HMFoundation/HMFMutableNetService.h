//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface HMFMutableNetService
{
    CDUnknownBlockType _publishBlock;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000056260
@property(copy, nonatomic) CDUnknownBlockType publishBlock; // @synthesize publishBlock=_publishBlock;
- (void)netServiceDidStop:(id)arg1;	// IMP=0x0000000000056059
- (void)netService:(id)arg1 didNotPublish:(id)arg2;	// IMP=0x0000000000055d83
- (void)netServiceDidPublish:(id)arg1;	// IMP=0x0000000000055bfb
- (void)netServiceWillPublish:(id)arg1;	// IMP=0x0000000000055b34
- (void)stopPublishing;	// IMP=0x00000000000559a2
- (void)startPublishingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000553ed
- (void)setInternal:(id)arg1;	// IMP=0x0000000000055399
- (id)internal;	// IMP=0x0000000000055353
- (void)updateTXTRecord;	// IMP=0x0000000000055163
- (void)updateTXTRecordWithData:(id)arg1;	// IMP=0x000000000005515d
- (void)removeTXTRecordValueForKey:(id)arg1;	// IMP=0x00000000000550a8
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000054a2f
@property(copy) NSDictionary *TXTRecord; // @dynamic TXTRecord;
@property unsigned long long port; // @dynamic port;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned long long)arg4;	// IMP=0x00000000000545c3
- (id)initWithNetService:(id)arg1;	// IMP=0x000000000005450d

@end
