//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString, NSNumber, NSString;
@protocol CNTimeProvider;

@interface CNAutocompleteStoreReproStringRecorder : NSObject
{
    id <CNTimeProvider> _timeProvider;	// 8 = 0x8
    NSMutableString *_reproStringStorage;	// 16 = 0x10
    NSNumber *_lastTimestamp;	// 24 = 0x18
    NSString *_lastString;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000006bab
@property(copy) NSString *lastString; // @synthesize lastString=_lastString;
@property(copy) NSNumber *lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
@property(readonly) NSMutableString *reproStringStorage; // @synthesize reproStringStorage=_reproStringStorage;
@property(readonly) id <CNTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
- (id)stringForKeystrokesSinceLastString:(id)arg1;	// IMP=0x00000000000069e8
- (id)stringForIntervalSinceLastTimestamp:(double)arg1;	// IMP=0x0000000000006903
- (void)recordString:(id)arg1;	// IMP=0x000000000000672c
@property(readonly, copy, nonatomic) NSString *reproString;
- (void)clear;	// IMP=0x0000000000006680
- (id)description;	// IMP=0x00000000000065da
- (id)initWithTimeProvider:(id)arg1;	// IMP=0x000000000000651d
- (id)init;	// IMP=0x00000000000064c3

@end

