//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class EKEventMapDetailItem;

@interface EKEventMapCell : UITableViewCell
{
    _Bool _currentlyLoading;	// 8 = 0x8
    _Bool _mapViewSetup;	// 9 = 0x9
    EKEventMapDetailItem *_detailItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000146ab6
@property(nonatomic) _Bool mapViewSetup; // @synthesize mapViewSetup=_mapViewSetup;
@property(nonatomic) _Bool currentlyLoading; // @synthesize currentlyLoading=_currentlyLoading;
@property(nonatomic) __weak EKEventMapDetailItem *detailItem; // @synthesize detailItem=_detailItem;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000146972
- (void)layoutSubviews;	// IMP=0x00000000001468fa
- (void)_drawSeparatorInRect:(struct CGRect)arg1;	// IMP=0x00000000001468f4
- (void)_drawContentInRect:(struct CGRect)arg1 selected:(_Bool)arg2;	// IMP=0x00000000001468ee

@end
