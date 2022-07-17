//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKProcessAssertion : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDUnknownBlockType _expirationBlock;	// 16 = 0x10
    unsigned long long _identifier;	// 24 = 0x18
    BKSProcessAssertion *_bkProcessAssertion;	// 32 = 0x20
    id _expirationObserver;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001131e
@property(retain, nonatomic) id expirationObserver; // @synthesize expirationObserver=_expirationObserver;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (void)invalidate;	// IMP=0x00000000000112ae
- (void)_expireBackgroundTask;	// IMP=0x00000000000111e4
@property(retain, nonatomic) BKSProcessAssertion *bkProcessAssertion; // @synthesize bkProcessAssertion=_bkProcessAssertion;
- (void)_onQueueSetBkProcessAssertion:(id)arg1;	// IMP=0x0000000000010f0a
- (void)dealloc;	// IMP=0x0000000000010e8a
- (id)description;	// IMP=0x0000000000010e04
- (id)initWithExpirationBlock:(CDUnknownBlockType)arg1 debugDescription:(id)arg2;	// IMP=0x0000000000010a22

@end
