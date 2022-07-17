//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSNumber;

@interface HMDStreamDataChunk : HMFObject
{
    _Bool _isLast;	// 8 = 0x8
    NSNumber *_sequenceNumber;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000025af6c
@property(readonly, copy) NSData *data; // @synthesize data=_data;
@property(readonly) _Bool isLast; // @synthesize isLast=_isLast;
@property(readonly, copy) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (unsigned long long)hash;	// IMP=0x000000000025ae8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000025ad10
- (id)attributeDescriptions;	// IMP=0x000000000025ab44
- (id)initWithStreamDataDictionary:(id)arg1;	// IMP=0x000000000025a702
- (id)initWithSequenceNumber:(id)arg1 data:(id)arg2 isLast:(_Bool)arg3;	// IMP=0x000000000025a64e

@end
