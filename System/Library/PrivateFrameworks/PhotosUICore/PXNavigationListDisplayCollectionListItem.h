//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PXDisplayCollectionList;

@interface PXNavigationListDisplayCollectionListItem
{
    _Bool _draggable;	// 48 = 0x30
    _Bool _reorderable;	// 49 = 0x31
    _Bool _renamable;	// 50 = 0x32
    _Bool _deletable;	// 51 = 0x33
    _Bool _expandable;	// 52 = 0x34
    _Bool _expanded;	// 53 = 0x35
    NSString *_glyphImageName;	// 56 = 0x38
    id <PXDisplayCollectionList> _collection;	// 64 = 0x40
    long long _indentationLevel;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000003c0d42
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(readonly, nonatomic) id <PXDisplayCollectionList> collection; // @synthesize collection=_collection;
- (_Bool)isExpandable;	// IMP=0x00000000003c0cdf
- (_Bool)isDeletable;	// IMP=0x00000000003c0ccf
- (_Bool)isRenamable;	// IMP=0x00000000003c0cbf
@property(nonatomic, getter=isReorderable) _Bool reorderable; // @synthesize reorderable=_reorderable;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable=_draggable;
- (id)glyphImageName;	// IMP=0x00000000003c0c6e
- (id)representedObject;	// IMP=0x00000000003c0c5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003c0add
- (id)initWithIdentifier:(id)arg1 displayCollectionList:(id)arg2 title:(id)arg3 itemCount:(long long)arg4;	// IMP=0x00000000003c098a

@end

