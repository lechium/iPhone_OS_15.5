//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol MSPHistoryEntry;

__attribute__((visibility("hidden")))
@interface HistoryEntryRecentsItem : NSObject
{
    id <MSPHistoryEntry> _historyEntry;	// 8 = 0x8
    HistoryEntryRecentsItem *_linkedRecentRoute;	// 16 = 0x10
}

+ (void)removeEntries:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000620da2
+ (void)removeEntries:(id)arg1;	// IMP=0x0010000000620d8e
+ (void)saveCuratedCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000620828
+ (void)saveSearch:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000006200fa
+ (void)saveLineItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000061fbe3
+ (void)saveMapItem:(id)arg1 superseedUUID:(id)arg2 tracksRAPReportingOnly:(_Bool)arg3;	// IMP=0x001000000061f864
+ (void)saveMapItem:(id)arg1 superseedUUID:(id)arg2;	// IMP=0x001000000061f84f
+ (void)saveGeoMapItem:(id)arg1;	// IMP=0x001000000061f575
+ (void)saveOrigin:(id)arg1 destination:(id)arg2 transportType:(int)arg3;	// IMP=0x001000000061f21c
+ (id)saveRoute:(id)arg1;	// IMP=0x001000000061eb0a
+ (void)fetchHistoryItemsMatchingOrigin:(id)arg1 destination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000061e49f
+ (id)historyItemQuery;	// IMP=0x001000000061e438
+ (void)fetchHistoryItemsMatchingMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000061e0c9
- (void).cxx_destruct;	// IMP=0x00200000006214ff
@property(retain, nonatomic) HistoryEntryRecentsItem *linkedRecentRoute; // @synthesize linkedRecentRoute=_linkedRecentRoute;
@property(readonly, nonatomic) id <MSPHistoryEntry> historyEntry; // @synthesize historyEntry=_historyEntry;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000621407
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double timestamp;
- (id)initWithHistoryEntry:(id)arg1;	// IMP=0x00100000006212bc
- (void)updateModel:(id)arg1;	// IMP=0x001000000035ee53
- (id)entryForHistoryPlace:(id)arg1;	// IMP=0x00100000005259ef
- (id)entryForHistoryRoute:(id)arg1;	// IMP=0x001000000052570d
- (id)entryForHistorySearch:(id)arg1;	// IMP=0x0010000000525649
- (id)entryWithTicket:(id)arg1;	// IMP=0x00100000005253e4
- (void)setNavigationInterrupted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000062115a
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
