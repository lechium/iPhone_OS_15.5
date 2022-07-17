//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TLKLabel, TLKStackView;

@interface TLKButtonView
{
    NSString *_title;	// 8 = 0x8
    TLKStackView *_stackView;	// 16 = 0x10
    TLKLabel *_titleLabel;	// 24 = 0x18
}

+ (struct UIEdgeInsets)defaultLayoutMargins;	// IMP=0x000000000003e5af
- (void).cxx_destruct;	// IMP=0x000000000003e92d
@property(retain, nonatomic) TLKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)observedPropertiesChanged;	// IMP=0x000000000003e862
- (id)setupContentView;	// IMP=0x000000000003e60b

@end
