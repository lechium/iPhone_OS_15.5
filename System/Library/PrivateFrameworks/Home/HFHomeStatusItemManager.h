//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFStatusItemProvider, HMRoom, NSTimer;

@interface HFHomeStatusItemManager
{
    HMRoom *_room;	// 8 = 0x8
    HFStatusItemProvider *_statusItemProvider;	// 16 = 0x10
    NSTimer *_invalidationTimer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001df192
@property(retain, nonatomic) NSTimer *invalidationTimer; // @synthesize invalidationTimer=_invalidationTimer;
@property(retain, nonatomic) HFStatusItemProvider *statusItemProvider; // @synthesize statusItemProvider=_statusItemProvider;
@property(retain, nonatomic) HMRoom *room; // @synthesize room=_room;
- (void)_invalidateItemsIfNecessary;	// IMP=0x00000000001deefb
- (void)_updateInvalidationTimer;	// IMP=0x00000000001de77d
- (id)statusItems;	// IMP=0x00000000001de6db
- (_Bool)shouldPerformInitialLoadOnMainThread;	// IMP=0x00000000001de6d3
- (id)matchingItemForHomeKitObject:(id)arg1;	// IMP=0x00000000001de3fd
- (_Bool)_requiresNotificationsForCharacteristic:(id)arg1;	// IMP=0x00000000001de3f5
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;	// IMP=0x00000000001de3b4
- (id)_itemsToHideInSet:(id)arg1;	// IMP=0x00000000001de14f
- (CDUnknownBlockType)_comparatorForSectionIdentifier:(id)arg1;	// IMP=0x00000000001ddd33
- (id)_buildItemProvidersForHome:(id)arg1;	// IMP=0x00000000001ddc18
- (void)updateNeedsInvalidation:(_Bool)arg1 forStatusItem:(id)arg2;	// IMP=0x00000000001ddaf9
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;	// IMP=0x00000000001dda44
- (id)initWithRoom:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000001dd9ca

@end
