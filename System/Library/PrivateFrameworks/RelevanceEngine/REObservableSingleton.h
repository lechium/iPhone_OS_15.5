//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class REObserverStore;

@interface REObservableSingleton
{
    REObserverStore *_store;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000752bc
- (void)enumerateObservers:(CDUnknownBlockType)arg1;	// IMP=0x000000000007529f
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000075282
- (void)addObserver:(id)arg1;	// IMP=0x0000000000075265
@property(readonly, nonatomic) unsigned long long numberOfObservers;
- (id)_init;	// IMP=0x00000000000751eb

@end

