//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSString, SKUIURL, SKUIURLResolver, UIViewController;

@protocol SKUIURLResolverDelegate <NSObject>
- (void)URLResolver:(SKUIURLResolver *)arg1 showURL:(SKUIURL *)arg2 withTabIdentifier:(NSString *)arg3;
- (void)URLResolver:(SKUIURLResolver *)arg1 showTransientViewController:(UIViewController *)arg2;
- (UIViewController *)presentationViewControllerForURLResolver:(SKUIURLResolver *)arg1;

@optional
- (_Bool)URLResolver:(SKUIURLResolver *)arg1 shouldPerformDefaultActionForURL:(SKUIURL *)arg2;
- (void)URLResolver:(SKUIURLResolver *)arg1 didFinishWithResult:(_Bool)arg2;
@end

