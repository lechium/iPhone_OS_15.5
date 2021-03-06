//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface UITextViewPrintFormatter
{
    struct {
        unsigned int initializedUsedRects:1;
    } _textViewPrintFormatterFlags;	// 8 = 0x8
    NSArray *_pageData;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c74565
- (long long)textAlignment;	// IMP=0x0000000000c74521
- (void)setTextAlignment:(long long)arg1;	// IMP=0x0000000000c744c4
- (id)color;	// IMP=0x0000000000c74474
- (void)setColor:(id)arg1;	// IMP=0x0000000000c74402
- (id)font;	// IMP=0x0000000000c743b2
- (void)setFont:(id)arg1;	// IMP=0x0000000000c74333
- (id)attributedText;	// IMP=0x0000000000c742e3
- (void)setAttributedText:(id)arg1;	// IMP=0x0000000000c74264
- (id)text;	// IMP=0x0000000000c74214
- (void)setText:(id)arg1;	// IMP=0x0000000000c74195
- (id)_textView;	// IMP=0x0000000000c74183
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;	// IMP=0x0000000000c73d4a
- (struct CGRect)rectForPageAtIndex:(long long)arg1;	// IMP=0x0000000000c73c6d
- (long long)_recalcPageCount;	// IMP=0x0000000000c73c1e
- (id)_pageData;	// IMP=0x0000000000c7354c

@end

