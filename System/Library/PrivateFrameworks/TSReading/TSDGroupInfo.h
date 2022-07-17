//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSDMutableContainerInfo-Protocol.h>
#import <TSReading/TSDSelectionStatisticsContributor-Protocol.h>
#import <TSReading/TSKDocumentObject-Protocol.h>

@class NSMutableArray, NSObject, NSString, TSDInfoGeometry, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDGroupInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor>
{
    NSMutableArray *mChildInfos;	// 104 = 0x68
    _Bool mIsInDocument;	// 112 = 0x70
}

+ (id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(_Bool *)arg4;	// IMP=0x00000000001e417b
+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3;	// IMP=0x00000000001e4166
+ (id)groupGeometryFromChildrenInfos:(id)arg1;	// IMP=0x00000000001e2c46
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;	// IMP=0x00000000001e4687
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;	// IMP=0x00000000001e40e1
- (long long)mixingTypeWithObject:(id)arg1;	// IMP=0x00000000001e3ea7
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;	// IMP=0x00000000001e3d64
- (void)wasRemovedFromDocumentRoot:(id)arg1;	// IMP=0x00000000001e3c26
- (void)willBeRemovedFromDocumentRoot:(id)arg1;	// IMP=0x00000000001e3acf
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;	// IMP=0x00000000001e3968
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;	// IMP=0x00000000001e380d
- (void)acceptVisitor:(id)arg1;	// IMP=0x00000000001e37f2
- (id)childEnumerator;	// IMP=0x00000000001e37d5
- (void)didCopy;	// IMP=0x00000000001e37a4
- (void)willCopyWithOtherDrawables:(id)arg1;	// IMP=0x00000000001e3764
- (void)ensureGeometryFitsChildren;	// IMP=0x00000000001e317d
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;	// IMP=0x00000000001e3053
- (void)removeChildInfo:(id)arg1;	// IMP=0x00000000001e303f
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;	// IMP=0x00000000001e2ec8
- (id)ungroupedGeometryForChildInfo:(id)arg1;	// IMP=0x00000000001e2b66
- (id)groupedGeometryForChildInfo:(id)arg1;	// IMP=0x00000000001e2b1b
- (void)removeAllChildrenInDocument:(_Bool)arg1;	// IMP=0x00000000001e2862
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;	// IMP=0x00000000001e25b0
- (void)insertChildInfo:(id)arg1 above:(id)arg2;	// IMP=0x00000000001e2552
- (void)insertChildInfo:(id)arg1 below:(id)arg2;	// IMP=0x00000000001e24f7
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000001e2309
- (void)addChildInfo:(id)arg1;	// IMP=0x00000000001e22c1
- (void)setChildInfos:(id)arg1;	// IMP=0x00000000001e1b49
- (id)childInfos;	// IMP=0x00000000001e1b38
- (id)allNestedChildrenInfosIncludingGroups;	// IMP=0x00000000001e1972
- (id)onlyChild;	// IMP=0x00000000001e192e
- (id)allNestedChildrenInfos;	// IMP=0x00000000001e176e
- (id)copyWithContext:(id)arg1;	// IMP=0x00000000001e1508
- (Class)repClass;	// IMP=0x00000000001e14f7
- (Class)layoutClass;	// IMP=0x00000000001e14e6
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (_Bool)aspectRatioLocked;	// IMP=0x00000000001e13b3
- (_Bool)canAspectRatioLockBeChangedByUser;	// IMP=0x00000000001e13ab
- (void)dealloc;	// IMP=0x00000000001e125c

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo; // @dynamic parentInfo;
@property(readonly) Class superclass;

@end
