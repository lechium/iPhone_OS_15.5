//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutRow : NSObject
{
    _Bool _isValid;	// 8 = 0x8
    _Bool _complete;	// 9 = 0x9
    int _verticalAlignement;	// 12 = 0xc
    int _horizontalAlignement;	// 16 = 0x10
    _Bool _fixedItemSize;	// 20 = 0x14
    _UIFlowLayoutSection *_section;	// 24 = 0x18
    long long _index;	// 32 = 0x20
    NSMutableArray *_items;	// 40 = 0x28
    double _availableSpace;	// 48 = 0x30
    struct CGSize _rowSize;	// 56 = 0x38
    struct CGRect _rowFrame;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003967e0
@property(nonatomic) double availableSpace; // @synthesize availableSpace=_availableSpace;
@property(nonatomic) _Bool fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) struct CGRect rowFrame; // @synthesize rowFrame=_rowFrame;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) __weak _UIFlowLayoutSection *section; // @synthesize section=_section;
- (long long)indexOfNearestItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000396314
- (id)copyFromSection:(id)arg1;	// IMP=0x000000000039607b
- (id)snapshot;	// IMP=0x0000000000395e4d
- (void)removeItemAtIndex:(long long)arg1;	// IMP=0x0000000000395e26
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000395e01
- (void)addItem:(id)arg1 atEnd:(_Bool)arg2;	// IMP=0x0000000000395d82
- (void)layoutRow;	// IMP=0x00000000003952ea
- (void)invalidate;	// IMP=0x00000000003952d0
- (id)init;	// IMP=0x0000000000395257

@end
