//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSAttributedString, NSString, PHAsset, PXContentSyndicationPhotoKitSocialLayerHighlightProvider, SLHighlight, UIImage;
@protocol PXContentSyndicationAttributionInfoChangeDelegate;

@interface PXContentSyndicationAttributionInfo : NSObject
{
    _Bool _syndicationAttributionInfoIsLoading;	// 8 = 0x8
    _Bool _hasSyndicationAttributionInfo;	// 9 = 0x9
    id <PXContentSyndicationAttributionInfoChangeDelegate> _changeDelegate;	// 16 = 0x10
    NSString *_axDescriptionForSyndicationLoadingIndicator;	// 24 = 0x18
    NSString *_syndicationSenderDisplayName;	// 32 = 0x20
    NSString *_senderAppName;	// 40 = 0x28
    NSString *_syndicationSharedWithTitle;	// 48 = 0x30
    NSAttributedString *_savedFromTitle;	// 56 = 0x38
    UIImage *_senderThumbnailImage;	// 64 = 0x40
    NSString *_syndicationAttributionIdentifier;	// 72 = 0x48
    NSString *_axDescriptionForSyndicationContactImage;	// 80 = 0x50
    NSString *_axDescriptionForSyndicationReplyButton;	// 88 = 0x58
    SLHighlight *_highlight;	// 96 = 0x60
    CNContact *_contact;	// 104 = 0x68
    PHAsset *_asset;	// 112 = 0x70
    NSString *_receivingGroupDisplayName;	// 120 = 0x78
    PXContentSyndicationPhotoKitSocialLayerHighlightProvider *_highlightProvider;	// 128 = 0x80
}

+ (id)_nameStringForContact:(id)arg1;	// IMP=0x00000000001d3e6b
+ (id)_sharedContactFetchSerialQueue;	// IMP=0x00000000001d3e3b
+ (id)appIconFetchQueue;	// IMP=0x00000000001d3e0b
- (void).cxx_destruct;	// IMP=0x00000000001d355f
@property(retain, nonatomic) PXContentSyndicationPhotoKitSocialLayerHighlightProvider *highlightProvider; // @synthesize highlightProvider=_highlightProvider;
@property(copy, nonatomic) NSString *receivingGroupDisplayName; // @synthesize receivingGroupDisplayName=_receivingGroupDisplayName;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) SLHighlight *highlight; // @synthesize highlight=_highlight;
@property(copy, nonatomic) NSString *axDescriptionForSyndicationReplyButton; // @synthesize axDescriptionForSyndicationReplyButton=_axDescriptionForSyndicationReplyButton;
@property(copy, nonatomic) NSString *axDescriptionForSyndicationContactImage; // @synthesize axDescriptionForSyndicationContactImage=_axDescriptionForSyndicationContactImage;
@property(retain, nonatomic) NSString *syndicationAttributionIdentifier; // @synthesize syndicationAttributionIdentifier=_syndicationAttributionIdentifier;
@property(retain, nonatomic) UIImage *senderThumbnailImage; // @synthesize senderThumbnailImage=_senderThumbnailImage;
@property(copy, nonatomic) NSAttributedString *savedFromTitle; // @synthesize savedFromTitle=_savedFromTitle;
@property(copy, nonatomic) NSString *syndicationSharedWithTitle; // @synthesize syndicationSharedWithTitle=_syndicationSharedWithTitle;
@property(copy, nonatomic) NSString *senderAppName; // @synthesize senderAppName=_senderAppName;
@property(copy, nonatomic) NSString *syndicationSenderDisplayName; // @synthesize syndicationSenderDisplayName=_syndicationSenderDisplayName;
@property(readonly, copy, nonatomic) NSString *axDescriptionForSyndicationLoadingIndicator; // @synthesize axDescriptionForSyndicationLoadingIndicator=_axDescriptionForSyndicationLoadingIndicator;
@property(nonatomic) __weak id <PXContentSyndicationAttributionInfoChangeDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
@property(nonatomic) _Bool hasSyndicationAttributionInfo; // @synthesize hasSyndicationAttributionInfo=_hasSyndicationAttributionInfo;
@property(nonatomic) _Bool syndicationAttributionInfoIsLoading; // @synthesize syndicationAttributionInfoIsLoading=_syndicationAttributionInfoIsLoading;
- (void)_handleContactFetchCompletion:(id)arg1 error:(id)arg2 oldSyndicationSenderDisplayName:(id)arg3 oldSyndicationSharedWithTitle:(id)arg4 oldImageData:(id)arg5;	// IMP=0x00000000001d3188
- (void)_fetchContactWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d2f4a
- (void)_handleAttributionChanges;	// IMP=0x00000000001d2d62
- (void)_contactChangeDidOccur:(id)arg1;	// IMP=0x00000000001d2d50
- (void)_updateAppNameColorForAttributedString:(id)arg1;	// IMP=0x00000000001d2c4f
- (id)_sfaAttributes;	// IMP=0x00000000001d2b5f
- (void)_invalidateAttributedStrings;	// IMP=0x00000000001d2b45
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x00000000001d2950
- (void)createSyndicatedAppIconWithSize:(struct CGSize)arg1 scale:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d27e5
- (void)fetchAppIconThumbnailImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d2767
- (id)initWithAsset:(id)arg1;	// IMP=0x00000000001d2096

@end

