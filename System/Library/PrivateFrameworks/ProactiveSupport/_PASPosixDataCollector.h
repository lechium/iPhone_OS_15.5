//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _PASPosixDataCollector : NSObject
{
    NSMutableArray *_chunks;	// 8 = 0x8
    unsigned long long _totalBytes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000045062
- (id)allData;	// IMP=0x0000000000044ef1
@property(readonly, nonatomic) CDUnknownBlockType handleData;

@end

