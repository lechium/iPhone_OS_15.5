//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAdViewControllerProviding-Protocol.h>

@class NSString, UIViewController;
@protocol SVVideoAdViewControllerProviding;

@interface SVVideoAdViewControllerProvider : NSObject <SVVideoAdViewControllerProviding>
{
    id <SVVideoAdViewControllerProviding> _viewControllerProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000bafe
@property(readonly, nonatomic) __weak id <SVVideoAdViewControllerProviding> viewControllerProvider; // @synthesize viewControllerProvider=_viewControllerProvider;
@property(readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
- (id)initWithViewControllerProvider:(id)arg1;	// IMP=0x000000000000ba34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
