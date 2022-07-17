//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface HUQuickControlCollectionGridLayoutSettings : NSObject
{
    unsigned long long _sectionNumber;	// 8 = 0x8
    NSString *_sectionIdentifier;	// 16 = 0x10
    NSString *_sectionHeader;	// 24 = 0x18
    NSAttributedString *_sectionAttributedHeader;	// 32 = 0x20
    unsigned long long _numberOfItems;	// 40 = 0x28
    unsigned long long _numberOfRows;	// 48 = 0x30
    unsigned long long _numberOfColumns;	// 56 = 0x38
    long long _horizontalAlignment;	// 64 = 0x40
    unsigned long long _itemSize;	// 72 = 0x48
    double _rowSpacing;	// 80 = 0x50
    double _interitemSpacing;	// 88 = 0x58
    unsigned long long _preferredLayoutStyle;	// 96 = 0x60
    double _sectionTopPadding;	// 104 = 0x68
    unsigned long long _titlePosition;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000007851c
@property(nonatomic) unsigned long long titlePosition; // @synthesize titlePosition=_titlePosition;
@property(nonatomic) double sectionTopPadding; // @synthesize sectionTopPadding=_sectionTopPadding;
@property(nonatomic) unsigned long long preferredLayoutStyle; // @synthesize preferredLayoutStyle=_preferredLayoutStyle;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double rowSpacing; // @synthesize rowSpacing=_rowSpacing;
@property(nonatomic) unsigned long long itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(nonatomic) unsigned long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(nonatomic) unsigned long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(retain, nonatomic) NSAttributedString *sectionAttributedHeader; // @synthesize sectionAttributedHeader=_sectionAttributedHeader;
@property(retain, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(retain, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(nonatomic) unsigned long long sectionNumber; // @synthesize sectionNumber=_sectionNumber;

@end
