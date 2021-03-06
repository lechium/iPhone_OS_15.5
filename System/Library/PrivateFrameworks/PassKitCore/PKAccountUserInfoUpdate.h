//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSString;

@interface PKAccountUserInfoUpdate : NSObject <NSSecureCoding, PKRecordObject>
{
    NSDate *_updatedDate;	// 8 = 0x8
}

+ (id)recordNamePrefix;	// IMP=0x00000000003f99e2
+ (id)recordType;	// IMP=0x00000000003f99ce
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003f9839
- (void).cxx_destruct;	// IMP=0x00000000003f9b71
@property(retain, nonatomic) NSDate *updatedDate; // @synthesize updatedDate=_updatedDate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f99ef
- (void)encodeWithRecord:(id)arg1;	// IMP=0x00000000003f9977
- (id)initWithRecord:(id)arg1;	// IMP=0x00000000003f98f5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003f98d2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003f9841

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

