//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewTableAllRowAttributes-Protocol.h>
#import <UIKitCore/UICollectionViewTableSectionHeaderFooterAttributes-Protocol.h>

@class UIColor, UIVisualEffect;

@interface UICollectionViewTableLayoutAttributes <UICollectionViewTableSectionHeaderFooterAttributes, UICollectionViewTableAllRowAttributes>
{
    _Bool _separatorInsetIsRelativeToCellEdges;	// 24 = 0x18
    _Bool _shouldIndentWhileEditing;	// 25 = 0x19
    _Bool _showsReorderControl;	// 26 = 0x1a
    _Bool _layoutMarginsFollowReadableWidth;	// 27 = 0x1b
    _Bool _insetsContentViewsToSafeArea;	// 28 = 0x1c
    _Bool _drawsSeparatorAtTopOfSection;	// 29 = 0x1d
    _Bool _drawsSeparatorAtBottomOfSection;	// 30 = 0x1e
    _Bool _preferredAttributesCached;	// 31 = 0x1f
    _Bool _isHeader;	// 32 = 0x20
    _Bool _floating;	// 33 = 0x21
    int _sectionLocation;	// 36 = 0x24
    long long _separatorStyle;	// 40 = 0x28
    UIColor *_separatorColor;	// 48 = 0x30
    UIVisualEffect *_separatorEffect;	// 56 = 0x38
    UIColor *_backgroundColor;	// 64 = 0x40
    long long _accessoryType;	// 72 = 0x48
    long long _editingStyle;	// 80 = 0x50
    double _defaultLeadingCellMarginWidth;	// 88 = 0x58
    double _defaultTrailingCellMarginWidth;	// 96 = 0x60
    double _indexBarExtentFromEdge;	// 104 = 0x68
    long long _indentationLevel;	// 112 = 0x70
    double _maxTitleWidth;	// 120 = 0x78
    long long _textAlignment;	// 128 = 0x80
    struct UIEdgeInsets _separatorInset;	// 136 = 0x88
    struct UIEdgeInsets _backgroundInset;	// 168 = 0xa8
    struct UIEdgeInsets _margins;	// 200 = 0xc8
}

+ (long long)automaticValueOptionsForRepresentedElementCategory:(unsigned long long)arg1;	// IMP=0x0000000000303a96
+ (void)applyValuesFromAttributes:(id)arg1 toAttributes:(id)arg2 valueOptions:(long long)arg3;	// IMP=0x000000000030364d
- (void).cxx_destruct;	// IMP=0x0000000000303e6d
@property(nonatomic) _Bool floating; // @synthesize floating=_floating;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property(nonatomic) double maxTitleWidth; // @synthesize maxTitleWidth=_maxTitleWidth;
@property(nonatomic) _Bool isHeader; // @synthesize isHeader=_isHeader;
@property(nonatomic) _Bool preferredAttributesCached; // @synthesize preferredAttributesCached=_preferredAttributesCached;
@property(nonatomic) _Bool drawsSeparatorAtBottomOfSection; // @synthesize drawsSeparatorAtBottomOfSection=_drawsSeparatorAtBottomOfSection;
@property(nonatomic) _Bool drawsSeparatorAtTopOfSection; // @synthesize drawsSeparatorAtTopOfSection=_drawsSeparatorAtTopOfSection;
@property(nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
@property(nonatomic) struct UIEdgeInsets backgroundInset; // @synthesize backgroundInset=_backgroundInset;
@property(nonatomic) double indexBarExtentFromEdge; // @synthesize indexBarExtentFromEdge=_indexBarExtentFromEdge;
@property(nonatomic) double defaultTrailingCellMarginWidth; // @synthesize defaultTrailingCellMarginWidth=_defaultTrailingCellMarginWidth;
@property(nonatomic) double defaultLeadingCellMarginWidth; // @synthesize defaultLeadingCellMarginWidth=_defaultLeadingCellMarginWidth;
@property(nonatomic) _Bool insetsContentViewsToSafeArea; // @synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea;
@property(nonatomic) _Bool layoutMarginsFollowReadableWidth; // @synthesize layoutMarginsFollowReadableWidth=_layoutMarginsFollowReadableWidth;
@property(nonatomic) _Bool showsReorderControl; // @synthesize showsReorderControl=_showsReorderControl;
@property(nonatomic) _Bool shouldIndentWhileEditing; // @synthesize shouldIndentWhileEditing=_shouldIndentWhileEditing;
@property(nonatomic) int sectionLocation; // @synthesize sectionLocation=_sectionLocation;
@property(nonatomic) long long editingStyle; // @synthesize editingStyle=_editingStyle;
@property(nonatomic) long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIVisualEffect *separatorEffect; // @synthesize separatorEffect=_separatorEffect;
@property(copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) _Bool separatorInsetIsRelativeToCellEdges; // @synthesize separatorInsetIsRelativeToCellEdges=_separatorInsetIsRelativeToCellEdges;
@property(nonatomic) struct UIEdgeInsets separatorInset; // @synthesize separatorInset=_separatorInset;
@property(nonatomic) long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030330a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003032af

@end

