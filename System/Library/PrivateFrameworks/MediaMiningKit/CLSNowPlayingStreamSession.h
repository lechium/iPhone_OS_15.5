//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface CLSNowPlayingStreamSession : NSObject
{
    NSDate *_localEndDate;	// 8 = 0x8
    NSDate *_localStartDate;	// 16 = 0x10
    NSArray *_events;	// 24 = 0x18
}

+ (id)playbackStreamSessionDateSortDescriptors;	// IMP=0x0000000000062865
- (void).cxx_destruct;	// IMP=0x0000000000062c3e
@property(copy, nonatomic) NSArray *events; // @synthesize events=_events;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
- (id)debugDescription;	// IMP=0x0000000000062a9b
- (id)description;	// IMP=0x0000000000062947
- (id)initWithDataCluster:(id)arg1;	// IMP=0x0000000000062f95
- (id)initWithEvents:(id)arg1;	// IMP=0x0000000000062c71

@end

