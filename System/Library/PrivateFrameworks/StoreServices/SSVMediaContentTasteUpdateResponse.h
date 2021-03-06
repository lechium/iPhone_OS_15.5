//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface SSVMediaContentTasteUpdateResponse : NSObject <SSXPCCoding, NSSecureCoding>
{
    _Bool _cachedResponse;	// 8 = 0x8
    NSArray *_contentTasteItems;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
    unsigned long long _responseRevisionID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000662d7
- (void).cxx_destruct;	// IMP=0x00000000000663ac
@property(nonatomic, getter=isCachedResponse) _Bool cachedResponse; // @synthesize cachedResponse=_cachedResponse;
@property(nonatomic) unsigned long long responseRevisionID; // @synthesize responseRevisionID=_responseRevisionID;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSArray *contentTasteItems; // @synthesize contentTasteItems=_contentTasteItems;
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000662e9
- (id)copyXPCEncoding;	// IMP=0x00000000000662df
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000066117
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000066090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

