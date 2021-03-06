//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/BMSourceStream-Protocol.h>
#import <AppPredictionClient/BMStream-Protocol.h>

@class BMStoreStream, NSString;

@interface ATXNotificationSuggestionBiomeStream : NSObject <BMStream, BMSourceStream>
{
    BMStoreStream *_inner;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008a037
- (void)deleteAllEvents;	// IMP=0x000000000008a012
- (id)source;	// IMP=0x0000000000089ffc
- (id)publisherFromStartTime:(double)arg1;	// IMP=0x0000000000089fe6
- (id)initWithStoreConfig:(id)arg1;	// IMP=0x0000000000089f1c
- (id)init;	// IMP=0x0000000000089f08
@property(readonly, nonatomic) NSString *identifier;

@end

