//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError;

@interface HMMLogEvent : NSObject
{
    _Bool _submitted;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
}

+ (id)alloc;	// IMP=0x0000000000001a11
- (void).cxx_destruct;	// IMP=0x0000000000001c7b
@property(copy) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isSubmitted) _Bool submitted; // @synthesize submitted=_submitted;
@property(readonly) double durationInMilliseconds;
- (void)submitAtDate:(id)arg1;	// IMP=0x0000000000001ab2
- (_Bool)shouldSubmit;	// IMP=0x0000000000001aaa
- (id)init;	// IMP=0x0000000000001a40

@end
