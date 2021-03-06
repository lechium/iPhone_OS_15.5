//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationRetrySignal-Protocol.h>

@class NSString;

@interface FCOperationDelayedRetrySignal : NSObject <FCOperationRetrySignal>
{
    unsigned long long _signalTime;	// 8 = 0x8
    double _delay;	// 16 = 0x10
}

@property(readonly, copy) NSString *description;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;	// IMP=0x00000000002215c4
- (id)initWithDelay:(double)arg1;	// IMP=0x0000000000221561

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

