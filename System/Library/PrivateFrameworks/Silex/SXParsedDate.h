//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXParsedDate-Protocol.h>

@class NSDate, NSString, NSTimeZone;

@interface SXParsedDate : NSObject <SXParsedDate>
{
    _Bool _containedTime;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSTimeZone *_timeZone;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004f5af
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) _Bool containedTime; // @synthesize containedTime=_containedTime;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithDate:(id)arg1 containedTime:(_Bool)arg2 timeZone:(id)arg3;	// IMP=0x000000000004f4ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

