//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebPageProvider-Protocol.h>

@class AMSMetricsEvent, AMSUIWebClientContext, AMSUIWebNavigationBarModel, AMSUIWebWrapperViewController, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSUIWebRoutePageModel : NSObject <AMSUIWebPageProvider>
{
    NSString *_backgroundColor;	// 8 = 0x8
    AMSMetricsEvent *_impressionEvent;	// 16 = 0x10
    AMSUIWebNavigationBarModel *_navigationBar;	// 24 = 0x18
    NSDictionary *_clientOptions;	// 32 = 0x20
    AMSUIWebClientContext *_context;	// 40 = 0x28
    NSURL *_URL;	// 48 = 0x30
    AMSUIWebWrapperViewController *_viewController;	// 56 = 0x38
    struct CGSize _windowSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000096e53
@property(retain, nonatomic) AMSUIWebWrapperViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDictionary *clientOptions; // @synthesize clientOptions=_clientOptions;
@property(readonly, nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) AMSMetricsEvent *impressionEvent; // @synthesize impressionEvent=_impressionEvent;
@property(readonly, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)_webPageViewController;	// IMP=0x0000000000096c50
- (id)loadPage;	// IMP=0x0000000000096c37
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewControllerForContainer:(id)arg1;	// IMP=0x0000000000096c1d
- (id)initWithJSObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000096a73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
