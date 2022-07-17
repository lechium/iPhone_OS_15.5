//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CollectionsFilterSizeController : NSObject
{
    long long _context;	// 8 = 0x8
    double _defaultFilterHeight;	// 16 = 0x10
    long long _displayStyle;	// 24 = 0x18
    struct UIEdgeInsets _filterPillInset;	// 32 = 0x20
    struct UIEdgeInsets _sectionInset;	// 64 = 0x40
}

@property(nonatomic) long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property(nonatomic) double defaultFilterHeight; // @synthesize defaultFilterHeight=_defaultFilterHeight;
@property(nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) struct UIEdgeInsets filterPillInset; // @synthesize filterPillInset=_filterPillInset;
- (double)defaultHeight;	// IMP=0x00100000009de926
- (double)minimumInterItemSpacingForSectionAtIndex:(long long)arg1;	// IMP=0x00100000009de905
- (double)minimumLineSpacingForSectionAtIndex:(long long)arg1;	// IMP=0x00100000009de8da
- (struct UIEdgeInsets)insetForFilterAtIndex:(long long)arg1;	// IMP=0x00100000009de8bb
- (struct CGSize)sizeForFilter:(id)arg1;	// IMP=0x00100000009de744
- (id)initWithCollectionsFilterDisplayStyle:(long long)arg1 inContext:(long long)arg2;	// IMP=0x00100000009de572

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
// Error: Property attributes should begin with the type ('T') attribute, property name: superclass
// Property attributes: (null)


@end
