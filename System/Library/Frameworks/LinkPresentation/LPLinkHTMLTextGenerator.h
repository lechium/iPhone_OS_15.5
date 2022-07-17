//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPLinkHTMLGeneratorDelegate-Protocol.h>

@class LPLinkHTMLGenerator, LPLinkMetadata, NSString, NSURL, WebView;
@protocol LPLinkHTMLTextGeneratorDelegate;

@interface LPLinkHTMLTextGenerator : NSObject <LPLinkHTMLGeneratorDelegate>
{
    WebView *_webView;	// 8 = 0x8
    LPLinkHTMLGenerator *_DOMGenerator;	// 16 = 0x10
    NSString *_generatedFragmentText;	// 24 = 0x18
    id <LPLinkHTMLTextGeneratorDelegate> _delegate;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x00000000000b9a9f
- (void).cxx_destruct;	// IMP=0x00000000000ba21c
@property(nonatomic) __weak id <LPLinkHTMLTextGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)linkHTMLGenerator:(id)arg1 URLForResource:(id)arg2 withMIMEType:(id)arg3;	// IMP=0x00000000000ba035
@property(readonly, copy, nonatomic) NSString *HTMLFragmentString;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(copy, nonatomic) LPLinkMetadata *metadata;
@property(nonatomic) _Bool generateEmailCompatibleMarkup;
- (void)_commonInitWithPresentationProperties:(id)arg1 URL:(id)arg2;	// IMP=0x00000000000b9bd4
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;	// IMP=0x00000000000b9b38
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000b9ab7
- (id)init;	// IMP=0x00000000000b9aa9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
