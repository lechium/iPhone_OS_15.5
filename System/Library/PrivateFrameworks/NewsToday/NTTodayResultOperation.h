//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCOperation.h>

@class NTPBTodayResultOperationInfo;
@protocol FCContentContext, NFCopying;

@interface NTTodayResultOperation : FCOperation
{
    id <FCContentContext> _contentContext;	// 8 = 0x8
    NTPBTodayResultOperationInfo *_operationInfo;	// 16 = 0x10
    id <NFCopying> _prefetchedContent;	// 24 = 0x18
    CDUnknownBlockType _headlineResultCompletionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001dd90
@property(copy, nonatomic) CDUnknownBlockType headlineResultCompletionHandler; // @synthesize headlineResultCompletionHandler=_headlineResultCompletionHandler;
@property(copy, nonatomic) id <NFCopying> prefetchedContent; // @synthesize prefetchedContent=_prefetchedContent;
@property(copy, nonatomic) NTPBTodayResultOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
- (id)init;	// IMP=0x000000000001dcd6

@end

