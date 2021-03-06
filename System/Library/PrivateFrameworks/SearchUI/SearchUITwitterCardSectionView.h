//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchUI/NUIContainerViewDelegate-Protocol.h>

@class NSString, SearchUIImageView, TLKStackView;

@interface SearchUITwitterCardSectionView <NUIContainerViewDelegate>
{
    SearchUIImageView *_pictureView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000474f7
@property(retain, nonatomic) SearchUIImageView *pictureView; // @synthesize pictureView=_pictureView;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;	// IMP=0x000000000004737c
- (id)setupContentView;	// IMP=0x00000000000472c5
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;	// IMP=0x0000000000046400

// Remaining properties
@property(retain, nonatomic) TLKStackView *contentView; // @dynamic contentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

