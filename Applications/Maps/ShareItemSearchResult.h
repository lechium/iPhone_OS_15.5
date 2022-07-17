//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSArray, NSData, NSString, Route, SearchResult, _MKCustomFeatureStore, _ShareCustomFeature;

__attribute__((visibility("hidden")))
@interface ShareItemSearchResult : NSObject
{
    _MKCustomFeatureStore *_customFeatureStore;	// 8 = 0x8
    _ShareCustomFeature *_shareCustomFeature;	// 16 = 0x10
    _Bool _includePrintActivity;	// 24 = 0x18
    NSArray *_activityProviders;	// 32 = 0x20
    SearchResult *_searchResult;	// 40 = 0x28
    CNContact *_contact;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000007f103a
@property(readonly, nonatomic) _Bool includePrintActivity; // @synthesize includePrintActivity=_includePrintActivity;
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) NSData *pushSubmissionData;
@property(readonly, nonatomic) Route *route;
- (void)_setupCustomFeatureForMapItem;	// IMP=0x00100000007f0ee5
- (void)_setupCustomFeatureStore;	// IMP=0x00100000007f0eaa
- (id)mapItem;	// IMP=0x00100000007f0e5a
@property(readonly, nonatomic) NSArray *includedActivityTypes;
@property(readonly, nonatomic) NSArray *excludedActivityTypes;
@property(readonly, nonatomic) NSArray *applicationActivities;
- (void)setActivityProviderDelegate:(id)arg1;	// IMP=0x00100000007f09bb
@property(readonly, nonatomic) NSArray *activityProviders; // @synthesize activityProviders=_activityProviders;
- (id)initWithSearchResult:(id)arg1 contact:(id)arg2 includePrintActivity:(_Bool)arg3;	// IMP=0x00100000007f079a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
