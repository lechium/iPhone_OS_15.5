//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

#import <MessageUI/MFReusableIdentifiable-Protocol.h>

@class NSString, UIButton, UILabel;

@interface MFPhotoPickerSectionHeaderView : UICollectionReusableView <MFReusableIdentifiable>
{
    UILabel *_titleLabel;	// 8 = 0x8
    UIButton *_actionButton;	// 16 = 0x10
}

+ (id)reusableIdentifier;	// IMP=0x00000000000ed1b9
- (void).cxx_destruct;	// IMP=0x00000000000edaa8
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)addAllPhotosTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000000ed9ca
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ed1c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

