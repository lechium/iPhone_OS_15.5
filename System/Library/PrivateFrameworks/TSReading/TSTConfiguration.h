//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TSTConfiguration : NSObject
{
    _Bool mSupportsContainedTextEditing;	// 8 = 0x8
    _Bool mSupportsResumingTextEditing;	// 9 = 0x9
    _Bool mBeginEditingOnSingleTap;	// 10 = 0xa
    _Bool mSupportsMergedCells;	// 11 = 0xb
    _Bool mSupportsHiddenCells;	// 12 = 0xc
    _Bool mReturnWhileEditingNavigates;	// 13 = 0xd
    _Bool mTabWhileEditingNavigates;	// 14 = 0xe
    _Bool mArrowKeyAtEdgeWhileEditingNavigates;	// 15 = 0xf
    _Bool mArrowKeysWrap;	// 16 = 0x10
    _Bool mArrowKeysNavigateWhenEditingBeganByTyping;	// 17 = 0x11
    _Bool mBackTabWraps;	// 18 = 0x12
    _Bool mTabAtEdgeAddsRow;	// 19 = 0x13
    _Bool mTabAtEdgeAddsColumn;	// 20 = 0x14
    _Bool mPastesTile;	// 21 = 0x15
    _Bool mAllowHorizontalAutoresize;	// 22 = 0x16
    _Bool mSelectsCellOnInitialTap;	// 23 = 0x17
    _Bool mDragByHandleOnly;	// 24 = 0x18
    _Bool mCornersCanDragResize;	// 25 = 0x19
    _Bool mSupportsControlCells;	// 26 = 0x1a
    _Bool mHasLargerFonts;	// 27 = 0x1b
    _Bool mSupportsFrozenHeaders;	// 28 = 0x1c
    _Bool mSupportsAutoResizedTables;	// 29 = 0x1d
    _Bool mSupportsCreateChartFromSelection;	// 30 = 0x1e
    _Bool mShowsAddressBarAlways;	// 31 = 0x1f
    _Bool mShowsAddressBarHighlights;	// 32 = 0x20
    _Bool mShowsAddressBarLetteringAndNumbering;	// 33 = 0x21
    _Bool mSelectionUsesBezierPath;	// 34 = 0x22
    _Bool mUsesWholeChromeResizer;	// 35 = 0x23
    _Bool mSupportsCanvasReferenceEditing;	// 36 = 0x24
    _Bool mUsesLimitedAutomaticFormatParsing;	// 37 = 0x25
    _Bool mSupportsFormulaEditing;	// 38 = 0x26
    _Bool mSupportsImplicitEditing;	// 39 = 0x27
    _Bool mFormulaEqualsTokenIsSelectable;	// 40 = 0x28
    _Bool mAllowFreeformFormulaText;	// 41 = 0x29
    _Bool mAllowWhitespaceInFormulas;	// 42 = 0x2a
    _Bool mRequireMatchedFunctionTokens;	// 43 = 0x2b
    _Bool mShowsHideUnhideUI;	// 44 = 0x2c
    _Bool mExportPermanentHidingState;	// 45 = 0x2d
    _Bool mShowsCellOverflowIndicator;	// 46 = 0x2e
    _Bool mSupportsAutofill;	// 47 = 0x2f
    _Bool mUsesLimitedNumberFormatInspector;	// 48 = 0x30
    _Bool mHeadersFrozenByDefault;	// 49 = 0x31
    _Bool mCreateLargeDefaultTables;	// 50 = 0x32
    _Bool mTableNameEnabledInNewTables;	// 51 = 0x33
    _Bool mSupportsRowColumnAdderKnob;	// 52 = 0x34
    _Bool mSupportsDragDropMoveMode;	// 53 = 0x35
    _Bool mExportsCellComments;	// 54 = 0x36
    _Bool mExportsCellAnnotations;	// 55 = 0x37
    _Bool mSupportsRepeatHeaderRowsOnEachPage;	// 56 = 0x38
    _Bool _formulaEditorEvaluatesFormulas;	// 57 = 0x39
    _Bool _showReferenceHighlightsOnFormulaCellSelection;	// 58 = 0x3a
    _Bool _tokenizeFormulaStringLiterals;	// 59 = 0x3b
    _Bool _cellEditorsCanScrollToNonLocalTableSelection;	// 60 = 0x3c
    _Bool _formulaCellEditorSupportsTextTokenEditor;	// 61 = 0x3d
    _Bool _disableImplicitNaming;	// 62 = 0x3e
    _Bool _supportsComplexFilterUI;	// 63 = 0x3f
    _Bool _supportsQuickFilterUI;	// 64 = 0x40
    _Bool _pasteFilterHidingAsUserHiding;	// 65 = 0x41
    _Bool _allowsFullyFilteredTables;	// 66 = 0x42
    unsigned int mMaxNumberOfRows;	// 68 = 0x44
    unsigned int mMaxNumberOfColumns;	// 72 = 0x48
    unsigned int mMaxNumberOfPopulatedCells;	// 76 = 0x4c
}

+ (void)resetSharedTableConfiguration;	// IMP=0x00000000003d6010
+ (id)sharedTableConfiguration;	// IMP=0x00000000003d5fcb
@property(nonatomic) _Bool allowsFullyFilteredTables; // @synthesize allowsFullyFilteredTables=_allowsFullyFilteredTables;
@property(nonatomic) _Bool pasteFilterHidingAsUserHiding; // @synthesize pasteFilterHidingAsUserHiding=_pasteFilterHidingAsUserHiding;
@property(nonatomic) _Bool supportsQuickFilterUI; // @synthesize supportsQuickFilterUI=_supportsQuickFilterUI;
@property(nonatomic) _Bool supportsComplexFilterUI; // @synthesize supportsComplexFilterUI=_supportsComplexFilterUI;
@property(nonatomic) _Bool disableImplicitNaming; // @synthesize disableImplicitNaming=_disableImplicitNaming;
@property(nonatomic) _Bool formulaCellEditorSupportsTextTokenEditor; // @synthesize formulaCellEditorSupportsTextTokenEditor=_formulaCellEditorSupportsTextTokenEditor;
@property(nonatomic) _Bool cellEditorsCanScrollToNonLocalTableSelection; // @synthesize cellEditorsCanScrollToNonLocalTableSelection=_cellEditorsCanScrollToNonLocalTableSelection;
@property(nonatomic) _Bool tokenizeFormulaStringLiterals; // @synthesize tokenizeFormulaStringLiterals=_tokenizeFormulaStringLiterals;
@property(nonatomic) _Bool showReferenceHighlightsOnFormulaCellSelection; // @synthesize showReferenceHighlightsOnFormulaCellSelection=_showReferenceHighlightsOnFormulaCellSelection;
@property(nonatomic) _Bool formulaEditorEvaluatesFormulas; // @synthesize formulaEditorEvaluatesFormulas=_formulaEditorEvaluatesFormulas;
@property(nonatomic) _Bool supportsRepeatHeaderRowsOnEachPage; // @synthesize supportsRepeatHeaderRowsOnEachPage=mSupportsRepeatHeaderRowsOnEachPage;
@property(nonatomic) _Bool exportsCellAnnotations; // @synthesize exportsCellAnnotations=mExportsCellAnnotations;
@property(nonatomic) _Bool exportsCellComments; // @synthesize exportsCellComments=mExportsCellComments;
@property(nonatomic) _Bool supportsDragDropMoveMode; // @synthesize supportsDragDropMoveMode=mSupportsDragDropMoveMode;
@property(nonatomic) _Bool supportsRowColumnAdderKnob; // @synthesize supportsRowColumnAdderKnob=mSupportsRowColumnAdderKnob;
@property(nonatomic) _Bool tableNameEnabledInNewTables; // @synthesize tableNameEnabledInNewTables=mTableNameEnabledInNewTables;
@property(nonatomic) _Bool createLargeDefaultTables; // @synthesize createLargeDefaultTables=mCreateLargeDefaultTables;
@property(nonatomic) _Bool headersFrozenByDefault; // @synthesize headersFrozenByDefault=mHeadersFrozenByDefault;
@property(nonatomic) _Bool usesLimitedNumberFormatInspector; // @synthesize usesLimitedNumberFormatInspector=mUsesLimitedNumberFormatInspector;
@property(nonatomic) _Bool supportsAutofill; // @synthesize supportsAutofill=mSupportsAutofill;
@property(nonatomic) _Bool showsCellOverflowIndicator; // @synthesize showsCellOverflowIndicator=mShowsCellOverflowIndicator;
@property(nonatomic) _Bool exportPermanentHidingState; // @synthesize exportPermanentHidingState=mExportPermanentHidingState;
@property(nonatomic) _Bool showsHideUnhideUI; // @synthesize showsHideUnhideUI=mShowsHideUnhideUI;
@property(nonatomic) _Bool requireMatchedFunctionTokens; // @synthesize requireMatchedFunctionTokens=mRequireMatchedFunctionTokens;
@property(nonatomic) _Bool allowWhitespaceInFormulas; // @synthesize allowWhitespaceInFormulas=mAllowWhitespaceInFormulas;
@property(nonatomic) _Bool allowFreeformFormulaText; // @synthesize allowFreeformFormulaText=mAllowFreeformFormulaText;
@property(nonatomic) _Bool formulaEqualsTokenIsSelectable; // @synthesize formulaEqualsTokenIsSelectable=mFormulaEqualsTokenIsSelectable;
@property(nonatomic) _Bool supportsImplicitEditing; // @synthesize supportsImplicitEditing=mSupportsImplicitEditing;
@property(nonatomic) _Bool supportsFormulaEditing; // @synthesize supportsFormulaEditing=mSupportsFormulaEditing;
@property(nonatomic) _Bool usesLimitedAutomaticFormatParsing; // @synthesize usesLimitedAutomaticFormatParsing=mUsesLimitedAutomaticFormatParsing;
@property(nonatomic) _Bool supportsCanvasReferenceEditing; // @synthesize supportsCanvasReferenceEditing=mSupportsCanvasReferenceEditing;
@property(nonatomic) _Bool usesWholeChromeResizer; // @synthesize usesWholeChromeResizer=mUsesWholeChromeResizer;
@property(nonatomic) _Bool selectionUsesBezierPath; // @synthesize selectionUsesBezierPath=mSelectionUsesBezierPath;
@property(nonatomic) _Bool showsAddressBarLetteringAndNumbering; // @synthesize showsAddressBarLetteringAndNumbering=mShowsAddressBarLetteringAndNumbering;
@property(nonatomic) _Bool showsAddressBarHighlights; // @synthesize showsAddressBarHighlights=mShowsAddressBarHighlights;
@property(nonatomic) _Bool showsAddressBarAlways; // @synthesize showsAddressBarAlways=mShowsAddressBarAlways;
@property(nonatomic) _Bool supportsCreateChartFromSelection; // @synthesize supportsCreateChartFromSelection=mSupportsCreateChartFromSelection;
@property(nonatomic) _Bool supportsAutoResizedTables; // @synthesize supportsAutoResizedTables=mSupportsAutoResizedTables;
@property(nonatomic) _Bool supportsFrozenHeaders; // @synthesize supportsFrozenHeaders=mSupportsFrozenHeaders;
@property(nonatomic) _Bool hasLargerFonts; // @synthesize hasLargerFonts=mHasLargerFonts;
@property(nonatomic) _Bool supportsControlCells; // @synthesize supportsControlCells=mSupportsControlCells;
@property(nonatomic) _Bool cornersCanDragResize; // @synthesize cornersCanDragResize=mCornersCanDragResize;
@property(nonatomic) _Bool dragByHandleOnly; // @synthesize dragByHandleOnly=mDragByHandleOnly;
@property(nonatomic) _Bool selectsCellOnInitialTap; // @synthesize selectsCellOnInitialTap=mSelectsCellOnInitialTap;
@property(nonatomic) _Bool allowHorizontalAutoresize; // @synthesize allowHorizontalAutoresize=mAllowHorizontalAutoresize;
@property(nonatomic) _Bool pastesTile; // @synthesize pastesTile=mPastesTile;
@property(nonatomic) _Bool tabAtEdgeAddsColumn; // @synthesize tabAtEdgeAddsColumn=mTabAtEdgeAddsColumn;
@property(nonatomic) _Bool tabAtEdgeAddsRow; // @synthesize tabAtEdgeAddsRow=mTabAtEdgeAddsRow;
@property(nonatomic) _Bool backTabWraps; // @synthesize backTabWraps=mBackTabWraps;
@property(nonatomic) _Bool arrowKeysNavigateWhenEditingBeganByTyping; // @synthesize arrowKeysNavigateWhenEditingBeganByTyping=mArrowKeysNavigateWhenEditingBeganByTyping;
@property(nonatomic) _Bool arrowKeysWrap; // @synthesize arrowKeysWrap=mArrowKeysWrap;
@property(nonatomic) _Bool arrowKeyAtEdgeWhileEditingNavigates; // @synthesize arrowKeyAtEdgeWhileEditingNavigates=mArrowKeyAtEdgeWhileEditingNavigates;
@property(nonatomic) _Bool tabWhileEditingNavigates; // @synthesize tabWhileEditingNavigates=mTabWhileEditingNavigates;
@property(nonatomic) _Bool returnWhileEditingNavigates; // @synthesize returnWhileEditingNavigates=mReturnWhileEditingNavigates;
@property(nonatomic) _Bool supportsHiddenCells; // @synthesize supportsHiddenCells=mSupportsHiddenCells;
@property(nonatomic) _Bool supportsMergedCells; // @synthesize supportsMergedCells=mSupportsMergedCells;
@property(nonatomic) _Bool beginEditingOnSingleTap; // @synthesize beginEditingOnSingleTap=mBeginEditingOnSingleTap;
@property(nonatomic) _Bool supportsResumingTextEditing; // @synthesize supportsResumingTextEditing=mSupportsResumingTextEditing;
@property(nonatomic) _Bool supportsContainedTextEditing; // @synthesize supportsContainedTextEditing=mSupportsContainedTextEditing;
@property(nonatomic) unsigned int maxNumberOfPopulatedCells; // @synthesize maxNumberOfPopulatedCells=mMaxNumberOfPopulatedCells;
@property(nonatomic) unsigned int maxNumberOfColumns; // @synthesize maxNumberOfColumns=mMaxNumberOfColumns;
@property(nonatomic) unsigned int maxNumberOfRows; // @synthesize maxNumberOfRows=mMaxNumberOfRows;
- (id)init;	// IMP=0x00000000003d6046

@end
