//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColorMap, OADTextListStyle, OADTheme;

__attribute__((visibility("hidden")))
@interface PDNotesMaster
{
    OADTheme *mTheme;	// 80 = 0x50
    OADColorMap *mColorMap;	// 88 = 0x58
    OADTextListStyle *mNotesTextStyle;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000447e5d
- (id)description;	// IMP=0x0000000000447e1f
- (void)removeUnnecessaryOverrides;	// IMP=0x0000000000447dd3
- (void)setUpPropertyHierarchyPreservingEffectiveValues;	// IMP=0x0000000000447d3b
- (id)defaultTextListStyle;	// IMP=0x0000000000447d29
- (id)drawingTheme;	// IMP=0x0000000000447cdd
- (void)doneWithContent;	// IMP=0x0000000000447c64
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x00000000001dd4f8
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x00000000001dd4f0
- (id)parentTextStyleForTables;	// IMP=0x0000000000447c5c
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(_Bool)arg4;	// IMP=0x00000000001dd45f
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(_Bool)arg3;	// IMP=0x00000000001dd4e8
- (id)notesTextStyle;	// IMP=0x00000000001dd310
- (id)styleMatrix;	// IMP=0x0000000000447bbf
- (id)colorMap;	// IMP=0x00000000001dd2fb
- (id)fontScheme;	// IMP=0x00000000001dd3c2
- (id)colorScheme;	// IMP=0x00000000001dd325
- (id)theme;	// IMP=0x00000000001dd2e6
- (id)parentSlideBase;	// IMP=0x0000000000447bb7
- (id)init;	// IMP=0x00000000001dd202

@end
