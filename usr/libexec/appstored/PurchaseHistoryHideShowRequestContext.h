//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSArray;

@interface PurchaseHistoryHideShowRequestContext : NSObject
{
    NSArray *_items;	// 8 = 0x8
    ACAccount *_account;	// 16 = 0x10
    AMSProcessInfo *_clientInfo;	// 24 = 0x18
}

+ (id)newContextWithItems:(id)arg1 account:(id)arg2 client:(id)arg3;	// IMP=0x004000000008d556
- (void).cxx_destruct;	// IMP=0x002000000008d6e7
@property(readonly) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) ACAccount *account; // @synthesize account=_account;
@property(readonly) NSArray *items; // @synthesize items=_items;
- (id)_initWithItems:(id)arg1 account:(id)arg2 client:(id)arg3;	// IMP=0x001000000008d5e7

@end
