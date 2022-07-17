//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding>
{
    long long _accountID;	// 8 = 0x8
    NSArray *_bundleIDs;	// 16 = 0x10
    long long _isFirstParty;	// 24 = 0x18
    long long _isHidden;	// 32 = 0x20
    long long _isIOSBinaryMacOSCompatible;	// 40 = 0x28
    long long _isPreorder;	// 48 = 0x30
    NSString *_searchTerm;	// 56 = 0x38
    NSArray *_sortOptions;	// 64 = 0x40
    NSArray *_storeIDs;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000020647
- (void).cxx_destruct;	// IMP=0x0000000000020abd
@property(copy) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy) NSArray *sortOptions; // @synthesize sortOptions=_sortOptions;
@property(copy) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property long long isPreorder; // @synthesize isPreorder=_isPreorder;
@property long long isIOSBinaryMacOSCompatible; // @synthesize isIOSBinaryMacOSCompatible=_isIOSBinaryMacOSCompatible;
@property long long isHidden; // @synthesize isHidden=_isHidden;
@property long long isFirstParty; // @synthesize isFirstParty=_isFirstParty;
@property(copy) NSArray *bundleIDs; // @synthesize bundleIDs=_bundleIDs;
@property long long accountID; // @synthesize accountID=_accountID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000020742
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002064f

@end
