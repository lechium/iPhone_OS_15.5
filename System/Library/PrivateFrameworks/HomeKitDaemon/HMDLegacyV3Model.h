//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HMDLegacyV3Model
{
}

+ (id)createWithLegacyRecord:(id)arg1 modelContainer:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000581655
+ (id)properties;	// IMP=0x0000000000581625
- (id)encodeWithExistingRecord:(id)arg1 cloudZone:(id)arg2 modelContainer:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000581189
- (id)init;	// IMP=0x00000000005810e3

// Remaining properties
@property(retain, nonatomic) NSData *cloudBlob; // @dynamic cloudBlob;

@end

