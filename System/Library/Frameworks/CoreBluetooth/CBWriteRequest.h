//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError;

@interface CBWriteRequest : NSObject
{
    NSError *_error;	// 8 = 0x8
    struct iovec _iov[16];	// 16 = 0x10
    struct iovec *_iop;	// 272 = 0x110
    int _ion;	// 280 = 0x118
    unsigned long long _offset;	// 288 = 0x120
    _Bool _endOfData;	// 296 = 0x128
    CDUnknownBlockType _completion;	// 304 = 0x130
    NSArray *_dataArray;	// 312 = 0x138
}

- (void).cxx_destruct;	// IMP=0x0000000000030ee0
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool endOfData; // @synthesize endOfData=_endOfData;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end
