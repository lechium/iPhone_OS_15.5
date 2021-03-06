//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSError, NSURLSessionTask;
@protocol GEORequestCounterTicket;

@protocol GEORequestCounterTicket <NSObject>
- (void)requestCompletedWithError:(NSError *)arg1;
- (void)requestCompletedWithResult:(unsigned char)arg1;
- (void)startingRequestWithTask:(NSURLSessionTask *)arg1;
- (id <GEORequestCounterTicket>)createSubtask:(_Bool)arg1;
@end

