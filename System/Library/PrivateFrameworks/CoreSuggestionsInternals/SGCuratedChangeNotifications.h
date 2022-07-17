//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGCuratedChangeNotifications : NSObject
{
}

+ (void)addCalendarObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2;	// IMP=0x000000000015cab4
+ (void)addAddressBookObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2;	// IMP=0x000000000015ca3e
+ (void)_addObserver:(CDUnknownBlockType)arg1 forObjectLifetime:(id)arg2 listenerClass:(Class)arg3;	// IMP=0x000000000015c99d
+ (id)_getListener:(Class)arg1;	// IMP=0x000000000015c8e2
+ (id)_getListenerByClassMap;	// IMP=0x000000000015c8b2
+ (void)simulateCalendarChange;	// IMP=0x000000000015cbd5
+ (void)simulateAddressBookChange;	// IMP=0x000000000015cb83

@end
