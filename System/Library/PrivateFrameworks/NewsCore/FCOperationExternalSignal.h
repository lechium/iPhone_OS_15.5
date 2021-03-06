//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationRetrySignal-Protocol.h>

@class NSString;
@protocol OS_dispatch_group;

@interface FCOperationExternalSignal : NSObject <FCOperationRetrySignal>
{
    _Bool _result;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000221b60
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;	// IMP=0x0000000000221ab0
- (void)triggerWithRetry:(_Bool)arg1;	// IMP=0x0000000000221a9f
- (id)init;	// IMP=0x0000000000221a47

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

