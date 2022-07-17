//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/WebDocumentDOM-Protocol.h>
#import <WebKitLegacy/WebDocumentRepresentation-Protocol.h>

@class NSString, WebHTMLRepresentationPrivate;

@interface WebHTMLRepresentation : NSObject <WebDocumentRepresentation, WebDocumentDOM>
{
    WebHTMLRepresentationPrivate *_private;	// 8 = 0x8
}

+ (id)unsupportedTextMIMETypes;	// IMP=0x000000000010b5f0
+ (id)supportedImageMIMETypes;	// IMP=0x000000000010b3d0
+ (id)supportedNonImageMIMETypes;	// IMP=0x000000000010b230
+ (id)supportedMediaMIMETypes;	// IMP=0x000000000010b0d0
+ (id)supportedMIMETypes;	// IMP=0x000000000010b030
- (id)matchLabels:(id)arg1 againstElement:(id)arg2;	// IMP=0x000000000010c940
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2 resultDistance:(unsigned long long *)arg3 resultIsInCellAbove:(_Bool *)arg4;	// IMP=0x000000000010c3f0
- (id)searchForLabels:(id)arg1 beforeElement:(id)arg2;	// IMP=0x000000000010c3d0
- (id)controlsInForm:(id)arg1;	// IMP=0x000000000010c1e0
- (id)currentForm;	// IMP=0x000000000010c1a0
- (id)formForElement:(id)arg1;	// IMP=0x000000000010c150
- (_Bool)elementIsPassword:(id)arg1;	// IMP=0x000000000010c100
- (_Bool)elementDoesAutoComplete:(id)arg1;	// IMP=0x000000000010c090
- (id)elementWithName:(id)arg1 inForm:(id)arg2;	// IMP=0x000000000010bed0
- (id)DOMDocument;	// IMP=0x000000000010be90
- (id)title;	// IMP=0x000000000010be40
- (id)documentSource;	// IMP=0x000000000010bc00
- (_Bool)canSaveAsWebArchive;	// IMP=0x000000000010bbc0
- (_Bool)canProvideDocumentSource;	// IMP=0x000000000010bb80
- (void)finishedLoadingWithDataSource:(id)arg1;	// IMP=0x000000000010bac0
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;	// IMP=0x000000000010ba90
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;	// IMP=0x000000000010b7f0
- (_Bool)_isDisplayingWebArchive;	// IMP=0x000000000010b7b0
- (void)setDataSource:(id)arg1;	// IMP=0x000000000010b750
- (void)_redirectDataToManualLoader:(id)arg1 forPluginView:(id)arg2;	// IMP=0x000000000010b730
- (void)dealloc;	// IMP=0x000000000010b6d0
- (id)init;	// IMP=0x000000000010b680

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
