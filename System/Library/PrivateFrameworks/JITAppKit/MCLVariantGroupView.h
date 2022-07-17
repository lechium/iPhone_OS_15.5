//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MCLVariantGroupView : UIView
{
    NSMutableArray *_buttons;	// 8 = 0x8
    NSMutableArray *_buttonConstraints;	// 16 = 0x10
    long long _selectedIndex;	// 24 = 0x18
    _Bool _actionVariant;	// 32 = 0x20
    Class _buttonClass;	// 40 = 0x28
    long long _buttonType;	// 48 = 0x30
    long long _variantCount;	// 56 = 0x38
    long long _variantsPerLine;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001e040
@property(nonatomic) _Bool actionVariant; // @synthesize actionVariant=_actionVariant;
@property(nonatomic) long long variantsPerLine; // @synthesize variantsPerLine=_variantsPerLine;
@property(nonatomic) long long variantCount; // @synthesize variantCount=_variantCount;
@property(nonatomic) long long buttonType; // @synthesize buttonType=_buttonType;
@property(retain, nonatomic) Class buttonClass; // @synthesize buttonClass=_buttonClass;
- (void)selectItemAtIndex:(long long)arg1;	// IMP=0x000000000001dd60
- (void)selectVariant:(id)arg1;	// IMP=0x000000000001dbc0
- (id)createVariantButton:(Class)arg1 type:(long long)arg2;	// IMP=0x000000000001dac0
- (void)clearVariants;	// IMP=0x000000000001d9c0
- (void)reloadData;	// IMP=0x000000000001cd40
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001cbf0

@end
