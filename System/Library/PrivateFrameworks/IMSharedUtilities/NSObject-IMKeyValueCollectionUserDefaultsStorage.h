//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObject (IMKeyValueCollectionUserDefaultsStorage)
+ (_Bool)isSingleton;	// IMP=0x0000000000064d0e
+ (_Bool)replaceSingletonWithSubclass:(id)arg1;	// IMP=0x0000000000064cb0
+ (_Bool)isSingletonOverridden;	// IMP=0x0000000000064c75
+ (id)overriddenSingleton;	// IMP=0x0000000000064bb3
+ (void)replaceSingletonWithObject:(id)arg1;	// IMP=0x0000000000064ad8
+ (void)removeSingletonOverride;	// IMP=0x0000000000064ac4
+ (void)overrideSingletonWithObject:(id)arg1;	// IMP=0x00000000000649ad
+ (id)singletonOverride;	// IMP=0x00000000000648eb
+ (id)_createSingleton__im;	// IMP=0x0000000000064825
- (_Bool)isArchivable_im;	// IMP=0x0000000000027737
- (_Bool)__isSingletonProxy__im;	// IMP=0x0000000000064ca8
- (void)__im_performAsynchronousTest:(CDUnknownBlockType)arg1 name:(id)arg2 timeout:(double)arg3 finalizer:(CDUnknownBlockType)arg4;	// IMP=0x00000000000653c1
@end
