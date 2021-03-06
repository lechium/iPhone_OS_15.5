//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class WDCharacterProperties, WDDocument, WDParagraphPropertiesValues;

__attribute__((visibility("hidden")))
@interface WDParagraphProperties : NSObject <NSCopying>
{
    WDCharacterProperties *mCharacterProperties;	// 8 = 0x8
    _Bool mCharacterPropertiesOverridden;	// 16 = 0x10
    unsigned int mOriginal:1;	// 17 = 0x11
    unsigned int mTracked:1;	// 17 = 0x11
    unsigned int mResolved:1;	// 17 = 0x11
    WDParagraphPropertiesValues *mOriginalProperties;	// 24 = 0x18
    WDParagraphPropertiesValues *mTrackedProperties;	// 32 = 0x20
    WDDocument *mDocument;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000402027
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (void)copyPropertiesInto:(id)arg1;	// IMP=0x0000000000401f23
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000401e26
- (_Bool)isContextualSpacingOverridden;	// IMP=0x0000000000401da6
- (void)setContextualSpacing:(_Bool)arg1;	// IMP=0x0000000000401c21
- (_Bool)contextualSpacing;	// IMP=0x0000000000401ba9
- (_Bool)isIndexToAuthorIDOfFormattingChangeOverridden;	// IMP=0x0000000000401b2b
- (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1;	// IMP=0x00000000004019a6
- (unsigned short)indexToAuthorIDOfFormattingChange;	// IMP=0x0000000000401932
- (_Bool)isFormattingChangedOverridden;	// IMP=0x00000000004018b4
- (void)setFormattingChanged:(int)arg1;	// IMP=0x0000000000222f1e
- (int)formattingChanged;	// IMP=0x000000000040183f
- (void)removeTabStopDeletedPosition:(short)arg1;	// IMP=0x0000000000401694
- (void)addTabStopDeletedPosition:(short)arg1;	// IMP=0x00000000000e2134
- (short)tabStopDeletedPositionAt:(unsigned long long)arg1;	// IMP=0x0000000000401599
- (void)setTabStopDeletedPositionCount:(unsigned long long)arg1;	// IMP=0x00000000000d0ebd
- (unsigned long long)tabStopDeletedPositionCount;	// IMP=0x00000000004014c4
- (void)removeTabStopAddedWithPosition:(short)arg1;	// IMP=0x0000000000401323
- (void)addTabStopAdded:(CDStruct_bd9d81e1 *)arg1;	// IMP=0x00000000000d0b16
- (CDStruct_bd9d81e1 *)tabStopAddedAt:(unsigned long long)arg1;	// IMP=0x00000000004011e5
- (_Bool)hasTabStopDeletedAtPosition:(short)arg1;	// IMP=0x000000000040115e
- (_Bool)hasTabStopAddedAtPosition:(short)arg1;	// IMP=0x00000000004010d6
- (void)setTabStopAddedCount:(unsigned long long)arg1;	// IMP=0x00000000000d0d39
- (unsigned long long)tabStopAddedCount;	// IMP=0x0000000000401000
- (_Bool)isKinsokuOffOverridden;	// IMP=0x0000000000400f82
- (void)setKinsokuOff:(_Bool)arg1;	// IMP=0x0000000000400dfd
- (_Bool)kinsokuOff;	// IMP=0x0000000000400d89
- (_Bool)isBiDiOverridden;	// IMP=0x0000000000400d0b
- (void)setBiDi:(_Bool)arg1;	// IMP=0x0000000000400b86
- (_Bool)biDi;	// IMP=0x0000000000400b12
- (_Bool)isWidowControlOverridden;	// IMP=0x0000000000400a94
- (void)setWidowControl:(_Bool)arg1;	// IMP=0x00000000000c12d0
- (_Bool)widowControl;	// IMP=0x0000000000400a20
- (_Bool)isSuppressLineNumbersOverridden;	// IMP=0x00000000004009a2
- (void)setSuppressLineNumbers:(_Bool)arg1;	// IMP=0x00000000000c0fc6
- (_Bool)suppressLineNumbers;	// IMP=0x000000000040092e
- (_Bool)isSuppressAutoHyphensOverridden;	// IMP=0x00000000004008b0
- (void)setSuppressAutoHyphens:(_Bool)arg1;	// IMP=0x00000000000c114b
- (_Bool)suppressAutoHyphens;	// IMP=0x000000000040083c
- (_Bool)isKeepLinesTogetherOverridden;	// IMP=0x00000000004007be
- (void)setKeepLinesTogether:(_Bool)arg1;	// IMP=0x0000000000166618
- (_Bool)keepLinesTogether;	// IMP=0x000000000040074a
- (_Bool)isKeepNextParagraphTogetherOverridden;	// IMP=0x00000000004006cc
- (void)setKeepNextParagraphTogether:(_Bool)arg1;	// IMP=0x00000000000d086c
- (_Bool)keepNextParagraphTogether;	// IMP=0x0000000000400658
- (_Bool)isOutlineLevelOverridden;	// IMP=0x00000000004005da
- (void)setOutlineLevel:(unsigned short)arg1;	// IMP=0x00000000000d06e7
- (unsigned short)outlineLevel;	// IMP=0x0000000000400566
- (_Bool)isPhysicalJustificationOverridden;	// IMP=0x00000000004004e8
- (void)setPhysicalJustification:(int)arg1;	// IMP=0x0000000000400363
- (int)physicalJustification;	// IMP=0x00000000004002ee
- (_Bool)isJustificationOverridden;	// IMP=0x00000000000ef3e4
- (void)setJustification:(int)arg1;	// IMP=0x00000000000c0e41
- (int)justification;	// IMP=0x00000000000f2a42
- (_Bool)isFirstLineIndentCharsOverridden;	// IMP=0x0000000000400270
- (void)setFirstLineIndentChars:(short)arg1;	// IMP=0x00000000004000eb
- (short)firstLineIndentChars;	// IMP=0x0000000000400077
- (_Bool)isRightIndentCharsOverridden;	// IMP=0x00000000003ffff9
- (void)setRightIndentChars:(short)arg1;	// IMP=0x00000000003ffe74
- (short)rightIndentChars;	// IMP=0x00000000003ffe00
- (_Bool)isLeftIndentCharsOverridden;	// IMP=0x00000000003ffd82
- (void)setLeftIndentChars:(short)arg1;	// IMP=0x00000000003ffbfd
- (short)leftIndentChars;	// IMP=0x00000000003ffb89
- (void)clearFirstLineIndent;	// IMP=0x00000000003ffb2b
- (_Bool)isFirstLineIndentOverridden;	// IMP=0x00000000000ef55e
- (void)setFirstLineIndent:(short)arg1;	// IMP=0x00000000000c0cbc
- (short)firstLineIndent;	// IMP=0x00000000000f45d7
- (void)clearRightIndent;	// IMP=0x00000000003ffacd
- (_Bool)isRightIndentOverridden;	// IMP=0x00000000000ef4e0
- (void)setRightIndent:(short)arg1;	// IMP=0x00000000000c0b37
- (short)rightIndent;	// IMP=0x000000000015e462
- (void)clearFollowingIndent;	// IMP=0x00000000003ffa6f
- (_Bool)isFollowingIndentOverridden;	// IMP=0x00000000003ff9f1
- (void)setFollowingIndent:(short)arg1;	// IMP=0x00000000003ff86c
- (short)followingIndent;	// IMP=0x00000000003ff7f8
- (void)clearLeadingIndent;	// IMP=0x00000000003ff79a
- (_Bool)isLeadingIndentOverridden;	// IMP=0x00000000003ff71c
- (void)setLeadingIndent:(short)arg1;	// IMP=0x00000000003ff597
- (short)leadingIndent;	// IMP=0x00000000003ff523
- (void)clearLeftIndent;	// IMP=0x00000000003ff4c5
- (_Bool)isLeftIndentOverridden;	// IMP=0x00000000000ef462
- (void)setLeftIndent:(short)arg1;	// IMP=0x00000000000c09b2
- (short)leftIndent;	// IMP=0x00000000000f4563
- (_Bool)isLineSpacingRuleOverridden;	// IMP=0x00000000001a1c75
- (void)setLineSpacingRule:(int)arg1;	// IMP=0x00000000000c082d
- (int)lineSpacingRule;	// IMP=0x00000000001a1cf3
- (_Bool)isLineSpacingOverridden;	// IMP=0x00000000000ef336
- (void)setLineSpacing:(short)arg1;	// IMP=0x00000000000c06a8
- (short)lineSpacing;	// IMP=0x00000000000f8b78
- (_Bool)isSpaceAfterAutoOverridden;	// IMP=0x00000000003ff447
- (void)setSpaceAfterAuto:(_Bool)arg1;	// IMP=0x00000000000c0523
- (_Bool)spaceAfterAuto;	// IMP=0x00000000003ff3d3
- (_Bool)isSpaceAfterOverridden;	// IMP=0x00000000000ef23a
- (void)setSpaceAfter:(unsigned short)arg1;	// IMP=0x00000000000c039e
- (unsigned short)spaceAfter;	// IMP=0x00000000000fcdce
- (_Bool)isSpaceBeforeAutoOverridden;	// IMP=0x00000000003ff355
- (void)setSpaceBeforeAuto:(_Bool)arg1;	// IMP=0x00000000000c0219
- (_Bool)spaceBeforeAuto;	// IMP=0x00000000003ff2e1
- (_Bool)isSpaceBeforeOverridden;	// IMP=0x00000000000ef2b8
- (void)setSpaceBefore:(unsigned short)arg1;	// IMP=0x00000000000c0094
- (unsigned short)spaceBefore;	// IMP=0x00000000000f4f8a
- (_Bool)isShadingOverridden;	// IMP=0x00000000000ef868
- (id)mutableShading;	// IMP=0x00000000000bfe5d
- (id)shading;	// IMP=0x000000000015e2cc
- (_Bool)isBarBorderOverridden;	// IMP=0x00000000003ff263
- (id)mutableBarBorder;	// IMP=0x00000000000bfc51
- (id)barBorder;	// IMP=0x00000000003ff1e4
- (_Bool)isBetweenBorderOverridden;	// IMP=0x00000000003ff166
- (id)mutableBetweenBorder;	// IMP=0x00000000000bfa1a
- (id)betweenBorder;	// IMP=0x00000000003ff0e7
- (_Bool)isRightBorderOverridden;	// IMP=0x00000000003ff069
- (id)mutableRightBorder;	// IMP=0x00000000000bf7e3
- (id)rightBorder;	// IMP=0x00000000003fefb2
- (_Bool)isBottomBorderOverridden;	// IMP=0x00000000000ef7ea
- (id)mutableBottomBorder;	// IMP=0x00000000000bf5d7
- (id)bottomBorder;	// IMP=0x000000000015e215
- (_Bool)isLeftBorderOverridden;	// IMP=0x00000000003fef34
- (id)mutableLeftBorder;	// IMP=0x00000000000bf3cb
- (id)leftBorder;	// IMP=0x00000000003fee7d
- (_Bool)isTopBorderOverridden;	// IMP=0x00000000003fedff
- (id)mutableTopBorder;	// IMP=0x00000000000bf1bf
- (id)topBorder;	// IMP=0x00000000003fed48
- (_Bool)isAnchorLockOverridden;	// IMP=0x00000000003fecca
- (void)setAnchorLock:(_Bool)arg1;	// IMP=0x00000000000bf03a
- (_Bool)anchorLock;	// IMP=0x00000000003fec56
- (_Bool)isWrapCodeOverridden;	// IMP=0x00000000003febd8
- (void)setWrapCode:(BOOL)arg1;	// IMP=0x0000000000100396
- (BOOL)wrapCode;	// IMP=0x00000000003feb64
- (_Bool)isVerticalPositionOverridden;	// IMP=0x00000000000ee171
- (void)setVerticalPosition:(long long)arg1;	// IMP=0x00000000000beeb6
- (long long)verticalPosition;	// IMP=0x00000000001e3076
- (_Bool)isHorizontalPositionOverridden;	// IMP=0x00000000000ee0f3
- (void)setHorizontalPosition:(long long)arg1;	// IMP=0x00000000000bed32
- (long long)horizontalPosition;	// IMP=0x00000000001d0a25
- (_Bool)isVerticalAnchorOverridden;	// IMP=0x00000000000ee075
- (void)setVerticalAnchor:(int)arg1;	// IMP=0x00000000000bebad
- (int)verticalAnchor;	// IMP=0x00000000001d09ad
- (_Bool)isHorizontalAnchorOverridden;	// IMP=0x00000000000edff7
- (void)setHorizontalAnchor:(int)arg1;	// IMP=0x00000000000bea28
- (int)horizontalAnchor;	// IMP=0x00000000001006f3
- (_Bool)isWrapOverridden;	// IMP=0x00000000003feae6
- (void)setWrap:(_Bool)arg1;	// IMP=0x00000000000be8a3
- (_Bool)wrap;	// IMP=0x00000000003fea72
- (_Bool)isHorizontalSpaceOverridden;	// IMP=0x00000000003fe9f4
- (void)setHorizontalSpace:(long long)arg1;	// IMP=0x00000000000be71f
- (long long)horizontalSpace;	// IMP=0x00000000003fe980
- (_Bool)isVerticalSpaceOverridden;	// IMP=0x00000000003fe902
- (void)setVerticalSpace:(long long)arg1;	// IMP=0x00000000000be59b
- (long long)verticalSpace;	// IMP=0x00000000003fe88e
- (_Bool)isHeightRuleOverridden;	// IMP=0x00000000003fe810
- (void)setHeightRule:(int)arg1;	// IMP=0x00000000000be416
- (int)heightRule;	// IMP=0x00000000003fe798
- (_Bool)isHeightOverridden;	// IMP=0x00000000003fe71a
- (void)setHeight:(long long)arg1;	// IMP=0x00000000000be291
- (long long)height;	// IMP=0x00000000003fe6a7
- (_Bool)isWidthOverridden;	// IMP=0x0000000000100e4c
- (void)setWidth:(long long)arg1;	// IMP=0x00000000000be10d
- (long long)width;	// IMP=0x00000000001d0a99
- (_Bool)isDropCapOverridden;	// IMP=0x00000000003fe629
- (void)setDropCap:(CDStruct_8835774c)arg1;	// IMP=0x00000000000bdf89
- (CDStruct_8835774c)dropCap;	// IMP=0x00000000003fe573
- (_Bool)isListIndexOverridden;	// IMP=0x00000000000ef5dc
- (void)setListIndex:(unsigned long long)arg1;	// IMP=0x00000000000bde05
- (unsigned long long)listIndex;	// IMP=0x00000000000f464b
- (_Bool)isListLevelOverridden;	// IMP=0x00000000000ef65a
- (void)setListLevel:(unsigned char)arg1;	// IMP=0x00000000000bdc80
- (unsigned char)listLevel;	// IMP=0x00000000000f46bf
- (_Bool)isPageBreakBeforeOverridden;	// IMP=0x00000000003fe4f5
- (void)setPageBreakBefore:(_Bool)arg1;	// IMP=0x00000000000bdafb
- (_Bool)isPageBreakBefore;	// IMP=0x00000000003fe481
- (void)clearBaseStyle;	// IMP=0x00000000000d047d
- (_Bool)isBaseStyleOverridden;	// IMP=0x00000000000ee9bd
- (void)setBaseStyle:(id)arg1;	// IMP=0x00000000000cf1f7
- (id)baseStyle;	// IMP=0x00000000000eea3b
- (void)negateFormattingChangesWithDefaults:(id)arg1;	// IMP=0x00000000003fc67f
- (void)setResolveMode:(int)arg1;	// IMP=0x00000000000bdabb
- (int)resolveMode;	// IMP=0x00000000001a1d68
- (_Bool)isAnythingOverridden;	// IMP=0x00000000003fc5fc
- (void)clearChararacterProperties;	// IMP=0x00000000003fc5d6
- (_Bool)isCharacterPropertiesOverridden;	// IMP=0x00000000000f4bae
- (void)setCharacterProperties:(id)arg1;	// IMP=0x00000000000d9bc6
- (id)mutableCharacterProperties;	// IMP=0x00000000001af5c5
- (id)characterProperties;	// IMP=0x00000000000ef22c
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000bda06
- (id)description;	// IMP=0x0000000000402527
- (_Bool)isAnythingOverriddenIn:(id)arg1;	// IMP=0x0000000000402063

@end

