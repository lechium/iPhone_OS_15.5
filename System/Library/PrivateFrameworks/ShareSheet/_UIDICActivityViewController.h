//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIDocumentInteractionController;
@protocol _UIDICActivityViewControllerDelegate;

@interface _UIDICActivityViewController
{
    _Bool _isPerformingActivity;	// 8 = 0x8
    UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *_documentInteractionActivityDelegate;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
    id <_UIDICActivityViewControllerDelegate> _documentInteractionActivityDelegateRetained;	// 32 = 0x20
    NSString *_openActivityTargetApplicationIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008886a
@property(retain, nonatomic) NSString *openActivityTargetApplicationIdentifier; // @synthesize openActivityTargetApplicationIdentifier=_openActivityTargetApplicationIdentifier;
@property(retain, nonatomic) id <_UIDICActivityViewControllerDelegate> documentInteractionActivityDelegateRetained; // @synthesize documentInteractionActivityDelegateRetained=_documentInteractionActivityDelegateRetained;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) _Bool isPerformingActivity; // @synthesize isPerformingActivity=_isPerformingActivity;
@property(nonatomic) __weak UIDocumentInteractionController<_UIDICActivityViewControllerDelegate> *documentInteractionActivityDelegate; // @synthesize documentInteractionActivityDelegate=_documentInteractionActivityDelegate;
- (void)_handleDidFinishPerformingActivityType:(id)arg1 completed:(_Bool)arg2 resultItems:(id)arg3 activityError:(id)arg4;	// IMP=0x000000000008869f
- (void)_willPerformInServiceActivityType:(id)arg1 activitySpecificMetadata:(id)arg2;	// IMP=0x000000000008858a
- (void)_performActivity:(id)arg1;	// IMP=0x000000000008850d
- (void)_prepareActivity:(id)arg1;	// IMP=0x00000000000883fd
- (_Bool)_shouldShowSystemActivityType:(id)arg1;	// IMP=0x00000000000883e8
- (_Bool)hidesSystemActivities;	// IMP=0x00000000000883d4
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000008820d

@end
