//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MobileSafariUI/_SFDigitalHealthHostingViewController-Protocol.h>

@class TabDocument, _SFBrowserView, _SFDigitalHealthViewController, _SFLinkPreviewHeader;

__attribute__((visibility("hidden")))
@interface LinkPreviewViewController : UIViewController <_SFDigitalHealthHostingViewController>
{
    _SFDigitalHealthViewController *_digitalHealthViewController;	// 8 = 0x8
    TabDocument *_previewTabDocument;	// 16 = 0x10
    _SFBrowserView *_browserView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000007908b
@property(readonly, nonatomic) _SFBrowserView *browserView; // @synthesize browserView=_browserView;
@property(readonly, nonatomic) __weak TabDocument *previewTabDocument; // @synthesize previewTabDocument=_previewTabDocument;
@property(retain, nonatomic) _SFDigitalHealthViewController *digitalHealthViewController; // @synthesize digitalHealthViewController=_digitalHealthViewController;
- (void)displayHostedDigitalHealthView;	// IMP=0x0000000000078e8b
- (void)willCommitPreviewedWebView;	// IMP=0x0000000000078d3c
- (void)updatePreviewLoadingUIWithURLString:(id)arg1;	// IMP=0x0000000000078d1e
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000078b55
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000078af7
@property(readonly, nonatomic) _SFLinkPreviewHeader *previewHeader;
- (void)loadView;	// IMP=0x00000000000788cb
- (id)initWithTabDocument:(id)arg1;	// IMP=0x00000000000787ba

@end

