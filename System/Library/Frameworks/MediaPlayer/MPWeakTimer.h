//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface MPWeakTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;	// 8 = 0x8
}

+ (id)timerWithInterval:(double)arg1 repeats:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000053eaa
+ (id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000053e8d
+ (id)timerWithInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000053e37
+ (id)timerWithInterval:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000053e1d
- (void).cxx_destruct;	// IMP=0x0000000000053e0d
- (void)invalidate;	// IMP=0x0000000000053dd7
- (void)dealloc;	// IMP=0x0000000000053d99
- (id)initWithInterval:(double)arg1 repeats:(_Bool)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000053c90
- (id)initWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000053c73

@end
