//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKActivityViewController.h>

@class NSString, Route, SearchResult;
@protocol MapsActivityViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MapsActivityViewController : MKActivityViewController
{
    _Bool _embeded;	// 8 = 0x8
    id <MapsActivityViewControllerDelegate> _mapsActivityDelegate;	// 16 = 0x10
    SearchResult *_searchResult;	// 24 = 0x18
    Route *_route;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000002d2650
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
@property(retain, nonatomic) SearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak id <MapsActivityViewControllerDelegate> mapsActivityDelegate; // @synthesize mapsActivityDelegate=_mapsActivityDelegate;
@property(nonatomic) _Bool embeded; // @synthesize embeded=_embeded;
- (id)airdropURLJSONForMapActivity:(id)arg1;	// IMP=0x00100000002d2447
- (id)titleForMapActivity:(id)arg1;	// IMP=0x00100000002d2192
- (id)urlForMapActivity:(id)arg1;	// IMP=0x00100000002d2042
- (id)annotationViewForMapActivity:(id)arg1;	// IMP=0x00100000002d1efc
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;	// IMP=0x00100000002d1c52
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(_Bool)arg3;	// IMP=0x00100000002d1c4c
- (id)initWithRoute:(id)arg1;	// IMP=0x00100000002d1c35
- (id)initWithRoute:(id)arg1 showRoutingApps:(_Bool)arg2;	// IMP=0x00100000002d198b
- (id)initWithSearchResult:(id)arg1 contact:(id)arg2 print:(_Bool)arg3;	// IMP=0x00100000002d1862
- (id)initWithSearchResult:(id)arg1;	// IMP=0x00000000002d17eb
- (id)initWithShareItem:(id)arg1;	// IMP=0x00100000002d170f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

