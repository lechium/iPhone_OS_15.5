//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/CXCallObserverDelegate-Protocol.h>

@class CXCallObserver, NSString;

@interface _ASIncomingCallObserver : NSObject <CXCallObserverDelegate>
{
    CXCallObserver *_callObserver;	// 8 = 0x8
    CDUnknownBlockType _incomingCallHandler;	// 16 = 0x10
}

+ (id)callObserverWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000135e5
- (void).cxx_destruct;	// IMP=0x0000000000013712
- (void)callObserver:(id)arg1 callChanged:(id)arg2;	// IMP=0x00000000000136e1
- (id)_initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001362e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

