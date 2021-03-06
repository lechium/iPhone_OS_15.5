//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SearchInfo, _MKPlaceViewController;
@protocol MapsAppTestPlacecardChromeDelegate;

__attribute__((visibility("hidden")))
@interface MapsAppTestPlacecardChrome
{
    SearchInfo *_searchInfo;	// 8 = 0x8
    id <MapsAppTestPlacecardChromeDelegate> _placecardChromeDelegate;	// 16 = 0x10
    _MKPlaceViewController *_placeViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000053164d
@property(nonatomic) __weak _MKPlaceViewController *placeViewController; // @synthesize placeViewController=_placeViewController;
@property(nonatomic) __weak id <MapsAppTestPlacecardChromeDelegate> placecardChromeDelegate; // @synthesize placecardChromeDelegate=_placecardChromeDelegate;
- (void)startPlacecardTest;	// IMP=0x0010000000530e4b
- (void)cleanup:(_Bool)arg1;	// IMP=0x0010000000530dfc
- (_Bool)runTest;	// IMP=0x0010000000530a1b

@end

