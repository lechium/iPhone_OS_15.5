//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class ASDPurchase, NSArray, NSDictionary, NSError, NSString;

@interface ASDPurchaseResponseItem : NSObject <NSSecureCoding>
{
    _Bool _success;	// 8 = 0x8
    _Bool _cancelsPurchaseBatch;	// 9 = 0x9
    NSError *_error;	// 16 = 0x10
    ASDPurchase *_purchase;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
    NSArray *_results;	// 40 = 0x28
    double _requestStartTime;	// 48 = 0x30
    double _responseEndTime;	// 56 = 0x38
    double _responseStartTime;	// 64 = 0x40
    NSDictionary *_responseMetrics;	// 72 = 0x48
    NSDictionary *_transationIDs;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000302c6
- (void).cxx_destruct;	// IMP=0x000000000003086a
@property(readonly, nonatomic) NSDictionary *transationIDs; // @synthesize transationIDs=_transationIDs;
@property(readonly, nonatomic) NSDictionary *responseMetrics; // @synthesize responseMetrics=_responseMetrics;
@property(nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(readonly, nonatomic) _Bool cancelsPurchaseBatch; // @synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
@property(readonly, copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, copy, nonatomic) ASDPurchase *purchase; // @synthesize purchase=_purchase;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void)_setTransactionIDs:(id)arg1;	// IMP=0x00000000000307c9
- (void)_setSuccess:(_Bool)arg1;	// IMP=0x00000000000307c0
- (void)_setResponseMetrics:(id)arg1;	// IMP=0x00000000000307af
- (void)_setPurchase:(id)arg1;	// IMP=0x000000000003079e
- (void)_setError:(id)arg1;	// IMP=0x000000000003078d
- (void)_setBundleID:(id)arg1;	// IMP=0x0000000000030760
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000030607
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000302ce
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000301cc
- (id)transactionIdentifierForItemIdentifier:(long long)arg1;	// IMP=0x000000000003014f
- (id)description;	// IMP=0x0000000000030101
- (id)initWithResults:(id)arg1;	// IMP=0x0000000000030096
- (id)init;	// IMP=0x000000000003007d

@end

