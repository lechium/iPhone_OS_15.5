//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LogEntry, NSDictionary, NSMutableArray, PatInclusionProof;

@interface PublicKeysResponse
{
}

+ (id)descriptor;	// IMP=0x000000000007bf46
- (void)setMetadataValue:(id)arg1 key:(id)arg2;	// IMP=0x00000000000a4d7a
- (void)setMetadata:(id)arg1;	// IMP=0x00000000000a4d64
@property(readonly) NSDictionary *metadata;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appLeafsArray; // @dynamic appLeafsArray;
@property(readonly, nonatomic) unsigned long long appLeafsArray_Count; // @dynamic appLeafsArray_Count;
@property(nonatomic) _Bool hasPatClosedProof; // @dynamic hasPatClosedProof;
@property(nonatomic) _Bool hasPatConfigProof; // @dynamic hasPatConfigProof;
@property(nonatomic) _Bool hasTltConfigProof; // @dynamic hasTltConfigProof;
@property(retain, nonatomic) NSMutableArray *intermediatesArray; // @dynamic intermediatesArray;
@property(readonly, nonatomic) unsigned long long intermediatesArray_Count; // @dynamic intermediatesArray_Count;
@property(retain, nonatomic) PatInclusionProof *patClosedProof; // @dynamic patClosedProof;
@property(retain, nonatomic) PatInclusionProof *patConfigProof; // @dynamic patConfigProof;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) LogEntry *tltConfigProof; // @dynamic tltConfigProof;
@property(retain, nonatomic) NSMutableArray *tltLeafsArray; // @dynamic tltLeafsArray;
@property(readonly, nonatomic) unsigned long long tltLeafsArray_Count; // @dynamic tltLeafsArray_Count;

@end

