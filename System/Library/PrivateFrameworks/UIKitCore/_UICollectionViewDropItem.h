//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionViewDropItem-Protocol.h>

@class NSIndexPath, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDropItem : NSObject <_UICollectionViewDropItem>
{
    UIDragItem *_dragItem;	// 8 = 0x8
    NSIndexPath *_sourceIndexPath;	// 16 = 0x10
    struct CGSize _previewSize;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003a1c39
@property(retain, nonatomic) NSIndexPath *sourceIndexPath; // @synthesize sourceIndexPath=_sourceIndexPath;
@property(nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(retain, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
@property(readonly, copy) NSString *description;
- (id)initWithDragItem:(id)arg1 previewSize:(struct CGSize)arg2 sourceIndexPath:(id)arg3;	// IMP=0x00000000003a1971

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
