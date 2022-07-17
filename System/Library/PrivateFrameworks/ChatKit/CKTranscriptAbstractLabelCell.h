//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface CKTranscriptAbstractLabelCell
{
    _Bool _wantsContactImageLayout;	// 8 = 0x8
    _Bool _wantsOffsetForReplyLine;	// 9 = 0x9
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 attributedText:(id)arg2 displayScale:(double)arg3;	// IMP=0x000000000040e9f5
@property(nonatomic) _Bool wantsOffsetForReplyLine; // @synthesize wantsOffsetForReplyLine=_wantsOffsetForReplyLine;
@property(nonatomic) _Bool wantsContactImageLayout; // @synthesize wantsContactImageLayout=_wantsContactImageLayout;
- (id)label;	// IMP=0x000000000040ecb1
- (id)cellView;	// IMP=0x000000000040ec09
@property(copy, nonatomic) NSAttributedString *attributedText;
- (_Bool)wantsDrawerLayout;	// IMP=0x000000000040e9e3
- (void)prepareForReuse;	// IMP=0x000000000040e9a0
- (void)clearFilters;	// IMP=0x000000000040e8e8
- (void)addFilter:(id)arg1;	// IMP=0x000000000040e840
- (struct CGRect)contentAlignmentRect;	// IMP=0x000000000040e741
- (void)layoutSubviewsForAlignmentContents;	// IMP=0x000000000040e400
- (void)layoutSubviewsForContents;	// IMP=0x000000000040e0d2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000040e064

@end
