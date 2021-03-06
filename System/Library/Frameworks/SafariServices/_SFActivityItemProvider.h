//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSSet, NSString, NSURL, WKWebView;

@interface _SFActivityItemProvider : UIActivityItemProvider
{
    NSURL *_url;	// 8 = 0x8
    NSString *_pageTitle;	// 16 = 0x10
    NSSet *_excludedActivityTypes;	// 24 = 0x18
    CDUnknownBlockType _thumbnailHandler;	// 32 = 0x20
    WKWebView *_webView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006e2cd
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType thumbnailHandler; // @synthesize thumbnailHandler=_thumbnailHandler;
@property(copy, nonatomic) NSSet *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;	// IMP=0x000000000006e1e3
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x000000000006e146
- (void)main;	// IMP=0x000000000006e0a6
- (id)item;	// IMP=0x000000000006e091
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x000000000006e03f
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3;	// IMP=0x000000000006e024
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4;	// IMP=0x000000000006df0d
- (id)initWithPlaceholderItem:(id)arg1;	// IMP=0x000000000006deff

@end

