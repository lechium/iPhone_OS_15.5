//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface FCRemoveRecordsCommand
{
    NSArray *_recordIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000181b08
- (void).cxx_destruct;	// IMP=0x0000000000182a21
- (void)coalesceWithCommand:(id)arg1;	// IMP=0x0000000000182900
- (_Bool)canCoalesceWithCommand:(id)arg1;	// IMP=0x00000000001828b5
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;	// IMP=0x0000000000181b10
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000181ad5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000181a07
- (id)initWithRecordIDs:(id)arg1;	// IMP=0x000000000018198d
- (id)init;	// IMP=0x0000000000181848

@end
