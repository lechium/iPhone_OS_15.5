//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariSharedUI/WKWebProcessPlugIn-Protocol.h>

@class NSArray, NSMapTable, NSString, WBSSearchProvider, WKWebProcessPlugInController;

@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn>
{
    NSMapTable *_browserContextControllersToWebProcessPlugInPageControllers;	// 8 = 0x8
    WKWebProcessPlugInController *_plugInController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000b6f7c
@property(readonly, nonatomic) WKWebProcessPlugInController *plugInController; // @synthesize plugInController=_plugInController;
- (void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2;	// IMP=0x00000000000b6f6c
- (void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2;	// IMP=0x00000000000b6f66
- (void)webProcessPlugIn:(id)arg1 willDestroyBrowserContextController:(id)arg2;	// IMP=0x00000000000b6ec8
- (void)webProcessPlugIn:(id)arg1 didCreateBrowserContextController:(id)arg2;	// IMP=0x00000000000b6e45
- (void)webProcessPlugIn:(id)arg1 initializeWithObject:(id)arg2;	// IMP=0x00000000000b6dde
- (id)pageControllerWithBrowserContextController:(id)arg1;	// IMP=0x00000000000b6cb4
@property(readonly, nonatomic) unsigned long long parsecABGroupIdentifier;
@property(readonly, nonatomic, getter=isParsecABTestingEnabled) _Bool parsecABTestingEnabled;
@property(readonly, nonatomic) WBSSearchProvider *defaultSearchProvider;
@property(readonly, nonatomic) NSArray *searchEnginesForRedirectToSafeSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
