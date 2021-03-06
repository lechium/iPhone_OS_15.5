//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSString, UIButton, UITextView;
@protocol HFStringGenerator, HUExpandableTextViewDelegate;

@interface HUExpandableTextView : UIView
{
    _Bool _alwaysShowMoreButtonUnlessExpanded;	// 8 = 0x8
    _Bool _expanded;	// 9 = 0x9
    _Bool _fitsWithinLineLimit;	// 10 = 0xa
    UITextView *_textView;	// 16 = 0x10
    long long _textMode;	// 24 = 0x18
    NSString *_text;	// 32 = 0x20
    id <HFStringGenerator> _stringGenerator;	// 40 = 0x28
    NSDictionary *_textAttributes;	// 48 = 0x30
    unsigned long long _numberOfLines;	// 56 = 0x38
    UIButton *_moreButton;	// 64 = 0x40
    id <HUExpandableTextViewDelegate> _delegate;	// 72 = 0x48
    unsigned long long _languageDirection;	// 80 = 0x50
    NSArray *_moreButtonLayoutConstraints;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000002c0db1
@property(retain, nonatomic) NSArray *moreButtonLayoutConstraints; // @synthesize moreButtonLayoutConstraints=_moreButtonLayoutConstraints;
@property(nonatomic) unsigned long long languageDirection; // @synthesize languageDirection=_languageDirection;
@property(nonatomic) _Bool fitsWithinLineLimit; // @synthesize fitsWithinLineLimit=_fitsWithinLineLimit;
@property(nonatomic) __weak id <HUExpandableTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) _Bool alwaysShowMoreButtonUnlessExpanded; // @synthesize alwaysShowMoreButtonUnlessExpanded=_alwaysShowMoreButtonUnlessExpanded;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) unsigned long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
@property(copy, nonatomic) id <HFStringGenerator> stringGenerator; // @synthesize stringGenerator=_stringGenerator;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long textMode; // @synthesize textMode=_textMode;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000002c0be5
- (double)heightForWidth:(double)arg1;	// IMP=0x00000000002c0b73
- (void)_updateLanguageDirection;	// IMP=0x00000000002c04fd
- (void)moreButtonTapped:(id)arg1;	// IMP=0x00000000002c04e6
- (void)_resetMoreButtonLayoutConstraints;	// IMP=0x00000000002c0144
- (void)layoutSubviews;	// IMP=0x00000000002bfd8f
- (void)updateConstraints;	// IMP=0x00000000002bfb64
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002bf6b8

@end

