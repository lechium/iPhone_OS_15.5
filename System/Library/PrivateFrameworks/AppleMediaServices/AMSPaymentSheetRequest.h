//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSBiometricsSignatureRequest, NSArray, NSAttributedString, NSDictionary, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSPaymentSheetRequest : NSObject
{
    _Bool _applePayClassic;	// 8 = 0x8
    _Bool _requiresAuthorization;	// 9 = 0x9
    _Bool _shouldUppercaseText;	// 10 = 0xa
    _Bool _isDelegateAuthentication;	// 11 = 0xb
    ACAccount *_account;	// 16 = 0x10
    NSString *_accountHeader;	// 24 = 0x18
    NSArray *_attributedList;	// 32 = 0x20
    AMSBiometricsSignatureRequest *_biometricsRequest;	// 40 = 0x28
    long long _confirmationTitle;	// 48 = 0x30
    NSString *_currencyCode;	// 56 = 0x38
    NSString *_countryCode;	// 64 = 0x40
    NSString *_delegateAuthenticateChallenge;	// 72 = 0x48
    NSString *_displayPrice;	// 80 = 0x50
    NSString *_explanation;	// 88 = 0x58
    NSArray *_flexList;	// 96 = 0x60
    NSArray *_inlineImages;	// 104 = 0x68
    NSString *_logKey;	// 112 = 0x70
    NSDictionary *_merchantSession;	// 120 = 0x78
    NSString *_message;	// 128 = 0x80
    long long _payee;	// 136 = 0x88
    NSString *_paymentSession;	// 144 = 0x90
    NSString *_paymentSummary;	// 152 = 0x98
    NSArray *_preSheetDialog;	// 160 = 0xa0
    NSNumber *_price;	// 168 = 0xa8
    NSArray *_priceSectionItems;	// 176 = 0xb0
    NSString *_ratingHeader;	// 184 = 0xb8
    NSString *_ratingValue;	// 192 = 0xc0
    long long _salableIcon;	// 200 = 0xc8
    NSURL *_salableIconURL;	// 208 = 0xd0
    NSArray *_salableInfo;	// 216 = 0xd8
    NSAttributedString *_salableInfoLabel;	// 224 = 0xe0
    NSString *_storeName;	// 232 = 0xe8
    NSString *_title;	// 240 = 0xf0
    long long _titleType;	// 248 = 0xf8
    NSString *_userAgent;	// 256 = 0x100
    NSDictionary *_responseDictionary;	// 264 = 0x108
}

+ (id)attributedStringByRemovingPlaceholderTagsFromAttributedString:(id)arg1;	// IMP=0x00000000001cd2b1
- (void).cxx_destruct;	// IMP=0x00000000001d1cd9
@property(copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(nonatomic) _Bool isDelegateAuthentication; // @synthesize isDelegateAuthentication=_isDelegateAuthentication;
@property(copy, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) long long titleType; // @synthesize titleType=_titleType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(nonatomic) _Bool shouldUppercaseText; // @synthesize shouldUppercaseText=_shouldUppercaseText;
@property(copy, nonatomic) NSAttributedString *salableInfoLabel; // @synthesize salableInfoLabel=_salableInfoLabel;
@property(copy, nonatomic) NSArray *salableInfo; // @synthesize salableInfo=_salableInfo;
@property(copy, nonatomic) NSURL *salableIconURL; // @synthesize salableIconURL=_salableIconURL;
@property(nonatomic) long long salableIcon; // @synthesize salableIcon=_salableIcon;
@property(nonatomic) _Bool requiresAuthorization; // @synthesize requiresAuthorization=_requiresAuthorization;
@property(copy, nonatomic) NSString *ratingValue; // @synthesize ratingValue=_ratingValue;
@property(copy, nonatomic) NSString *ratingHeader; // @synthesize ratingHeader=_ratingHeader;
@property(copy, nonatomic) NSArray *priceSectionItems; // @synthesize priceSectionItems=_priceSectionItems;
@property(copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSArray *preSheetDialog; // @synthesize preSheetDialog=_preSheetDialog;
@property(copy, nonatomic) NSString *paymentSummary; // @synthesize paymentSummary=_paymentSummary;
@property(copy, nonatomic) NSString *paymentSession; // @synthesize paymentSession=_paymentSession;
@property(nonatomic) long long payee; // @synthesize payee=_payee;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSDictionary *merchantSession; // @synthesize merchantSession=_merchantSession;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSArray *inlineImages; // @synthesize inlineImages=_inlineImages;
@property(copy, nonatomic) NSArray *flexList; // @synthesize flexList=_flexList;
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(copy, nonatomic) NSString *displayPrice; // @synthesize displayPrice=_displayPrice;
@property(copy, nonatomic) NSString *delegateAuthenticateChallenge; // @synthesize delegateAuthenticateChallenge=_delegateAuthenticateChallenge;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic) long long confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest; // @synthesize biometricsRequest=_biometricsRequest;
@property(copy, nonatomic) NSArray *attributedList; // @synthesize attributedList=_attributedList;
@property(nonatomic, getter=isApplePayClassic) _Bool applePayClassic; // @synthesize applePayClassic=_applePayClassic;
@property(copy, nonatomic) NSString *accountHeader; // @synthesize accountHeader=_accountHeader;
@property(copy, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) _Bool requiresDelegateAuthentication;
- (id)init;	// IMP=0x00000000001d18a1
- (struct CGImage *)_createRGBImageRefForGreyScaleImageRef:(struct CGImage *)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;	// IMP=0x00000000001d1571
- (struct CGImage *)_createRatingImageWithStringValue:(id)arg1 assetScale:(float *)arg2;	// IMP=0x00000000001d10fc
- (struct CGImage *)_createMaskedImageRefForImageRef:(struct CGImage *)arg1 withPathRef:(struct CGPath *)arg2 andAdornmentStyle:(long long)arg3;	// IMP=0x00000000001d0cf4
- (struct CGImage *)_createImageRefWithURL:(id)arg1 adornmentStyle:(long long)arg2 bag:(id)arg3;	// IMP=0x00000000001d0128
- (struct CGImage *)_createImageRefForImageSource:(struct CGImageSource *)arg1 screenScale:(float)arg2 outAssetScale:(float *)arg3;	// IMP=0x00000000001d005e
- (struct CGImage *)_createImageMaskRefWithSize:(struct CGSize)arg1 andPath:(struct CGPath *)arg2;	// IMP=0x00000000001cfe71
- (struct CGImage *)_createImageRefForImageURL:(id)arg1 outAssetScale:(float *)arg2;	// IMP=0x00000000001cfaf8
- (struct CGImage *)_createImageForResourceName:(id)arg1 outAssetScale:(float *)arg2;	// IMP=0x00000000001cf68d
- (struct CGImage *)_createDefaultImageWithImageRef:(struct CGImage *)arg1 size:(struct CGSize)arg2 borderPath:(struct CGPath *)arg3;	// IMP=0x00000000001cf4f6
- (struct CGPath *)_createBorderPathForAdornmentStyle:(long long)arg1 iconWidth:(double)arg2 iconHeight:(double)arg3;	// IMP=0x00000000001cf25c
- (id)_summaryItemsForAttributedList:(id)arg1 assetCache:(id)arg2 bag:(id)arg3;	// IMP=0x00000000001ce7b3
- (id)_replaceImagePlaceholderTagWithImageData:(id)arg1 tag:(id)arg2 data:(id)arg3 scale:(float)arg4 tint:(_Bool)arg5;	// IMP=0x00000000001cdd40
- (long long)_imageTypeForURL:(id)arg1;	// IMP=0x00000000001cdcaa
- (id)_contentItemsForFlexibleList:(id)arg1 assetCache:(id)arg2 bag:(id)arg3;	// IMP=0x00000000001cd6b1
- (unsigned long long)_countImagePlaceholderTags:(id)arg1;	// IMP=0x00000000001cd4d1
- (id)ams_createContentItemForSalableInfoWithAssetCache:(id)arg1 bag:(id)arg2;	// IMP=0x00000000001cc373
- (id)ams_createContentItemForRating;	// IMP=0x00000000001cc26b
- (id)ams_createContentItemsForPreScreenDialogWithAssetCache:(id)arg1 bag:(id)arg2;	// IMP=0x00000000001cc1d1
- (id)ams_createContentItemsForFlexibleListWithAssetCache:(id)arg1 bag:(id)arg2;	// IMP=0x00000000001cc137
- (id)ams_createContentItemForDeviceName:(id)arg1;	// IMP=0x00000000001cc12f
- (id)ams_createContentItemForAccount;	// IMP=0x00000000001cbdde
- (id)ams_createSummaryItemsForAttributedListWithAssetCache:(id)arg1 bag:(id)arg2;	// IMP=0x00000000001cbd44
- (id)ams_createSummaryItems;	// IMP=0x00000000001cb7ea
@property(readonly, nonatomic) unsigned long long ams_paymentRequestorType;
@property(readonly, nonatomic) unsigned long long ams_confirmationStyle;

@end

