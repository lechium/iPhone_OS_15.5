//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationCanceling-Protocol.h>
#import <NewsCore/FCOperationIdentifying-Protocol.h>

@class NSMutableArray, NSString;
@protocol FCOperationCanceling><FCOperationIdentifying;

@interface FCAVAssetDownload : NSObject <FCOperationCanceling, FCOperationIdentifying>
{
    NSString *_assetID;	// 8 = 0x8
    id <FCOperationCanceling><FCOperationIdentifying> _underlyingOperation;	// 16 = 0x10
    NSMutableArray *_completionHandlers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001ae1ba
@property(readonly, nonatomic) NSString *longOperationDescription;
@property(readonly, nonatomic) NSString *shortOperationDescription;
- (void)cancel;	// IMP=0x00000000001ae176

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

