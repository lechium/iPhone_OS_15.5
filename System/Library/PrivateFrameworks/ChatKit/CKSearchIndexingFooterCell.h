//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

#import <ChatKit/CKSearchResultSupplementryCell-Protocol.h>

@class NSString, UILabel;

@interface CKSearchIndexingFooterCell : UICollectionReusableView <CKSearchResultSupplementryCell>
{
    NSString *_titleString;	// 8 = 0x8
    NSString *_subtitleString;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_subtitleLabel;	// 32 = 0x20
    struct UIEdgeInsets marginInsets;	// 40 = 0x28
}

+ (double)desiredZPosition;	// IMP=0x000000000019edfe
+ (id)reuseIdentifier;	// IMP=0x000000000019edf1
+ (id)supplementaryViewType;	// IMP=0x000000000019ede4
- (void).cxx_destruct;	// IMP=0x000000000019fa41
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets;
@property(nonatomic) _Bool titleLabelHidden;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x000000000019f5aa
- (void)layoutSubviews;	// IMP=0x000000000019f080
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000019ee07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

