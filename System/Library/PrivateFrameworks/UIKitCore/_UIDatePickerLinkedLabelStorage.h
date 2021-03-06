//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSHashTable, UILabel;

__attribute__((visibility("hidden")))
@interface _UIDatePickerLinkedLabelStorage : NSObject
{
    UILabel *_sizingLabel;	// 8 = 0x8
    NSHashTable *_attachedLabels;	// 16 = 0x10
    unsigned long long _currentPriority;	// 24 = 0x18
    NSCache *_sizeCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000069d3b0
- (void)_setCachedSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x000000000069d31c
- (_Bool)_cachedSizeForKey:(id)arg1 size:(struct CGSize *)arg2;	// IMP=0x000000000069d2b9
- (struct CGSize)_sizeForText:(id)arg1 font:(id)arg2 height:(double)arg3 overrideAttributes:(id)arg4;	// IMP=0x000000000069d01a
- (unsigned long long)_currentPriority;	// IMP=0x000000000069d010
- (unsigned long long)_requiresLowerPriority:(id)arg1;	// IMP=0x000000000069cfeb
- (void)_resetPriority;	// IMP=0x000000000069cfcf
- (void)_notifyAllLabelsExcept:(id)arg1;	// IMP=0x000000000069ce8a
- (void)_detachLabel:(id)arg1;	// IMP=0x000000000069ce58
- (void)_attachLabel:(id)arg1;	// IMP=0x000000000069ce26
- (id)init;	// IMP=0x000000000069cd6f

@end

