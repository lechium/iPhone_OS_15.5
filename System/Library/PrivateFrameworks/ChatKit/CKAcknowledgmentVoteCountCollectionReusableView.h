//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CKAcknowledgmentVoteCountCollectionReusableView : UICollectionReusableView
{
    UILabel *_countLabel;	// 8 = 0x8
}

+ (id)supplementaryViewKind;	// IMP=0x000000000038b544
+ (id)reuseIdentifier;	// IMP=0x000000000038b537
- (void).cxx_destruct;	// IMP=0x000000000038b8f0
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (void)configureWithAcknowledgmentTally:(id)arg1;	// IMP=0x000000000038b7dd
- (void)layoutSubviews;	// IMP=0x000000000038b72f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000038b551

@end
