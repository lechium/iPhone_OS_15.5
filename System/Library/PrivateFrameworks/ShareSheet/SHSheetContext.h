//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPLinkMetadata, NSArray, NSString, UIActivityViewController;
@protocol UIActivityViewControllerObjectManipulationDelegate;

@interface SHSheetContext : NSObject
{
    _Bool _allowsEmbedding;	// 8 = 0x8
    _Bool _configureForCloudSharing;	// 9 = 0x9
    _Bool _configureForPhotosEdit;	// 10 = 0xa
    _Bool _hideHeaderView;	// 11 = 0xb
    _Bool _isContentManaged;	// 12 = 0xc
    _Bool _shouldSuggestFamilyMembers;	// 13 = 0xd
    _Bool _allowsProminentActivity;	// 14 = 0xe
    _Bool _showKeyboardAutomatically;	// 15 = 0xf
    _Bool _whitelistActionActivitiesOnly;	// 16 = 0x10
    _Bool _requestPartialSlotsRendering;	// 17 = 0x11
    _Bool _showHeroActionsHorizontally;	// 18 = 0x12
    UIActivityViewController *_activityViewController;	// 24 = 0x18
    NSArray *_activityItems;	// 32 = 0x20
    NSArray *_activityTypesToCreateInShareService;	// 40 = 0x28
    long long _sharingStyle;	// 48 = 0x30
    NSArray *_applicationActivities;	// 56 = 0x38
    NSArray *_activityTypeOrder;	// 64 = 0x40
    NSArray *_excludedActivityTypes;	// 72 = 0x48
    NSArray *_includedActivityTypes;	// 80 = 0x50
    NSArray *_heroActionActivityTypes;	// 88 = 0x58
    long long _excludedActivityCategories;	// 96 = 0x60
    NSString *_topContentSectionText;	// 104 = 0x68
    LPLinkMetadata *_photosHeaderMetadata;	// 112 = 0x70
    NSArray *_selectedAssetIdentifiers;	// 120 = 0x78
    id <UIActivityViewControllerObjectManipulationDelegate> _objectManipulationDelegate;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000001f49
@property(nonatomic) __weak id <UIActivityViewControllerObjectManipulationDelegate> objectManipulationDelegate; // @synthesize objectManipulationDelegate=_objectManipulationDelegate;
@property(copy, nonatomic) NSArray *selectedAssetIdentifiers; // @synthesize selectedAssetIdentifiers=_selectedAssetIdentifiers;
@property(retain, nonatomic) LPLinkMetadata *photosHeaderMetadata; // @synthesize photosHeaderMetadata=_photosHeaderMetadata;
@property(nonatomic) _Bool showHeroActionsHorizontally; // @synthesize showHeroActionsHorizontally=_showHeroActionsHorizontally;
@property(nonatomic) _Bool requestPartialSlotsRendering; // @synthesize requestPartialSlotsRendering=_requestPartialSlotsRendering;
@property(nonatomic) _Bool whitelistActionActivitiesOnly; // @synthesize whitelistActionActivitiesOnly=_whitelistActionActivitiesOnly;
@property(nonatomic) _Bool showKeyboardAutomatically; // @synthesize showKeyboardAutomatically=_showKeyboardAutomatically;
@property(nonatomic) _Bool allowsProminentActivity; // @synthesize allowsProminentActivity=_allowsProminentActivity;
@property(nonatomic) _Bool shouldSuggestFamilyMembers; // @synthesize shouldSuggestFamilyMembers=_shouldSuggestFamilyMembers;
@property(nonatomic) _Bool isContentManaged; // @synthesize isContentManaged=_isContentManaged;
@property(retain, nonatomic) NSString *topContentSectionText; // @synthesize topContentSectionText=_topContentSectionText;
@property(nonatomic) _Bool hideHeaderView; // @synthesize hideHeaderView=_hideHeaderView;
@property(nonatomic) _Bool configureForPhotosEdit; // @synthesize configureForPhotosEdit=_configureForPhotosEdit;
@property(nonatomic) _Bool configureForCloudSharing; // @synthesize configureForCloudSharing=_configureForCloudSharing;
@property(nonatomic) _Bool allowsEmbedding; // @synthesize allowsEmbedding=_allowsEmbedding;
@property(nonatomic) long long excludedActivityCategories; // @synthesize excludedActivityCategories=_excludedActivityCategories;
@property(copy, nonatomic) NSArray *heroActionActivityTypes; // @synthesize heroActionActivityTypes=_heroActionActivityTypes;
@property(copy, nonatomic) NSArray *includedActivityTypes; // @synthesize includedActivityTypes=_includedActivityTypes;
@property(copy, nonatomic) NSArray *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property(copy, nonatomic) NSArray *activityTypeOrder; // @synthesize activityTypeOrder=_activityTypeOrder;
@property(retain, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(nonatomic) long long sharingStyle; // @synthesize sharingStyle=_sharingStyle;
@property(readonly, nonatomic) NSArray *activityTypesToCreateInShareService; // @synthesize activityTypesToCreateInShareService=_activityTypesToCreateInShareService;
@property(readonly, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
@property(readonly, nonatomic) __weak UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
- (id)description;	// IMP=0x0000000000001975
- (id)initWithActivityViewController:(id)arg1 activityItems:(id)arg2;	// IMP=0x000000000000184c

@end

