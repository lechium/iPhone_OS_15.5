//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface WBSHistorySession : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
}

+ (id)currentSession;	// IMP=0x00000000000e1c26
- (void).cxx_destruct;	// IMP=0x00000000000e1df6
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (unsigned long long)hash;	// IMP=0x00000000000e1dd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e1d3e
@property(readonly, nonatomic) _Bool isCurrentSession;
- (id)initWithSessionStartDate:(id)arg1;	// IMP=0x00000000000e1c7e
- (id)init;	// IMP=0x00000000000e1c70

@end

