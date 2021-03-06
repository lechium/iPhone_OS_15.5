//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SearchUIImageView, SearchUILabel;

@interface SearchUIMiniCardSectionView
{
    SearchUIImageView *_imageView;	// 8 = 0x8
    SearchUILabel *_titleLabel;	// 16 = 0x10
    SearchUILabel *_subtitleLabel;	// 24 = 0x18
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;	// IMP=0x0000000000072b32
- (void).cxx_destruct;	// IMP=0x0000000000073155
@property(retain) SearchUILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain) SearchUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) SearchUIImageView *imageView; // @synthesize imageView=_imageView;
- (struct UIEdgeInsets)layoutMargins;	// IMP=0x00000000000730c2
- (void)updateWithRowModel:(id)arg1;	// IMP=0x0000000000072f17
- (id)setupContentView;	// IMP=0x0000000000072b3a

@end

