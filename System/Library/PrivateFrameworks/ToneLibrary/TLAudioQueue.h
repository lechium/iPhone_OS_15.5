//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TLAudioQueue : NSObject
{
    NSString *_assumeRunningOnAudioQueueThreadLocalStorageKey;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

+ (id)sharedAudioQueue;	// IMP=0x0000000000031d4a
- (void).cxx_destruct;	// IMP=0x0000000000032369
- (_Bool)_shouldAssumeRunningOnAudioQueue;	// IMP=0x00000000000322a8
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_underlyingSerialQueue;
- (void)assertNotRunningOnAudioQueue;	// IMP=0x000000000003209f
- (void)assertRunningOnAudioQueue;	// IMP=0x000000000003206f
- (void)performSynchronousTaskWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000031f4e
- (void)performSynchronousTaskWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031f37
- (void)performTaskWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000031f26
- (id)_init;	// IMP=0x0000000000031daf

@end
