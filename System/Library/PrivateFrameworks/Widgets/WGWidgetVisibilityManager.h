//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol WGWidgetVisibilityDelegate;

@interface WGWidgetVisibilityManager : NSObject
{
    NSMutableDictionary *_widgetTagsByIdentifier;	// 8 = 0x8
    NSMutableDictionary *_extensionHashByIdentifier;	// 16 = 0x10
    NSMutableDictionary *_mobileGestaltAnswerByWidgetTag;	// 24 = 0x18
    NSMutableDictionary *_visibilityDefaultValueByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_visibilityPreferenceByIdentifier;	// 40 = 0x28
    NSMutableSet *_visibilityOverridenIdentifiers;	// 48 = 0x30
    NSMutableSet *_mobileGestaltQuestions;	// 56 = 0x38
    struct MGNotificationTokenStruct *_mobileGestaltNotificationToken;	// 64 = 0x40
    _Bool _delegateRespondsToWidgetVisibilityDidChange;	// 72 = 0x48
    id <WGWidgetVisibilityDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000542e
@property(retain, nonatomic, getter=_mobileGestaltAnswerByWidgetTag) NSMutableDictionary *mobileGestaltAnswerByWidgetTag; // @synthesize mobileGestaltAnswerByWidgetTag=_mobileGestaltAnswerByWidgetTag;
@property(nonatomic) __weak id <WGWidgetVisibilityDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_widgetVisibilityChanged;	// IMP=0x00000000000053bf
- (void)_widgetVisibilityPreferencesChanged;	// IMP=0x0000000000005388
- (void)_unregisterForVisiblityPreferenceChanges;	// IMP=0x0000000000005360
- (void)_registerForVisiblityPreferenceChanges;	// IMP=0x0000000000005315
- (void)_updateMobileGestaltQuestions;	// IMP=0x0000000000004e00
- (_Bool)_updateWidgetVisibilityPreferences;	// IMP=0x0000000000004cae
- (_Bool)_updateWidgetVisibilityPreference:(id)arg1;	// IMP=0x0000000000004b5b
- (void)_updateWidgetTagsAndIconVisibilityForExtension:(id)arg1;	// IMP=0x0000000000004825
- (void)_updateWidgetTagsAndVisibilityForExtensions:(id)arg1;	// IMP=0x00000000000043ee
- (id)_allWidgetTags;	// IMP=0x0000000000004262
- (id)_widgetTagsForWidgetExtensionInfoDictionary:(id)arg1;	// IMP=0x0000000000004063
- (void)updateVisibilityForExtensions:(id)arg1;	// IMP=0x0000000000003fe2
- (_Bool)isWidgetWithIdentifierVisible:(id)arg1;	// IMP=0x0000000000003d69
- (void)dealloc;	// IMP=0x0000000000003d19
- (id)init;	// IMP=0x0000000000003c15

@end
