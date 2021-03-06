//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKPaletteEdgeLocating-Protocol.h>

@class NSString;

@interface PKDragIndicatorView : UIView <PKPaletteEdgeLocating>
{
    unsigned long long _edgeLocation;	// 8 = 0x8
}

@property(nonatomic) unsigned long long edgeLocation; // @synthesize edgeLocation=_edgeLocation;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000016059f
- (void)layoutSubviews;	// IMP=0x00000000001604e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

