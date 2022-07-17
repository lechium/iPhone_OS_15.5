//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInReaderEnabledPageController;

@interface _SFReaderWebProcessPlugInPageController
{
    struct unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::default_delete<SafariServices::WebProcessPlugInReaderJSController>> _readerJSController;	// 8 = 0x8
    WKWebProcessPlugInScriptWorld *_isolatedWorldForNextPageDetection;	// 16 = 0x10
    _SFWebProcessPlugInReaderEnabledPageController *_originalPageController;	// 24 = 0x18
}

+ (id)readerPageControllerForContextHandle:(id)arg1;	// IMP=0x0000000000056a27
- (id).cxx_construct;	// IMP=0x0000000000056dee
- (void).cxx_destruct;	// IMP=0x0000000000056d9a
@property(nonatomic) __weak _SFWebProcessPlugInReaderEnabledPageController *originalPageController; // @synthesize originalPageController=_originalPageController;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;	// IMP=0x0000000000056cf1
- (id)printingMailingFrame;	// IMP=0x0000000000056cc3
- (id)collectReaderContentFromPrintAndMailingFrame;	// IMP=0x0000000000056c95
- (id)isolatedWorldForNextPageDetection;	// IMP=0x0000000000056c1b
- (void)setArticleLocale:(id)arg1;	// IMP=0x0000000000056bcc
- (void)setReaderIsActive:(_Bool)arg1;	// IMP=0x0000000000056bad
- (void)setConfiguration:(id)arg1;	// IMP=0x0000000000056b5e
- (void)reloadArticle;	// IMP=0x0000000000056b42
- (void)loadNewArticle;	// IMP=0x0000000000056b26
- (void)_initializeReaderJSControllerForFrame:(id)arg1;	// IMP=0x0000000000056a9e
- (struct OpaqueJSValue *)originalArticleFinder;	// IMP=0x0000000000056a50
- (void)willDestroyBrowserContextController:(id)arg1;	// IMP=0x0000000000056951
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;	// IMP=0x000000000005680e

@end
