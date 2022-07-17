//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface ASDClipCardMetricsEvent : NSObject <NSSecureCoding>
{
    _Bool _thirdPartyWithNoAppReferrer;	// 8 = 0x8
    NSString *_bundleID;	// 16 = 0x10
    NSNumber *_itemID;	// 24 = 0x18
    NSString *_referralSource;	// 32 = 0x20
    NSString *_referralSourceBundleID;	// 40 = 0x28
    NSString *_referrerType;	// 48 = 0x30
    NSURL *_sourceURL;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000733fe
- (void).cxx_destruct;	// IMP=0x00000000000736f6
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) _Bool thirdPartyWithNoAppReferrer; // @synthesize thirdPartyWithNoAppReferrer=_thirdPartyWithNoAppReferrer;
@property(retain, nonatomic) NSString *referrerType; // @synthesize referrerType=_referrerType;
@property(retain, nonatomic) NSString *referralSourceBundleID; // @synthesize referralSourceBundleID=_referralSourceBundleID;
@property(retain, nonatomic) NSString *referralSource; // @synthesize referralSource=_referralSource;
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073591
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000073406
- (id)initWithClipBundleID:(id)arg1;	// IMP=0x0000000000073341

@end
