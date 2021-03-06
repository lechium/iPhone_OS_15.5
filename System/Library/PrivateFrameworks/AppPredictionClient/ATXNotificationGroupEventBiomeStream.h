//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/BMSourceStream-Protocol.h>
#import <AppPredictionClient/BMStream-Protocol.h>

@class BMStoreStream, NSString;

@interface ATXNotificationGroupEventBiomeStream : NSObject <BMStream, BMSourceStream>
{
    BMStoreStream *_inner;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001023b1
- (void)deleteAllEvents;	// IMP=0x000000000010238c
- (id)source;	// IMP=0x0000000000102376
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x0000000000102360
- (id)initWithStoreConfig:(id)arg1;	// IMP=0x0000000000102296
- (id)init;	// IMP=0x0000000000102282
@property(readonly, nonatomic) NSString *identifier;

@end

