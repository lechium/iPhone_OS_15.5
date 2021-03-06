//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSMutableArray, NSNumber, NSString;

@interface ASFReceipt : NSObject
{
    _Bool _verbose;	// 8 = 0x8
    NSMutableArray *_mutableIAPs;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSData *_bundleIDData;	// 40 = 0x28
    NSString *_bundleVersion;	// 48 = 0x30
    NSString *_cancellationReason;	// 56 = 0x38
    NSDate *_creationDate;	// 64 = 0x40
    NSString *_developerID;	// 72 = 0x48
    NSString *_downloadID;	// 80 = 0x50
    NSString *_frAppVersion;	// 88 = 0x58
    NSNumber *_frToolVersion;	// 96 = 0x60
    NSDate *_expirationDate;	// 104 = 0x68
    NSString *_hwtype;	// 112 = 0x70
    NSString *_installerVersionID;	// 120 = 0x78
    NSNumber *_itemID;	// 128 = 0x80
    NSArray *_iaps;	// 136 = 0x88
    NSData *_opaqueDSIDData;	// 144 = 0x90
    NSString *_opaqueDSIDString;	// 152 = 0x98
    NSString *_organizationDisplayName;	// 160 = 0xa0
    NSString *_parentalControls;	// 168 = 0xa8
    NSDate *_purchaseDate;	// 176 = 0xb0
    NSString *_receiptType;	// 184 = 0xb8
    NSDate *_renewalDate;	// 192 = 0xc0
    NSData *_sha1;	// 200 = 0xc8
}

+ (id)receiptWithData:(id)arg1;	// IMP=0x0000000000001c65
+ (id)receiptWithContentsOfFile:(id)arg1;	// IMP=0x0000000000001c18
+ (id)_receiptURLFromRecordWithBundleURL:(id)arg1;	// IMP=0x0000000000001aff
+ (id)_receiptURLForBundleURL:(id)arg1;	// IMP=0x0000000000001aed
+ (id)receiptFromBundleAtURL:(id)arg1;	// IMP=0x0000000000001a21
+ (id)receiptFromBundleAtPath:(id)arg1;	// IMP=0x00000000000019bc
- (void).cxx_destruct;	// IMP=0x00000000000048af
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) NSData *sha1; // @synthesize sha1=_sha1;
@property(readonly) NSDate *renewalDate; // @synthesize renewalDate=_renewalDate;
@property(readonly) NSString *receiptType; // @synthesize receiptType=_receiptType;
@property(readonly) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(readonly) NSString *parentalControls; // @synthesize parentalControls=_parentalControls;
@property(readonly) NSString *organizationDisplayName; // @synthesize organizationDisplayName=_organizationDisplayName;
@property(readonly) NSString *opaqueDSIDString; // @synthesize opaqueDSIDString=_opaqueDSIDString;
@property(readonly) NSData *opaqueDSIDData; // @synthesize opaqueDSIDData=_opaqueDSIDData;
@property(readonly) NSArray *iaps; // @synthesize iaps=_iaps;
@property(readonly) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly) NSString *installerVersionID; // @synthesize installerVersionID=_installerVersionID;
@property(readonly) NSString *hwtype; // @synthesize hwtype=_hwtype;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) NSNumber *frToolVersion; // @synthesize frToolVersion=_frToolVersion;
@property(readonly) NSString *frAppVersion; // @synthesize frAppVersion=_frAppVersion;
@property(readonly) NSString *downloadID; // @synthesize downloadID=_downloadID;
@property(readonly) NSString *developerID; // @synthesize developerID=_developerID;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly) NSString *cancellationReason; // @synthesize cancellationReason=_cancellationReason;
@property(readonly) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(readonly) NSData *bundleIDData; // @synthesize bundleIDData=_bundleIDData;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr *)arg1 onDate:(id)arg2;	// IMP=0x00000000000042fb
- (_Bool)_setPoliciesForTrust:(struct __SecTrust *)arg1;	// IMP=0x0000000000004168
- (void)_parseTokens:(id)arg1;	// IMP=0x0000000000002e3a
- (id)_parseIAPTokens:(id)arg1;	// IMP=0x0000000000002a1a
- (id)_parseIAPsFromData:(id)arg1;	// IMP=0x0000000000002888
- (_Bool)_parseReceiptFromMessage:(struct SecCmsMessageStr *)arg1;	// IMP=0x00000000000026d7
- (struct SecCmsSignedDataStr *)_extractSignedDataFromMessage:(struct SecCmsMessageStr *)arg1;	// IMP=0x000000000000266d
- (_Bool)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout struct SecCmsMessageStr **)arg2;	// IMP=0x000000000000244c
- (_Bool)_decodeIAPReceiptData:(id)arg1;	// IMP=0x00000000000023f9
- (struct __CFArray *)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr *)arg1;	// IMP=0x000000000000235f
@property(readonly) NSString *receiptDataString;
@property(readonly) NSData *receiptData;
@property(readonly) _Bool isVPPLicensed;
@property(readonly) _Bool isRevoked;
@property(readonly) _Bool isDSIDless;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000001eb7
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000001cb2

@end

