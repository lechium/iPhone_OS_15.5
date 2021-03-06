//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NFUnfairLock, NSError, NSHashTable;
@protocol FCFetchedValueManager, NFCopying;

@interface FCFetchedValueObservable : NSObject
{
    id <NFCopying> _value;	// 8 = 0x8
    id <FCFetchedValueManager> _manager;	// 16 = 0x10
    CDUnknownBlockType _equalityTest;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    NFUnfairLock *_lock;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000006a147
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NFUnfairLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, copy, nonatomic) CDUnknownBlockType equalityTest; // @synthesize equalityTest=_equalityTest;
@property(readonly, nonatomic) __weak id <FCFetchedValueManager> manager; // @synthesize manager=_manager;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000069f01
- (void)addObserver:(id)arg1;	// IMP=0x0000000000069d08
@property(copy, nonatomic) id <NFCopying> value; // @synthesize value=_value;
- (id)valueWithError:(id *)arg1;	// IMP=0x0000000000069b37
- (void)handleError:(id)arg1;	// IMP=0x0000000000069944
- (id)initWithManager:(id)arg1 initialValue:(id)arg2 equalityTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000069135
- (id)init;	// IMP=0x0000000000068ff0

@end

