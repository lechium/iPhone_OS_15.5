//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsUI/NSObject-Protocol.h>

@class FCKeyedOperationQueue;
@protocol FCOperationCanceling, NSCopying;

@protocol FCKeyedOperationQueueDelegate <NSObject>
- (id <FCOperationCanceling>)keyedOperationQueue:(FCKeyedOperationQueue *)arg1 performAsyncOperationForKey:(id <NSCopying>)arg2 completion:(void (^)(_Bool))arg3;
@end

