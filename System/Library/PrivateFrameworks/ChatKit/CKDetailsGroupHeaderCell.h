//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDetailsAvatarPancakeView, NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface CKDetailsGroupHeaderCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subTitleLabel;	// 16 = 0x10
    NSArray *_avatarViews;	// 24 = 0x18
    CKDetailsAvatarPancakeView *_avatarView;	// 32 = 0x20
}

+ (id)reuseIdentifier;	// IMP=0x00000000002dd0fe
- (void).cxx_destruct;	// IMP=0x00000000002dfa19
@property(retain, nonatomic) CKDetailsAvatarPancakeView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) NSArray *avatarViews; // @synthesize avatarViews=_avatarViews;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;	// IMP=0x00000000002df916
- (void)configureCellIconForCollapsedState:(_Bool)arg1;	// IMP=0x00000000002df72a
- (void)addConstraints;	// IMP=0x00000000002de0ed
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002ddde9
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 participants:(id)arg3;	// IMP=0x00000000002dd175
- (void)prepareForReuse;	// IMP=0x00000000002dd10b

@end
