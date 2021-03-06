//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXTextSourceDataSource-Protocol.h>

@class NSString, SXFormattedText;
@protocol SXFullscreenCaptionDataSource;

@interface SXFullscreenCaption : NSObject <SXTextSourceDataSource>
{
    NSString *_text;	// 8 = 0x8
    SXFormattedText *_caption;	// 16 = 0x10
    id <SXFullscreenCaptionDataSource> _dataSource;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004027a
- (id)contentSizeCategoryForTextSource:(id)arg1;	// IMP=0x0000000000040215
- (id)textStyleForIdentifier:(id)arg1;	// IMP=0x00000000000401a2
- (id)defaultComponentTextStylesForTextSource:(id)arg1;	// IMP=0x0000000000040107
- (id)defaultComponentTextStyleForTextSource:(id)arg1;	// IMP=0x00000000000400d5
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(_Bool)arg2;	// IMP=0x000000000003ffd4
- (id)inlineTextStylesForTextSource:(id)arg1;	// IMP=0x000000000003ff56
- (id)additionsForTextSource:(id)arg1;	// IMP=0x000000000003fec6
- (id)textRulesForTextSource:(id)arg1;	// IMP=0x000000000003fe73
- (id)textResizerForTextSource:(id)arg1;	// IMP=0x000000000003fe20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

