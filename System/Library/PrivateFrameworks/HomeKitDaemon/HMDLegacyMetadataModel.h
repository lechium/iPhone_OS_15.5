//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HMDLegacyMetadataModel
{
}

+ (id)createWithLegacyRecord:(id)arg1 modelContainer:(id)arg2 error:(id *)arg3;	// IMP=0x00000000009dbd40
+ (id)properties;	// IMP=0x00000000009dbd10
- (id)encodeWithExistingRecord:(id)arg1 cloudZone:(id)arg2 modelContainer:(id)arg3 error:(id *)arg4;	// IMP=0x00000000009dbaf4
- (id)init;	// IMP=0x00000000009dba4e

// Remaining properties
@property(retain, nonatomic) NSData *cloudMetadata; // @dynamic cloudMetadata;

@end
