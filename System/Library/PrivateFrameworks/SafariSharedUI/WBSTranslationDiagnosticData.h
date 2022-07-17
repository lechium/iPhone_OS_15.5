//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/NSCopying-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface WBSTranslationDiagnosticData : NSObject <NSCopying>
{
    NSMutableArray *_extractedParagraphs;	// 8 = 0x8
    NSMutableArray *_translatedParagraphs;	// 16 = 0x10
    NSMutableArray *_errors;	// 24 = 0x18
    NSString *_URLString;	// 32 = 0x20
    NSString *_extractedParagraphsAsJSON;	// 40 = 0x28
    NSString *_translatedParagraphsAsJSON;	// 48 = 0x30
    NSString *_errorsAsJSON;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000016531a
@property(copy, nonatomic) NSString *errorsAsJSON; // @synthesize errorsAsJSON=_errorsAsJSON;
@property(copy, nonatomic) NSString *translatedParagraphsAsJSON; // @synthesize translatedParagraphsAsJSON=_translatedParagraphsAsJSON;
@property(copy, nonatomic) NSString *extractedParagraphsAsJSON; // @synthesize extractedParagraphsAsJSON=_extractedParagraphsAsJSON;
@property(readonly, copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (id)_destinationDirectory;	// IMP=0x000000000016525d
- (id)_createFileForContents:(id)arg1 fileName:(id)arg2 inDirectory:(id)arg3;	// IMP=0x00000000001650d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000165001
- (id)saveDiagnosticDataAsTemporaryFiles;	// IMP=0x0000000000164dd3
- (void)addError:(id)arg1 forParagraphIdentifier:(id)arg2;	// IMP=0x0000000000164cdd
- (void)addTranslatedParagraph:(id)arg1;	// IMP=0x0000000000164c8d
- (void)addExtractedParagraphs:(id)arg1;	// IMP=0x0000000000164c1e
@property(readonly, copy, nonatomic) NSArray *translatedParagraphs;
@property(readonly, copy, nonatomic) NSArray *extractedParagraphs;
- (id)init;	// IMP=0x0000000000164ab9

@end
