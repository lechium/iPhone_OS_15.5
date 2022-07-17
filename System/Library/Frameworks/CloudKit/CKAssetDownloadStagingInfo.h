//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKPropertiesDescription-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSNumber, NSString;

@interface CKAssetDownloadStagingInfo : NSObject <CKPropertiesDescription, NSSecureCoding>
{
    NSNumber *_itemID;	// 8 = 0x8
    NSString *_trackingUUID;	// 16 = 0x10
    NSData *_signature;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000126a5c
- (void).cxx_destruct;	// IMP=0x0000000000126d85
@property(readonly, copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, copy, nonatomic) NSString *trackingUUID; // @synthesize trackingUUID=_trackingUUID;
@property(readonly, copy, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
- (id)redactedDescription;	// IMP=0x0000000000126d55
@property(readonly, copy) NSString *description;
- (void)CKDescribePropertiesUsing:(id)arg1;	// IMP=0x0000000000126c57
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000126b47
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000126a64
- (id)initWithItemID:(id)arg1 trackingUUID:(id)arg2 signature:(id)arg3;	// IMP=0x0000000000126976

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
