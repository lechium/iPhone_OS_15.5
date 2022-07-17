//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPlaceCollection, NSArray, NSAttributedString, NSDictionary, NSString, UITraitCollection;

__attribute__((visibility("hidden")))
@interface CuratedCollectionRichTextParser : NSObject
{
    _Bool _didParseRichText;	// 8 = 0x8
    NSString *_css;	// 16 = 0x10
    GEOPlaceCollection *_collection;	// 24 = 0x18
    NSArray *_collectionItems;	// 32 = 0x20
    UITraitCollection *_traitCollection;	// 40 = 0x28
    NSAttributedString *_collectionDescription;	// 48 = 0x30
    NSDictionary *_collectionItemDescriptions;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000007106c6
@property(readonly, nonatomic) NSDictionary *collectionItemDescriptions; // @synthesize collectionItemDescriptions=_collectionItemDescriptions;
- (id);	// IMP=0x00100000007106b2
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) NSArray *collectionItems; // @synthesize collectionItems=_collectionItems;
@property(readonly, nonatomic) GEOPlaceCollection *collection; // @synthesize collection=_collection;
- (void)_parseHTMLSnippet:(id)arg1 group:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000071046c
- (id)_documentHTMLWithInnerBodyHTML:(id)arg1;	// IMP=0x00100000007103d9
- (id)_documentCSS;	// IMP=0x00100000007102eb
- (id)_baseFont;	// IMP=0x00100000007102c1
- (void)parseRichTextDescriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000710270
- (_Bool)_mergeRichTextCollectionDescription:(id)arg1 itemDescriptions:(id)arg2;	// IMP=0x0010000000710105
- (void)_generateRichTextDescriptionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000070fa16
- (void)_generatePlainTextDescriptions;	// IMP=0x001000000070f454
- (id)initWithCollection:(id)arg1 collectionItems:(id)arg2 traitCollection:(id)arg3;	// IMP=0x001000000070f373

// Remaining properties
@property(readonly, nonatomic) NSAttributedString *collectionDescription; // @synthesize collectionDescription=_collectionDescription;

@end
