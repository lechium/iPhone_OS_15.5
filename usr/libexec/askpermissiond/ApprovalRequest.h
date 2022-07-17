//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL, RequestLocalizations;

@interface ApprovalRequest : NSObject
{
    _Bool _mocked;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_itemIdentifier;	// 32 = 0x20
    RequestLocalizations *_localizations;	// 40 = 0x28
    long long _status;	// 48 = 0x30
    NSString *_ageRating;	// 56 = 0x38
    NSString *_approverDSID;	// 64 = 0x40
    NSString *_itemTitle;	// 72 = 0x48
    NSString *_itemDescription;	// 80 = 0x50
    NSString *_localizedPrice;	// 88 = 0x58
    NSString *_itemBundleID;	// 96 = 0x60
    NSString *_offerName;	// 104 = 0x68
    NSURL *_previewURL;	// 112 = 0x70
    NSString *_productType;	// 120 = 0x78
    NSString *_productTypeName;	// 128 = 0x80
    NSURL *_productURL;	// 136 = 0x88
    NSString *_thumbnailURLString;	// 144 = 0x90
    NSString *_requesterName;	// 152 = 0x98
    NSString *_requesterDSID;	// 160 = 0xa0
    NSDictionary *_requestInfo;	// 168 = 0xa8
    NSNumber *_starRating;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000001df98
@property(readonly, nonatomic) NSNumber *starRating; // @synthesize starRating=_starRating;
@property(readonly, nonatomic) NSDictionary *requestInfo; // @synthesize requestInfo=_requestInfo;
@property(readonly, nonatomic) NSString *requesterDSID; // @synthesize requesterDSID=_requesterDSID;
@property(readonly, nonatomic) NSString *requesterName; // @synthesize requesterName=_requesterName;
@property(readonly, nonatomic) NSString *thumbnailURLString; // @synthesize thumbnailURLString=_thumbnailURLString;
@property(readonly, nonatomic) NSURL *productURL; // @synthesize productURL=_productURL;
@property(readonly, nonatomic) NSString *productTypeName; // @synthesize productTypeName=_productTypeName;
@property(readonly, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL=_previewURL;
@property(readonly, nonatomic, getter=isMocked) _Bool mocked; // @synthesize mocked=_mocked;
@property(readonly, nonatomic) NSString *offerName; // @synthesize offerName=_offerName;
@property(readonly, nonatomic) NSString *itemBundleID; // @synthesize itemBundleID=_itemBundleID;
@property(readonly, nonatomic) NSString *localizedPrice; // @synthesize localizedPrice=_localizedPrice;
@property(readonly, nonatomic) NSString *itemDescription; // @synthesize itemDescription=_itemDescription;
@property(readonly, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(readonly, nonatomic) NSString *approverDSID; // @synthesize approverDSID=_approverDSID;
@property(readonly, nonatomic) NSString *ageRating; // @synthesize ageRating=_ageRating;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) RequestLocalizations *localizations; // @synthesize localizations=_localizations;
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, copy) NSString *description;
- (id)compile;	// IMP=0x001000000001d8b2
- (id)initWithCloudPushDictionary:(id)arg1 bag:(id)arg2;	// IMP=0x001000000001c1c5
- (id)initWithCloudPushDictionary:(id)arg1;	// IMP=0x001000000001c144
- (id)initWithApproverDSID:(id)arg1 date:(id)arg2 identifier:(id)arg3 itemBundleID:(id)arg4 itemDescription:(id)arg5 itemIdentifier:(id)arg6 itemTitle:(id)arg7 localizations:(id)arg8 offerName:(id)arg9 mocked:(_Bool)arg10 previewURL:(id)arg11 productType:(id)arg12 productTypeName:(id)arg13 productURL:(id)arg14 requesterName:(id)arg15 requesterDSID:(id)arg16 requestInfo:(id)arg17 status:(long long)arg18;	// IMP=0x001000000001be99
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000001b840

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
