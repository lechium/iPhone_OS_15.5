//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGHighlightItemListModelWriter-Protocol.h>
#import <PhotosGraph/PGHighlightItemModelReader-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, PHPhotoLibrary;

@interface PGPhotosHighlightItemModelManager : NSObject <PGHighlightItemModelReader, PGHighlightItemListModelWriter>
{
    unsigned short _kind;	// 8 = 0x8
    PHPhotoLibrary *_library;	// 16 = 0x10
    NSMutableDictionary *_visibilityStateByDayHighlighItemUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000263b68
@property(readonly, nonatomic) NSMutableDictionary *visibilityStateByDayHighlighItemUUID; // @synthesize visibilityStateByDayHighlighItemUUID=_visibilityStateByDayHighlighItemUUID;
@property(readonly, nonatomic) unsigned short kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) PHPhotoLibrary *library; // @synthesize library=_library;
- (void)addVisibleHighlight:(id)arg1 inMonth:(id)arg2;	// IMP=0x0000000000263874
@property(readonly, nonatomic) NSSet *highlightUUIDsWithVisibilityStateChange;
- (unsigned short)visibilityStateForHighlightItem:(id)arg1;	// IMP=0x0000000000263750
- (void)setVisibilityState:(unsigned short)arg1 forHighlightItem:(id)arg2;	// IMP=0x000000000026369d
- (id)fetchChildHighlightItemsForHighlightItem:(id)arg1;	// IMP=0x00000000002634d8
- (id)fetchParentHighlightItemsForHighlightItems:(id)arg1;	// IMP=0x0000000000263250
- (id)consumeHighlightItemList:(id)arg1;	// IMP=0x0000000000263145
- (id)initWithLibrary:(id)arg1 forKind:(unsigned short)arg2;	// IMP=0x00000000002630a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
