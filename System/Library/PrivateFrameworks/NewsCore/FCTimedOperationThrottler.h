//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottler-Protocol.h>
#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCOperationThrottler, NSString;
@protocol FCOperationThrottlerDelegate;

@interface FCTimedOperationThrottler : NSObject <FCOperationThrottlerDelegate, FCOperationThrottler>
{
    double _cooldownTime;	// 8 = 0x8
    FCOperationThrottler *_operationThrottler;	// 16 = 0x10
    id <FCOperationThrottlerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002ef062
@property(nonatomic) __weak id <FCOperationThrottlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCOperationThrottler *operationThrottler; // @synthesize operationThrottler=_operationThrottler;
@property double cooldownTime; // @synthesize cooldownTime=_cooldownTime;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002eee91
@property _Bool suspended;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002eed8f
- (void)tickle;	// IMP=0x00000000002eed52
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000002eebd4
- (id)init;	// IMP=0x00000000002eea8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
