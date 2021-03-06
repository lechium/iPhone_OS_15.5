//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVAuxiliaryViewSelecting-Protocol.h>

@class NSString, UIView;
@protocol TVAuxiliaryViewSelecting;

__attribute__((visibility("hidden")))
@interface _TVCollectionViewCell <TVAuxiliaryViewSelecting>
{
    UIView<TVAuxiliaryViewSelecting> *_selectingView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000037163
@property(nonatomic) __weak UIView<TVAuxiliaryViewSelecting> *selectingView; // @synthesize selectingView=_selectingView;
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x00000000000370e5
- (void)layoutSubviews;	// IMP=0x0000000000036e6e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

