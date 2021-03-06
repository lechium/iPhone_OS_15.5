//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSSecureCoding-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSDate, NSString, SSVMediaContentTasteItem;

@interface SSVMediaContentTasteItemUpdate : NSObject <SSXPCCoding, NSSecureCoding>
{
    SSVMediaContentTasteItem *_item;	// 8 = 0x8
    NSDate *_updateDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f938
- (void).cxx_destruct;	// IMP=0x000000000001f9e7
@property(copy, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(copy, nonatomic) SSVMediaContentTasteItem *item; // @synthesize item=_item;
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x000000000001f94a
- (id)copyXPCEncoding;	// IMP=0x000000000001f940
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f86f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f801

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

