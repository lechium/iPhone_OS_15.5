//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface OBTemplateHeaderDetailLabel
{
    struct _NSRange _titleRange;	// 8 = 0x8
    struct _NSRange _bodyRange;	// 24 = 0x18
}

@property(nonatomic) struct _NSRange bodyRange; // @synthesize bodyRange=_bodyRange;
@property(nonatomic) struct _NSRange titleRange; // @synthesize titleRange=_titleRange;
- (void)updateTextAlignment;	// IMP=0x0000000000046f7a
- (void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2;	// IMP=0x0000000000046deb

@end
