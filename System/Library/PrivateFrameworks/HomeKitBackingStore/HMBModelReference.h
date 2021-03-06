//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMBModelObjectCoder-Protocol.h>
#import <HomeKitBackingStore/HMBQueryableModelFieldCoder-Protocol.h>
#import <HomeKitBackingStore/NSSecureCoding-Protocol.h>

@class HMBLocalZone, NSString, NSUUID;

@interface HMBModelReference : HMFObject <HMBModelObjectCoder, NSSecureCoding, HMBQueryableModelFieldCoder>
{
    NSUUID *_hmbModelID;	// 8 = 0x8
    HMBLocalZone *_localZone;	// 16 = 0x10
}

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00000000000601e0
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;	// IMP=0x0000000000060106
+ (id)hmbDecodeQueryableParameter:(id)arg1;	// IMP=0x00000000000600ed
+ (id)hmbEncodeQueryableParameter:(id)arg1;	// IMP=0x000000000006009a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000060092
- (void).cxx_destruct;	// IMP=0x0000000000060063
@property(nonatomic) __weak HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly, nonatomic) NSUUID *hmbModelID; // @synthesize hmbModelID=_hmbModelID;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000060001
- (id)attributeDescriptions;	// IMP=0x000000000005ff35
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005febc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005fe2f
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005fd25
- (id)referencedModelFromLocalZone:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005fc38
- (id)isValidForContainer:(id)arg1 updatedModelIDs:(id)arg2;	// IMP=0x000000000005f9fe
- (void)associateWithContainer:(id)arg1;	// IMP=0x000000000005f887
- (id)initWithModelID:(id)arg1;	// IMP=0x000000000005f819

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

