//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <FamilyCircleUI/FAInviteViewProtocol-Protocol.h>

@class NSString, UILabel;

@interface FAChildTransferInviteView : UIView <FAInviteViewProtocol>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_primaryLabel;	// 16 = 0x10
    UILabel *_detailsLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000014eef
- (double)_heightForTitle:(id)arg1 width:(double)arg2;	// IMP=0x0000000000014dd3
- (double)_heightForText:(id)arg1 width:(double)arg2;	// IMP=0x0000000000014cb7
- (id)_labelWithCenteredText:(id)arg1;	// IMP=0x0000000000014bd7
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x0000000000014a62
- (void)layoutSubviews;	// IMP=0x000000000001466c
- (id)initWithInvite:(id)arg1;	// IMP=0x00000000000141d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

