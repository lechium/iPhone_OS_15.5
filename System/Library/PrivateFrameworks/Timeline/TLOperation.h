//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSError;
@protocol TLTimelineDataSource;

@interface TLOperation : NSOperation
{
    id <TLTimelineDataSource> _dataSource;	// 8 = 0x8
    CDUnknownBlockType _operationCompletionBlock;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
}

+ (unsigned long long)relativePriority;	// IMP=0x000000000000285c
- (void).cxx_destruct;	// IMP=0x0000000000002acc
@property(readonly) NSError *error; // @synthesize error=_error;
@property(copy) CDUnknownBlockType operationCompletionBlock; // @synthesize operationCompletionBlock=_operationCompletionBlock;
@property(retain) id <TLTimelineDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)init;	// IMP=0x0000000000002864

// Remaining properties
@property(copy) CDUnknownBlockType completionBlock; // @dynamic completionBlock;

@end

