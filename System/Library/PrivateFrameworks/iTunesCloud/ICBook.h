//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSDate, NSString, NSURL;

@interface ICBook : NSObject <NSSecureCoding>
{
    _Bool _vppLicensed;	// 8 = 0x8
    unsigned long long _purchaseHistoryID;	// 16 = 0x10
    unsigned long long _storeID;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_author;	// 40 = 0x28
    NSString *_genre;	// 48 = 0x30
    NSDate *_datePurchased;	// 56 = 0x38
    NSURL *_artworkURL;	// 64 = 0x40
    NSString *_redownloadParameters;	// 72 = 0x48
    NSString *_vppOrganizationID;	// 80 = 0x50
    NSString *_vppOrganizationDisplayName;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000012b479
- (void).cxx_destruct;	// IMP=0x000000000012b40f
@property(copy, nonatomic) NSString *vppOrganizationDisplayName; // @synthesize vppOrganizationDisplayName=_vppOrganizationDisplayName;
@property(copy, nonatomic) NSString *vppOrganizationID; // @synthesize vppOrganizationID=_vppOrganizationID;
@property(nonatomic, getter=isVPPLicensed) _Bool vppLicensed; // @synthesize vppLicensed=_vppLicensed;
@property(copy, nonatomic) NSString *redownloadParameters; // @synthesize redownloadParameters=_redownloadParameters;
@property(copy, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(copy, nonatomic) NSDate *datePurchased; // @synthesize datePurchased=_datePurchased;
@property(copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long storeID; // @synthesize storeID=_storeID;
@property(nonatomic) unsigned long long purchaseHistoryID; // @synthesize purchaseHistoryID=_purchaseHistoryID;
- (id)description;	// IMP=0x000000000012b285
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000012b032
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000012ad2f

@end
