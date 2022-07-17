//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (NSObject_AVShared)
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000000289d
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000027fa
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;	// IMP=0x000000000000277f
- (_Bool)okToNotifyFromThisThread;	// IMP=0x000000000000276f
- (void)disallowSafePerformSelector;	// IMP=0x0000000000002737
- (void)allowSafePerformSelector;	// IMP=0x00000000000026ff
- (void)postNotificationWithDescription:(id)arg1;	// IMP=0x0000000000002665
@end
