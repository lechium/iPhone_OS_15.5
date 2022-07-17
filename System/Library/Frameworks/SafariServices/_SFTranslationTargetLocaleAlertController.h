//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

#import <SafariServices/_SFTranslationTargetLocaleAlertControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, WBSTranslationContext;
@protocol _SFTranslationTargetLocaleAlertControllerDelegate;

@interface _SFTranslationTargetLocaleAlertController : UIAlertController <_SFTranslationTargetLocaleAlertControllerDelegate>
{
    WBSTranslationContext *_translationContext;	// 8 = 0x8
    id <_SFTranslationTargetLocaleAlertControllerDelegate> _delegate;	// 16 = 0x10
    CDUnknownBlockType _analyticsHandler;	// 24 = 0x18
    NSMutableDictionary *_localeIdentifierToAlertActionMap;	// 32 = 0x20
}

+ (id)translationAlertControllerWithDelegate:(id)arg1 localeIdentifiers:(id)arg2;	// IMP=0x0000000000075521
- (void).cxx_destruct;	// IMP=0x00000000000766a2
@property(retain, nonatomic) NSMutableDictionary *localeIdentifierToAlertActionMap; // @synthesize localeIdentifierToAlertActionMap=_localeIdentifierToAlertActionMap;
@property(copy, nonatomic) CDUnknownBlockType analyticsHandler; // @synthesize analyticsHandler=_analyticsHandler;
@property(nonatomic) __weak id <_SFTranslationTargetLocaleAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)translationAlertController:(id)arg1 validateTargetLocale:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000765b9
- (void)translationAlertController:(id)arg1 didSelectLocale:(id)arg2;	// IMP=0x0000000000076551
- (void)_translationAvailabilityDidChange:(id)arg1;	// IMP=0x00000000000763cc
- (void)translationAvailabilityDidChange;	// IMP=0x0000000000076076
- (void)configurePopoverWithSourceInfo:(id)arg1;	// IMP=0x0000000000075fcd
- (id)initWithTranslationContext:(id)arg1;	// IMP=0x0000000000075ea0
- (void)_setUpWithLocaleIdentifiers:(id)arg1;	// IMP=0x00000000000755bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
