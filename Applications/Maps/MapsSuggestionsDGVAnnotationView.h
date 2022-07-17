//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKMarkerAnnotationView.h>

@class UITableView, UIView;

__attribute__((visibility("hidden")))
@interface MapsSuggestionsDGVAnnotationView : MKMarkerAnnotationView
{
    UIView *_calloutView;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    _Bool _isSelected;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000b0cd04
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (double)_tableViewHeight;	// IMP=0x0010000000b0cc3f
- (void)_setCalloutConstraints;	// IMP=0x0010000000b0c80f
- (void)reloadCalloutTableView;	// IMP=0x0010000000b0c7f2
- (void)setCalloutTableViewDelegate:(id)arg1;	// IMP=0x0010000000b0c7d5
- (void)setCalloutTableViewDataSource:(id)arg1;	// IMP=0x0010000000b0c7b8
- (void)hideCalloutView;	// IMP=0x0010000000b0c77d
- (void);	// IMP=0x0010000000b0c61a
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000b0c584

@end
