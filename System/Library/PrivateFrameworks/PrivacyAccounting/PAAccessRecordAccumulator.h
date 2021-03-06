//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol PAAccessRecord;

@interface PAAccessRecordAccumulator : NSObject
{
    id <PAAccessRecord> _record;	// 8 = 0x8
    NSMutableDictionary *_ongoingIntervals;	// 16 = 0x10
    NSMutableSet *_seenEvents;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000011fc8
@property(readonly, nonatomic) NSMutableSet *seenEvents; // @synthesize seenEvents=_seenEvents;
@property(readonly, nonatomic) NSMutableDictionary *ongoingIntervals; // @synthesize ongoingIntervals=_ongoingIntervals;
@property(retain, nonatomic) id <PAAccessRecord> record; // @synthesize record=_record;
- (id)init;	// IMP=0x0000000000011eff

@end

