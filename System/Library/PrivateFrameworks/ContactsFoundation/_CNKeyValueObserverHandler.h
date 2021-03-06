//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNObserver;

@interface _CNKeyValueObserverHandler : NSObject
{
    id _object;	// 8 = 0x8
    NSString *_keyPath;	// 16 = 0x10
    id <CNObserver> _observer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000058edc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000058e8b
- (void)stopObserving;	// IMP=0x0000000000058e67
- (void)startObservingWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000058e40
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 observer:(id)arg3;	// IMP=0x0000000000058d5e

@end

