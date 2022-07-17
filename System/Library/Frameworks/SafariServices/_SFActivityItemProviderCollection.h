//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WKWebView, _SFActivityItemProvider, _SFPrintActivityItemProvider;

@interface _SFActivityItemProviderCollection : NSObject
{
    _Bool _displayingDigitalHealthLockoutView;	// 8 = 0x8
    _Bool _displayingStandaloneImage;	// 9 = 0x9
    _Bool _displayingStandaloneMedia;	// 10 = 0xa
    _SFActivityItemProvider *_standaloneImageProvider;	// 16 = 0x10
    _SFActivityItemProvider *_webArchiveProvider;	// 24 = 0x18
    WKWebView *_webView;	// 32 = 0x20
    _SFActivityItemProvider *_linkProvider;	// 40 = 0x28
    _SFPrintActivityItemProvider *_printProvider;	// 48 = 0x30
    _SFActivityItemProvider *_javaScriptExtensionProvider;	// 56 = 0x38
    _SFActivityItemProvider *_downloadProvider;	// 64 = 0x40
    _SFActivityItemProvider *_documentProvider;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000340fd
@property(retain, nonatomic) _SFActivityItemProvider *documentProvider; // @synthesize documentProvider=_documentProvider;
@property(retain, nonatomic) _SFActivityItemProvider *downloadProvider; // @synthesize downloadProvider=_downloadProvider;
@property(retain, nonatomic) _SFActivityItemProvider *javaScriptExtensionProvider; // @synthesize javaScriptExtensionProvider=_javaScriptExtensionProvider;
@property(retain, nonatomic) _SFPrintActivityItemProvider *printProvider; // @synthesize printProvider=_printProvider;
@property(retain, nonatomic) _SFActivityItemProvider *linkProvider; // @synthesize linkProvider=_linkProvider;
@property(nonatomic) _Bool displayingStandaloneMedia; // @synthesize displayingStandaloneMedia=_displayingStandaloneMedia;
@property(nonatomic) _Bool displayingStandaloneImage; // @synthesize displayingStandaloneImage=_displayingStandaloneImage;
@property(nonatomic) _Bool displayingDigitalHealthLockoutView; // @synthesize displayingDigitalHealthLockoutView=_displayingDigitalHealthLockoutView;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (id)activityItemProvidersWithCustomizationController:(id)arg1;	// IMP=0x0000000000033cba
@property(readonly, nonatomic) _SFActivityItemProvider *webArchiveProvider; // @synthesize webArchiveProvider=_webArchiveProvider;
@property(readonly, nonatomic) _SFActivityItemProvider *standaloneImageProvider; // @synthesize standaloneImageProvider=_standaloneImageProvider;
- (id)initWithWebView:(id)arg1;	// IMP=0x0000000000033b3d

@end
