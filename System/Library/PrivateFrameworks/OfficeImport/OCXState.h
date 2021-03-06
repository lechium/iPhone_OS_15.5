//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXNamespace;

__attribute__((visibility("hidden")))
@interface OCXState : NSObject
{
    int mXMLFormat;	// 8 = 0x8
    CXNamespace *mOCXRelationshipsNamespace;	// 16 = 0x10
    CXNamespace *mOCXDrawingNamespace;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000383629
@property(retain, nonatomic) CXNamespace *OCXDrawingNamespace; // @synthesize OCXDrawingNamespace=mOCXDrawingNamespace;
@property(retain, nonatomic) CXNamespace *OCXRelationshipsNamespace; // @synthesize OCXRelationshipsNamespace=mOCXRelationshipsNamespace;
@property(readonly, nonatomic) int xmlFormat; // @synthesize xmlFormat=mXMLFormat;
- (id)OCXSettingsRelationshipType;	// IMP=0x00000000003835c7
- (id)OCXTableStylesRelationshipType;	// IMP=0x00000000003835a4
- (id)OCXPackageViewPropsRelationshipType;	// IMP=0x0000000000383581
- (id)OCXPackagePresPropsRelationshipType;	// IMP=0x000000000038355e
- (id)OCXNumberingRelationshipType;	// IMP=0x000000000038353b
- (id)OCXNotesMasterRelationshipType;	// IMP=0x0000000000383518
- (id)OCXVmlDrawingRelationshipType;	// IMP=0x0000000000383504
- (id)OCXThemeOverrideRelationshipType;	// IMP=0x00000000003834e1
- (id)OCXThemeRelationshipType;	// IMP=0x00000000003834be
- (id)OCXLegacyDocTextInfoRelationshipType;	// IMP=0x00000000003834aa
- (id)OCXCustomXmlRelationshipType;	// IMP=0x0000000000383487
- (id)OCXCommentAuthorsRelationshipType;	// IMP=0x0000000000383464
- (id)OCXNotesSlideRelationshipType;	// IMP=0x0000000000383441
- (id)OCXSlideRelationshipType;	// IMP=0x000000000038341e
- (id)OCXSlideLayoutRelationshipType;	// IMP=0x00000000003833fb
- (id)OCXSlideMasterRelationshipType;	// IMP=0x00000000003833d8
- (id)OCXTableRelationshipType;	// IMP=0x00000000003833b5
- (id)OCXPivotTableRelationshipType;	// IMP=0x0000000000383392
- (id)OCXCommentsExtendedRelationshipType;	// IMP=0x000000000038337e
- (id)OCXCommentsRelationshipType;	// IMP=0x000000000038335b
- (id)OCXFootnotesRelationshipType;	// IMP=0x0000000000383338
- (id)OCXFontTableRelationshipType;	// IMP=0x0000000000383315
- (id)OCXEndnotesRelationshipType;	// IMP=0x00000000003832f2
- (id)OCXDrawingRelationshipType;	// IMP=0x00000000003832cf
- (id)OCXSharedStringsRelationshipType;	// IMP=0x00000000003832ac
- (id)OCXStylesRelationshipType;	// IMP=0x0000000000383289
- (void)setupNSForXMLFormat:(int)arg1;	// IMP=0x0000000000383156
- (id)init;	// IMP=0x00000000003830ea
- (void)setXmlFormat:(int)arg1;	// IMP=0x0000000000383651

@end

