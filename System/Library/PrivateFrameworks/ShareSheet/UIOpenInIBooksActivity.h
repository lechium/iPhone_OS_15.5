//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/LSOpenResourceOperationDelegate-Protocol.h>
#import <ShareSheet/UIManagedConfigurationRestrictableActivity-Protocol.h>

@class LSApplicationProxy, NSOperation, NSString, NSURL, UIPrintInteractionController;

@interface UIOpenInIBooksActivity <LSOpenResourceOperationDelegate, UIManagedConfigurationRestrictableActivity>
{
    _Bool _isContentManaged;	// 8 = 0x8
    _Bool _shouldUnlinkFile;	// 9 = 0x9
    NSString *_sourceApplicationBundleID;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSString *_applicationIdentifier;	// 32 = 0x20
    LSApplicationProxy *_applicationProxy;	// 40 = 0x28
    NSOperation *_operation;	// 48 = 0x30
    UIPrintInteractionController *_printInteractionController;	// 56 = 0x38
}

+ (id)bestJobNameForActivityItems:(id)arg1;	// IMP=0x000000000007c48e
+ (id)jobNameFormatForFile;	// IMP=0x000000000007c432
+ (id)defaultJobName;	// IMP=0x000000000007c3d6
+ (long long)activityCategory;	// IMP=0x000000000007ae13
+ (unsigned long long)_xpcAttributes;	// IMP=0x000000000007ad52
- (void).cxx_destruct;	// IMP=0x000000000007c7a0
@property(retain, nonatomic) UIPrintInteractionController *printInteractionController; // @synthesize printInteractionController=_printInteractionController;
@property(retain, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) LSApplicationProxy *applicationProxy; // @synthesize applicationProxy=_applicationProxy;
@property(retain, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(nonatomic) _Bool shouldUnlinkFile; // @synthesize shouldUnlinkFile=_shouldUnlinkFile;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *sourceApplicationBundleID; // @synthesize sourceApplicationBundleID=_sourceApplicationBundleID;
@property(nonatomic) _Bool isContentManaged; // @synthesize isContentManaged=_isContentManaged;
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x000000000007bc26
- (void)_handleSaveToPDFWithCompleted:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000007bb30
- (void)performActivity;	// IMP=0x000000000007b79c
- (void)_finishedCopyingResource:(_Bool)arg1;	// IMP=0x000000000007b650
- (void)openResourceOperationDidComplete:(id)arg1;	// IMP=0x000000000007b5d6
- (void)openResourceOperation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000007b55f
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;	// IMP=0x000000000007b4e5
- (void)_openDocumentWithApplication;	// IMP=0x000000000007b3a1
- (id)_loadedApplicationProxy;	// IMP=0x000000000007b2e9
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000007b11b
- (_Bool)_appIsDocumentTypeOwner;	// IMP=0x000000000007ae7a
- (id)activityTitle;	// IMP=0x000000000007ae1e
- (id)_bundleIdentifierForActivityImageCreation;	// IMP=0x000000000007ae06
- (id)activityType;	// IMP=0x000000000007addd
- (long long)_defaultSortGroup;	// IMP=0x000000000007add2
- (id)init;	// IMP=0x000000000007ad7f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
