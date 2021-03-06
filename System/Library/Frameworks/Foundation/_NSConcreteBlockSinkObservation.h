//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol NSObservable;

__attribute__((visibility("hidden")))
@interface _NSConcreteBlockSinkObservation
{
    NSObject<NSObservable> *_LHSobservable;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    int _tag;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00000000000768cf
- (void)_receiveBox:(id)arg1;	// IMP=0x0000000000076868
- (void)finishObserving;	// IMP=0x0000000000076856
- (void)remove;	// IMP=0x00000000000767d5
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;	// IMP=0x0000000000076727
- (id)debugDescription;	// IMP=0x000000000007669a
- (id *)_observerStorage;	// IMP=0x0000000000076692
- (void *)_observerStorageOfSize:(unsigned long long)arg1;	// IMP=0x000000000007668a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000076630

@end

