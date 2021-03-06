//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVCallbackContextRegistry : NSObject
{
    NSMutableDictionary *_contextsForTokens;	// 8 = 0x8
    unsigned long long _currentToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_readWriteQueue;	// 24 = 0x18
}

+ (id)sharedCallbackContextRegistry;	// IMP=0x00000000000ef7c9
+ (void)initialize;	// IMP=0x00000000000ef795
- (id)callbackContextForToken:(void *)arg1;	// IMP=0x00000000000efc1a
- (void)unregisterCallbackContextForToken:(void *)arg1;	// IMP=0x00000000000efa73
- (void *)registerCallbackContextObject:(id)arg1;	// IMP=0x00000000000ef8b4
- (void)dealloc;	// IMP=0x00000000000ef86b
- (id)init;	// IMP=0x00000000000ef7d6

@end

