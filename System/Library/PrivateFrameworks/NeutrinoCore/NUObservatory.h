//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NUObservatory : NSObject
{
    NSObject<OS_dispatch_queue> *_serializer;	// 8 = 0x8
    NSMutableArray *_observations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e049c
- (void)_notifyAllObserversForKey:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e03d8
- (void)notifyAllObserversForKey:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e033f
- (void)_removeObserver:(id)arg1;	// IMP=0x00000000001e027d
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001dfebd
- (void)_removeObserver:(id)arg1 forKey:(long long)arg2;	// IMP=0x00000000001dfdf9
- (void)removeObserver:(id)arg1 forKey:(long long)arg2;	// IMP=0x00000000001dfa31
- (void)_addObservation:(id)arg1;	// IMP=0x00000000001dfa1b
- (void)addObserver:(id)arg1 forKey:(long long)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001df2e8
- (id)addObserverForKey:(long long)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001df261
- (id)init;	// IMP=0x00000000001df1ef

@end
