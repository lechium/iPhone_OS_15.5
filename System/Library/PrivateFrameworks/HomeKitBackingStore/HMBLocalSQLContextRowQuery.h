//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary;

@interface HMBLocalSQLContextRowQuery : HMFObject
{
    unsigned long long _recordRow;	// 8 = 0x8
    NSDictionary *_tuples;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000008047f
@property(readonly, nonatomic) NSDictionary *tuples; // @synthesize tuples=_tuples;
@property(readonly, nonatomic) unsigned long long recordRow; // @synthesize recordRow=_recordRow;
- (id)initWithRecordRow:(unsigned long long)arg1 tuples:(id)arg2;	// IMP=0x00000000000803dd

@end
