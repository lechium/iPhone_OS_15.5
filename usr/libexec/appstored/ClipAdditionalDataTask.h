//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AIMPurchaseEvent, AMSProcessInfo, NSString;
@protocol AMSBagProtocol;

@interface ClipAdditionalDataTask : NSObject
{
    id <AMSBagProtocol> _bag;	// 8 = 0x8
    unsigned long long _signpostID;	// 16 = 0x10
    NSString *_adamID;	// 24 = 0x18
    NSString *_assetToken;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    AMSProcessInfo *_clientInfo;	// 48 = 0x30
    NSString *_externalVersionID;	// 56 = 0x38
    NSString *_logKey;	// 64 = 0x40
    AIMPurchaseEvent *_purchaseEvent;	// 72 = 0x48
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;	// IMP=0x0020000000258d8e
+ (id)bagKeySet;	// IMP=0x0010000000258cb5
- (void).cxx_destruct;	// IMP=0x002000000025901e
@property(retain) AIMPurchaseEvent *purchaseEvent; // @synthesize purchaseEvent=_purchaseEvent;
@property(retain) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain) NSString *externalVersionID; // @synthesize externalVersionID=_externalVersionID;
@property(retain) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain) NSString *assetToken; // @synthesize assetToken=_assetToken;
@property(retain) NSString *adamID; // @synthesize adamID=_adamID;
- (id)_requestParameters;	// IMP=0x0010000000258e6c
- (id)perform;	// IMP=0x001000000025861c
- (id)initWithBag:(id)arg1;	// IMP=0x0010000000258584

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
