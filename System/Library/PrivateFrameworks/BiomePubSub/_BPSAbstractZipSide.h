//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomePubSub/BPSSubscriber-Protocol.h>

@class NSString, _BPSAbstractZip;

@interface _BPSAbstractZipSide : NSObject <BPSSubscriber>
{
    _BPSAbstractZip *_zip;	// 8 = 0x8
    long long _index;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000022a79
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) _BPSAbstractZip *zip; // @synthesize zip=_zip;
- (void)cancel;	// IMP=0x0000000000022a44
- (void)receiveCompletion:(id)arg1;	// IMP=0x00000000000229cc
- (long long)receiveInput:(id)arg1;	// IMP=0x000000000002294e
- (void)receiveSubscription:(id)arg1;	// IMP=0x00000000000228d6
- (id)initWithIndex:(long long)arg1 zip:(id)arg2;	// IMP=0x0000000000022860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

