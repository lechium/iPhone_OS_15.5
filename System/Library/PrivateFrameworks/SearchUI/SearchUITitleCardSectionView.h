//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NUIContainerBoxView, TLKLabel;

@interface SearchUITitleCardSectionView
{
    TLKLabel *_label;	// 8 = 0x8
    NUIContainerBoxView *_containerView;	// 16 = 0x10
}

+ (_Bool)supportsRecyclingForCardSection:(id)arg1;	// IMP=0x000000000006706a
- (void).cxx_destruct;	// IMP=0x000000000006743c
@property(retain, nonatomic) NUIContainerBoxView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) TLKLabel *label; // @synthesize label=_label;
- (void)updateWithRowModel:(id)arg1;	// IMP=0x000000000006724a
- (id)setupContentView;	// IMP=0x0000000000067072

@end
