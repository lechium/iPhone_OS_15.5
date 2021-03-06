//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/BMSourceStream-Protocol.h>
#import <AppPredictionClient/BMStream-Protocol.h>

@class BMSource, BMStoreStream, NSString;

@interface ATXMissedNotificationRankingBiomeStream : NSObject <BMStream, BMSourceStream>
{
    BMStoreStream *_inner;	// 8 = 0x8
    BMSource *_source;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000029466
- (void)sendEvent:(id)arg1;	// IMP=0x00000000000293f4
- (id)source;	// IMP=0x00000000000293e6
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x00000000000293d0
- (id)initWithStoreConfig:(id)arg1;	// IMP=0x00000000000292d9
- (id)init;	// IMP=0x00000000000292c5
@property(readonly, nonatomic) NSString *identifier;

@end

