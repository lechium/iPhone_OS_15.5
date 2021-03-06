//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface WLKAppProxy : NSObject <NSSecureCoding>
{
    _Bool _isEntitled;	// 8 = 0x8
    _Bool _isBetaApp;	// 9 = 0x9
    _Bool _isAppStoreVendable;	// 10 = 0xa
    _Bool _isSystemApp;	// 11 = 0xb
    _Bool _supportsTVApp;	// 12 = 0xc
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSString *_subscriptionInfo;	// 32 = 0x20
    NSNumber *_itemID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a19f
- (void).cxx_destruct;	// IMP=0x000000000002a546
@property(readonly, copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, copy, nonatomic) NSString *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
@property(readonly, nonatomic) _Bool supportsTVApp; // @synthesize supportsTVApp=_supportsTVApp;
@property(readonly, nonatomic) _Bool isSystemApp; // @synthesize isSystemApp=_isSystemApp;
@property(readonly, nonatomic) _Bool isAppStoreVendable; // @synthesize isAppStoreVendable=_isAppStoreVendable;
@property(readonly, nonatomic) _Bool isBetaApp; // @synthesize isBetaApp=_isBetaApp;
@property(readonly, nonatomic) _Bool isEntitled; // @synthesize isEntitled=_isEntitled;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a3b1
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a1a7
- (id)description;	// IMP=0x000000000002a119
@property(readonly, nonatomic) _Bool isTVApp;
- (id)dictionaryRepresentation;	// IMP=0x0000000000029ece
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000029d29

@end

