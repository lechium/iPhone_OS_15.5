//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>

@class NSArray, NSString;
@protocol GEOMapItemVenueContents;

__attribute__((visibility("hidden")))
@interface MKPlaceVenueInfoContentsViewController <MKModuleViewControllerProtocol>
{
    id <GEOMapItemVenueContents> _venueContents;	// 8 = 0x8
    NSArray *_labels;	// 16 = 0x10
}

+ (_Bool)isVisibleWithMapItem:(id)arg1;	// IMP=0x00000000001635b4
+ (id)venueInfoContentsViewControllerWithMapItem:(id)arg1;	// IMP=0x000000000016347e
- (void).cxx_destruct;	// IMP=0x0000000000164732
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) id <GEOMapItemVenueContents> venueContents; // @synthesize venueContents=_venueContents;
- (void)infoCardThemeChanged;	// IMP=0x00000000001646a7
- (id)_labelFont;	// IMP=0x0000000000164650
- (void)_contentSizeDidChange;	// IMP=0x000000000016463e
- (void)_addPaddingRowToRows:(id)arg1;	// IMP=0x0000000000164523
- (void)updateLabelsProperties;	// IMP=0x000000000016434e
- (id)rowWithLeftLabel:(id)arg1 rightLabel:(id)arg2;	// IMP=0x0000000000163d7e
- (id)labelWithTitle:(id)arg1;	// IMP=0x0000000000163cb5
- (void)_updateRows;	// IMP=0x00000000001637f8
- (void)viewDidLoad;	// IMP=0x0000000000163693
- (id)initWithVenueContents:(id)arg1;	// IMP=0x0000000000163542
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000163476

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

