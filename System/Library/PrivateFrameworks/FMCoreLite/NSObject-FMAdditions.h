//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSObject (FMAdditions)
- (void)_fm_removeNotificationObserverProxy:(id)arg1;	// IMP=0x000000000000e077
- (void)_fm_addNotificationObserverProxy:(id)arg1;	// IMP=0x000000000000dfad
- (id)fm_associatedObjectForDescriptor:(const CDStruct_b9c9288f *)arg1;	// IMP=0x000000000000dfa0
- (void)fm_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const CDStruct_b9c9288f *)arg2;	// IMP=0x000000000000df8f
- (void)fm_removeNotificationBlockObserver:(id)arg1;	// IMP=0x000000000000df7d
- (id)fm_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000de89
- (id)fm_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000dd8d
@property(readonly, retain, nonatomic) NSString *logID;
- (id)nullToNil;	// IMP=0x000000000000ec35
@property(readonly, retain, nonatomic) NSString *fm_logID;
- (id)fm_nullToNil;	// IMP=0x000000000000ebac
@end
