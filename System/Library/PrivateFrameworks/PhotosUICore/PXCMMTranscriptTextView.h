//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, PXUpdater, UILabel;

@interface PXCMMTranscriptTextView : UIView
{
    PXUpdater *_updater;	// 8 = 0x8
    UILabel *_primaryLabel;	// 16 = 0x10
    UILabel *_secondaryLabel;	// 24 = 0x18
    NSString *_primaryText;	// 32 = 0x20
    NSString *_secondaryText;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000004bfe4d
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void)_updateSecondaryLabel;	// IMP=0x00000000004bfc99
- (void)_updatePrimaryLabel;	// IMP=0x00000000004bfb8d
- (struct CGSize)_performLayoutInSize:(struct CGSize)arg1 minimizingSize:(_Bool)arg2 updateSubviewFrames:(_Bool)arg3;	// IMP=0x00000000004bf7ec
- (void)layoutSubviews;	// IMP=0x00000000004bf77b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004bf765
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000004bf583
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004bf500

@end
