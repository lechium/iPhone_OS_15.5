//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDStreamDataSequenceNumber, NSData, NSString;

@interface HMDStreamData : HMFObject
{
    HMDStreamDataSequenceNumber *_sequenceNumber;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSString *_type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000025a60c
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
@property(readonly, copy) HMDStreamDataSequenceNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025a5bf
- (unsigned long long)hash;	// IMP=0x000000000025a4fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025a33c
- (id)attributeDescriptions;	// IMP=0x000000000025a18e
- (id)initWithSequenceNumber:(id)arg1 data:(id)arg2 type:(id)arg3;	// IMP=0x000000000025a093

@end

