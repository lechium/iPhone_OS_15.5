//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate;

@interface CARDateRange : NSObject
{
    NSDate *_start;	// 8 = 0x8
    NSDate *_end;	// 16 = 0x10
}

+ (_Bool)_validDate:(id)arg1;	// IMP=0x004000000008d7c9
- (void).cxx_destruct;	// IMP=0x002000000008dcca
@property(retain, nonatomic) NSDate *end; // @synthesize end=_end;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
- (id)description;	// IMP=0x001000000008db8e
- (MISSING_TYPE *)containsDate: /* Error: Ran out of types for this method. */;	// IMP=0x001000000008dabb
@property(readonly, nonatomic) _Bool hasEnd;
@property(readonly, nonatomic) _Bool hasStart;
@property(readonly, nonatomic) _Bool validRange;
@property(readonly, nonatomic) double endTimeIntervalSinceReferenceDate;
@property(readonly, nonatomic) double startTimeIntervalSinceReferenceDate;
- (id)initWithStart:(id)arg1 end:(id)arg2;	// IMP=0x001000000008d892

@end
