//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IdentifierPath, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HomeOutlineSectionBuilderStack : NSObject
{
    NSMutableArray *_items;	// 8 = 0x8
    NSMutableArray *_identifiers;	// 16 = 0x10
    NSMutableArray *_indices;	// 24 = 0x18
    IdentifierPath *_topIdentifierPath;	// 32 = 0x20
    unsigned long long _depth;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000009b7775
@property(readonly, nonatomic) NSArray *indices; // @synthesize indices=_indices;
@property(readonly, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
// Error: Property attributes should begin with the type ('T') attribute, property name: depth
// Property attributes: (null)

@property(readonly, nonatomic) long long topIndex;
@property(readonly, nonatomic) IdentifierPath *topIdentifierPath;
@property(readonly, nonatomic) id parentItem;
- (void)_pop;	// IMP=0x00100000009b75ba
- (void)_setTopIdentifier:(id)arg1;	// IMP=0x00100000009b7574
- (void)_pushItem:(id)arg1 index:(long long)arg2;	// IMP=0x00100000009b74d8
- (id)initWithSectionIdentifier:(id)arg1 sectionIndex:(long long)arg2;	// IMP=0x00100000009b72c5

@end

