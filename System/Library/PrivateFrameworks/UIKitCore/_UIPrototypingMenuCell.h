//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UIStackView, _UIPrototypingValue;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuCell
{
    UIStackView *_stackView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    _UIPrototypingValue *_prototypingSetting;	// 24 = 0x18
}

+ (long long)_layoutAxis;	// IMP=0x00000000010fe2e8
- (void).cxx_destruct;	// IMP=0x00000000010fe402
@property(retain, nonatomic) _UIPrototypingValue *prototypingSetting; // @synthesize prototypingSetting=_prototypingSetting;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void)_prototypingSettingDidChange;	// IMP=0x00000000010fe354
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000010fde05

@end

