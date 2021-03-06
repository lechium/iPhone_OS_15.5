//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottler-Protocol.h>

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface FCOperationThrottler : NSObject <FCOperationThrottler>
{
    NSObject<OS_dispatch_source> *_dispatchSource;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_handlerSynchronizationGroup;	// 24 = 0x18
    _Bool _suspended;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002eea5c
@property _Bool suspended; // @synthesize suspended=_suspended;
- (void)tickle;	// IMP=0x00000000002ee9c4
- (void)addCompletionForCurrentOperation:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ee8a3
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ee874
- (void)dealloc;	// IMP=0x00000000002ee83a
- (id)initWithDelegate:(id)arg1 updateQueue:(id)arg2;	// IMP=0x00000000002ee021
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000002edeb2
- (id)init;	// IMP=0x00000000002edd6d

@end

