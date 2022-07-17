//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface SKUISettingsObjectStore : NSObject
{
    NSMutableOrderedSet *_allObjects;	// 8 = 0x8
    _Bool _dirty;	// 16 = 0x10
    NSMutableOrderedSet *_visibleObjects;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000240a0f
- (void)_updateVisibleOrder;	// IMP=0x0000000000240865
- (id)description;	// IMP=0x00000000002405d0
- (id)visibleObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000240595
- (void)revealObject:(id)arg1;	// IMP=0x000000000024052e
- (void)removeObject:(id)arg1;	// IMP=0x00000000002404ce
- (_Bool)objectIsVisible:(id)arg1;	// IMP=0x00000000002404a7
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000240491
- (unsigned long long)numberOfVisibleObjects;	// IMP=0x000000000024047b
- (unsigned long long)numberOfObjects;	// IMP=0x0000000000240465
- (unsigned long long)indexOfVisibleObject:(id)arg1;	// IMP=0x0000000000240411
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000002403fb
- (void)hideObject:(id)arg1;	// IMP=0x00000000002403e5
- (void)enumerateVisibleObjects:(CDUnknownBlockType)arg1;	// IMP=0x0000000000240398
- (void)enumerateObjects:(CDUnknownBlockType)arg1;	// IMP=0x0000000000240382
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000024035b
- (void)addObject:(id)arg1 hidden:(_Bool)arg2;	// IMP=0x0000000000240301
- (id)allObjects;	// IMP=0x00000000002402e3
- (id)init;	// IMP=0x000000000024026a

@end
