//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AddressBookAddress, CRRecentContact, MKMapItem, MapItemResolver, MapsAnalyticsHelper, NSItemProvider, NSProgress, NSString, SearchResult, UIView;
@protocol DragAndDropMapItemObserver, NSItemProviderWriting, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface DragAndDropMapItem : NSObject
{
    MapItemResolver *_resolver;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
    AddressBookAddress *_address;	// 24 = 0x18
    CRRecentContact *_recentContact;	// 32 = 0x20
    SearchResult *_searchResult;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_resolveGroup;	// 48 = 0x30
    MKMapItem *_resolvedMapItem;	// 56 = 0x38
    NSProgress *_resolveProgress;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    id <DragAndDropMapItemObserver> _observer;	// 80 = 0x50
    id _presentationObject;	// 88 = 0x58
    MKMapItem *_originalMapItem;	// 96 = 0x60
    UIView *_sourceView;	// 104 = 0x68
    MapsAnalyticsHelper *_analyticsHelper;	// 112 = 0x70
    struct CLLocationCoordinate2D _sourceCoordinate;	// 120 = 0x78
}

+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x00200000000c0154
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x00100000000c0024
+ (id)dragAndDropItemWithObject:(id)arg1;	// IMP=0x00100000000bee8d
- (void).cxx_destruct;	// IMP=0x00200000000c08ac
@property(readonly, nonatomic) MapsAnalyticsHelper *analyticsHelper; // @synthesize analyticsHelper=_analyticsHelper;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(nonatomic) struct CLLocationCoordinate2D sourceCoordinate; // @synthesize sourceCoordinate=_sourceCoordinate;
@property(readonly, nonatomic) MKMapItem *resolvedMapItem; // @synthesize resolvedMapItem=_resolvedMapItem;
@property(readonly, nonatomic) MKMapItem *originalMapItem; // @synthesize originalMapItem=_originalMapItem;
@property(readonly, nonatomic) id presentationObject; // @synthesize presentationObject=_presentationObject;
@property(nonatomic) __weak id <DragAndDropMapItemObserver> observer; // @synthesize observer=_observer;
@property(readonly, nonatomic) MKMapItem *draggedMapItem;
- (id)traitsForMapItemResolver:(id)arg1;	// IMP=0x00100000000c07c8
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c015c
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) id <NSItemProviderWriting> itemProviderWriting;
- (void)_resolveMapItem;	// IMP=0x00100000000bfbae
- (void)_didResolveMapItem:(id)arg1;	// IMP=0x00100000000bfb36
- (id)initWithPersonalizedItem:(id)arg1;	// IMP=0x00100000000bf914
- (id)initWithRecentContact:(id)arg1;	// IMP=0x00100000000bf85c
- (id)initWithAddress:(id)arg1;	// IMP=0x00100000000bf74e
- (id)initWithMapItem:(id)arg1;	// IMP=0x00100000000bf672
- (id)initWithLabelMarker:(id)arg1;	// IMP=0x00100000000bf4a9
- (id)init;	// IMP=0x00100000000bf47e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
