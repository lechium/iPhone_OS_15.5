//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSSet;
@protocol _SFBrowserDocument;

@interface SFBrowserDocumentTrackerInfo : NSObject
{
    _Bool _cachedTrackingPreventionEnabled;	// 8 = 0x8
    NSDate *_lastNavigationCommitDate;	// 16 = 0x10
    id <_SFBrowserDocument> _document;	// 24 = 0x18
    NSSet *_allowedKnownTrackingThirdParties;	// 32 = 0x20
    NSSet *_preventedKnownTrackingThirdParties;	// 40 = 0x28
}

+ (_Bool)trackingPreventionEnabled;	// IMP=0x000000000005f069
- (void).cxx_destruct;	// IMP=0x000000000005f6d3
@property(readonly, nonatomic) NSSet *preventedKnownTrackingThirdParties; // @synthesize preventedKnownTrackingThirdParties=_preventedKnownTrackingThirdParties;
@property(readonly, nonatomic) NSSet *allowedKnownTrackingThirdParties; // @synthesize allowedKnownTrackingThirdParties=_allowedKnownTrackingThirdParties;
@property(readonly, nonatomic) __weak id <_SFBrowserDocument> document; // @synthesize document=_document;
- (void)_flushKnownTrackingThirdParties;	// IMP=0x000000000005f4fb
- (void)_resetKnownTrackingThirdParties;	// IMP=0x000000000005f48e
- (void)_updateKnownTrackingThirdPartiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005f2bc
- (void)documentDidCommitNavigation;	// IMP=0x000000000005f271
- (void)updateKnownTrackingThirdPartiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005f20a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005f13a
- (void)dealloc;	// IMP=0x000000000005f0b4
- (id)initWithDocument:(id)arg1;	// IMP=0x000000000005ef75

@end

