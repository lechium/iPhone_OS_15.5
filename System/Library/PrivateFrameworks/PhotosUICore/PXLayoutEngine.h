//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXMutableLayoutEngine-Protocol.h>

@class NSString, PXLayoutGenerator, PXLayoutSnapshot;
@protocol OS_dispatch_queue, PXLayoutDataSourceChangeDetails, PXLayoutEngineDataSourceSnapshot, PXLayoutEngineDelegate, PXLayoutItem;

@interface PXLayoutEngine : NSObject <PXMutableLayoutEngine>
{
    NSObject<OS_dispatch_queue> *_internalWorkQueue;	// 8 = 0x8
    struct {
        _Bool layoutData;
        _Bool layoutSnapshot;
    } _needsUpdateFlags;	// 16 = 0x10
    id <PXLayoutEngineDelegate> _delegate;	// 24 = 0x18
    PXLayoutSnapshot *_layoutSnapshot;	// 32 = 0x20
    id <PXLayoutEngineDataSourceSnapshot> _dataSourceSnapshot;	// 40 = 0x28
    id <PXLayoutItem> _seedItem;	// 48 = 0x30
    PXLayoutGenerator *_layoutGenerator;	// 56 = 0x38
    id <PXLayoutDataSourceChangeDetails> _changeDetails;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000796d9d
@property(retain, nonatomic) id <PXLayoutDataSourceChangeDetails> changeDetails; // @synthesize changeDetails=_changeDetails;
@property(retain, nonatomic) PXLayoutGenerator *layoutGenerator; // @synthesize layoutGenerator=_layoutGenerator;
@property(readonly, nonatomic) id <PXLayoutItem> seedItem; // @synthesize seedItem=_seedItem;
@property(readonly, nonatomic) id <PXLayoutEngineDataSourceSnapshot> dataSourceSnapshot; // @synthesize dataSourceSnapshot=_dataSourceSnapshot;
@property(retain, nonatomic) PXLayoutSnapshot *layoutSnapshot; // @synthesize layoutSnapshot=_layoutSnapshot;
@property(nonatomic) __weak id <PXLayoutEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (id)computeLayoutSnapshot;	// IMP=0x0000000000796ca5
- (void)updateLayoutDataWithChangeDetails:(id)arg1;	// IMP=0x0000000000796c2b
- (_Bool)canComputeLayoutSnapshot;	// IMP=0x0000000000796c12
- (void)_publishChanges;	// IMP=0x0000000000796b87
- (void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;	// IMP=0x0000000000796a3a
- (void)setDataSourceSnapshot:(id)arg1;	// IMP=0x00000000007969fe
- (void)setSeedItem:(id)arg1;	// IMP=0x0000000000796996
- (void)_updateLayoutDataIfNeeded;	// IMP=0x0000000000796953
- (void)invalidateLayoutData;	// IMP=0x000000000079693d
- (void)_updateLayoutSnapshotIfNeeded;	// IMP=0x00000000007968d3
- (void)invalidateLayoutSnapshot;	// IMP=0x00000000007968bd
- (void)_updateIfNeeded;	// IMP=0x00000000007967fb
- (void)_setNeedsUpdate;	// IMP=0x00000000007967f5
- (_Bool)_needsUpdate;	// IMP=0x00000000007967e0
- (id)performChangesAndWait:(CDUnknownBlockType)arg1;	// IMP=0x0000000000796746
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000796687
- (id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2;	// IMP=0x0000000000796576
- (id)init;	// IMP=0x0000000000796568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
